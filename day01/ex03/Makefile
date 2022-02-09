SRC		=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HDRS	=	HumanA.hpp HumanB.hpp Weapon.hpp
NAME	=	violence

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)