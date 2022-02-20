SRC		=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HDRS	=	Zombie.hpp
NAME	=	zombie

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)