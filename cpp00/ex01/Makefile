NAME	=	phonebook
CPP		=	c++
INCLUDE =	-Iincludes
CFLAGS	=	-Wall -Werror -Wextra -std=c++98 $(INCLUDE)
RM		=	rm -f
SRC		=	src/
SRCS	=	$(SRC)main.cpp $(SRC)Contact.cpp $(SRC)PhoneBook.cpp
OBJS	=	$(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $@

$(SRC)%.o: $(SRC)%.cpp
	$(CPP) $(CFLAGS) -c $<  -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re


