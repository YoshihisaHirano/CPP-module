SRC		=	main.cpp Contact.cpp PhoneBook.cpp
HDRS	=	Contact.hpp PhoneBook.hpp
NAME	=	awesome_phonebook

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)