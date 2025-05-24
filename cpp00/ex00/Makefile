

NAME	=	megaphone
CPP		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM		=	rm -f
SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $@

%.o: $(SRCS)
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

