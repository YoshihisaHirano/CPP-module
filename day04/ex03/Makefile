SRC	=	main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp
HDRS	=	AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp
NAME	=	materiaGame

.PHONY	:	all fclean

all		:	$(NAME)

$(NAME)	:	$(SRC) $(HDRS)
			c++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

fclean	:	
			rm -f $(NAME)