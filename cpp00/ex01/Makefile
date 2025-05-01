NAME = phonebook
CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDE = include
SRC = src/
CPPFILES = $(SRC)main.cpp $(SRC)Contact.cpp $(SRC)PhoneBook.cpp
all: $(NAME)

$(NAME):
	$(CPP) $(CPPFLAGS) $(CPPFILES) -I$(INCLUDE) -o $(NAME)

clean:
	rm -f $(NAME)
PHONY : all clean
