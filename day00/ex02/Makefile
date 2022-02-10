SRC		=	tests.cpp Account.cpp
HDRS	=	Account.hpp
NAME	=	gbu

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)