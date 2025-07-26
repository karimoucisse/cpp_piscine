NAME = a.out
CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f
CPPFILES = main.cpp
OFILES = $(CPPFILES:.cpp=.o)

all: $(NAME)

$(NAME) : $(OFILES)
	$(CPP) $(CPPFLAGS) $(OFILES) -o $(NAME)
%.o:%.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@
clean:
	$(RM) $(OFILES)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re

