#include <iostream>
#include <fstream>

std::string	replaceText(std::string line, std::string replacer, std::string toReplace) 
{
	std::string	newLine;
	size_t		pos;

	newLine = line;
	pos = newLine.find(toReplace);
	while (pos != std::string::npos) {
		newLine.erase(pos);
		newLine.append(replacer);
		newLine.append(line.substr(pos + toReplace.size()));
		pos = newLine.find(toReplace);
	}
	return newLine;
}

int main(int argc, char **argv)
{
	std::fstream	inFile;
	std::fstream	outFile;
	std::string		filename;
	std::string		line;

	if (argc < 4) {
		std::cerr << "Usage: <filename> <str_to_find> <str_to_replace_with>" << std::endl;
		return 0;
	}
	filename = argv[1];
	inFile.open(filename, std::fstream::in);
	if (!inFile.is_open()) {
		std::cerr << "Cannot open the input file!" << std::endl;
		return 0;
	}
	filename += ".replace";
	outFile.open(filename, std::fstream::out);
	if (!outFile.is_open()) {
		std::cerr << "Cannot create/open the output file!" << std::endl;
		return 0;
	}
	while (getline(inFile, line)) {
		outFile << replaceText(line, argv[3], argv[2]) << std::endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}
