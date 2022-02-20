SRC		=	main.cpp Fixed.cpp
HDRS	=	Fixed.hpp
NAME	=	fixed2

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)