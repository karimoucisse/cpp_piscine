NAME	=	account
CPP		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM		=	rm -f
SRCS	=	tests.cpp Account.cpp
OBJS	=	$(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $<  -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re



