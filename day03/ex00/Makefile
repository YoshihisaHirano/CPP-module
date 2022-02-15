SRC		=	main.cpp ClapTrap.cpp
HDRS	=	ClapTrap.hpp
NAME	=	clapTrap

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)