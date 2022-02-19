SRC		=	main.cpp Bureaucrat.cpp Form.cpp
HDRS	=	Bureaucrat.hpp Form.hpp
NAME	=	bureaucrat1

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)