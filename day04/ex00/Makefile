
SRC		=	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp
HDRS	=	Animal.hpp Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp
NAME	=	catsDogs

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)