SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp
HDRS	=	ClapTrap.hpp ScavTrap.hpp
NAME	=	scavTrap

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)