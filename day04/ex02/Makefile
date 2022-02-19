SRC		=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
HDRS	=	Animal.hpp Cat.hpp Dog.hpp Brain.hpp
NAME	=	abstractAnimal

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)