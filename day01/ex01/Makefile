SRC		=	main.cpp Zombie.cpp ZombieHorde.cpp
HDRS	=	Zombie.hpp
NAME	=	zombies

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)