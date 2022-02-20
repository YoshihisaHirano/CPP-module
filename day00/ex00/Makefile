SRC		=	megaphone.cpp
NAME	=	megaphone

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC)
			c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)