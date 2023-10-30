NAME = Polymorphism
RM = rm -f
SRC 	= Animal.cpp\
			Cat.cpp\
			Dog.cpp\
			main.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp\

FILIO = $(SRC:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(FILIO)
		${CPP} ${CPPFLAGS} ${FILIO} -o ${NAME}

clean:
	$(RM) $(FILIO)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus