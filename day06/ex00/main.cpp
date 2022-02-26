#include <iostream>
#include <math.h>

bool	is_digit(char c) {
	return (c >= '0' && c <= '9');
}

bool	check_valid(std::string input)
{
	int		dots = 0;
	size_t	i = 0;

	if (input.size() == 1 || input == "nan" || input == "nanf" ||
	input == "+inf" || input == "-inf" || input == "-inff" || input == "+inff")
		return true;
	if (input[0] == '-' || input[0] == '+')
		i++;
	for (size_t j = i; j < (input.size() - (input[input.size() - 1] == 'f')); j++)
	{
		if (input[j] == '.')
			dots++;
		if (dots > 1 || (!is_digit(input[j]) && input[j] != '.'))
			return false;
	}
	return true;
}

void	print_char(long double num, bool impossible)
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

void	print_int(long double num, bool impossible, bool add_plus)
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

void	print_float(long double num, bool impossible, bool add_plus)
{
	float	cast_float;

	std::cout << "float: ";
	if (impossible || (!isinf(num) && (num < std::numeric_limits<float>::lowest() || 
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

void	print_double(long double num, bool impossible, bool add_plus)
{
	double	cast_double;

	std::cout << "double: ";
	if (impossible || (!isinf(num) && (num < std::numeric_limits<double>::lowest() || 
		num > std::numeric_limits<double>::max())))
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	cast_double = static_cast<double>(num);
	if (add_plus)
		std::cout << "+";
	std::cout << num << std::endl;
}

int main(int argc, char const *argv[])
{
	bool		global_impossible;
	bool		add_plus = 0;
	long double	num;
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
	num = std::strtold(argv[1], NULL);
	print_char(num, global_impossible);
	print_int(num, global_impossible, add_plus);
	print_float(num, global_impossible, add_plus);
	print_double(num, global_impossible, add_plus);
	return 0;
}
