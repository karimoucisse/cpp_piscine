NAME = canon
CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFILES = main.cpp Fixed.cpp
all: $(NAME)

$(NAME):
	$(CPP) $(CPPFLAGS) $(CPPFILES) -o $(NAME)

clean:
	rm -f $(NAME)
PHONY : all clean
