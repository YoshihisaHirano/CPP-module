SRC		=	main.cpp
NAME	=	my_sed

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)