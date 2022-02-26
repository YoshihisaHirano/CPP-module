SRC		=	main.cpp Base.cpp
HDRS	=	Base.hpp A.hpp B.hpp C.hpp
NAME	=	realType

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)