#include <iostream>
#include <math.h>

bool	is_digit(char c) {
	return (c >= '0' && c <= '9');
}

bool	check_valid(std::string input)
{
	int	dots = 0;

	if (input.size() == 1 || input == "nan" || input == "nanf" ||
	input == "+inf" || input == "-inf" || input == "-inff" || input == "+inff")
		return true;
	for (size_t i = 0; i < (input.size() - (input[input.size()] == 'f')); i++)
	{
		if (input[i] == '.')
			dots++;
		if (dots > 1 || (!is_digit(input[i]) && input[i] != '.'))
			return false;
	}
	return true;
}

void	print_char(double num, bool impossible)
{
	char	cast_char;

	std::cout << "char: ";
	if (impossible || isnan(num) || isinf(num))
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	if (num < std::numeric_limits<char>::min() || 
		num > std::numeric_limits<char>::max())
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	cast_char = static_cast<char>(num);
	if (!(cast_char > 31 && cast_char < 127))
	{
		std::cout << "non printable" << std::endl;
		return;
	}
	std::cout << cast_char << std::endl;
}

void	print_int(double num, bool impossible, bool add_plus)
{
	int	cast_int;

	std::cout << "int: ";
	if (impossible || isnan(num) || isinf(num))
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	if (num < std::numeric_limits<int>::min() || 
		num > std::numeric_limits<int>::max())
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	cast_int = static_cast<int>(num);
	if (add_plus)
		std::cout << "+";
	std::cout << cast_int << std::endl;
}

void	print_float(double num, bool impossible, bool add_plus)
{
	float	cast_float;

	std::cout << "float: ";
	if (impossible || (!isinf(num) && (num < std::numeric_limits<float>::min() || 
		num > std::numeric_limits<float>::max())))
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	cast_float = static_cast<float>(num);
	if (add_plus)
		std::cout << "+";
	std::cout << cast_float << "f" << std::endl;
}

void	print_double(double num, bool impossible, bool add_plus)
{
	long double	wider_num;

	std::cout << "double: ";
	wider_num = static_cast<long double>(num);
	if (impossible || (!isinf(num) && (wider_num < std::numeric_limits<double>::min() || 
		wider_num > std::numeric_limits<double>::max())))
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	if (add_plus)
		std::cout << "+";
	std::cout << num << std::endl;
}

int main(int argc, char const *argv[])
{
	bool	global_impossible;
	bool	add_plus = 0;
	double	num;
	std::string	arg;

	if (argc != 2)
	{
		std::cout << "Usage: <num_to_convert>" << std::endl;
		return 0;
	}
	arg = argv[1];
	if (arg[0] == '+')
		add_plus = 1;
	global_impossible = !check_valid(arg);
	num = std::strtod(argv[1], NULL);
	print_char(num, global_impossible);
	print_int(num, global_impossible, add_plus);
	print_float(num, global_impossible, add_plus);
	print_double(num, global_impossible, add_plus);
	return 0;
}
