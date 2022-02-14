SRC		=	main.cpp Fixed.cpp
HDRS	=	Fixed.hpp
NAME	=	fixed1

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)