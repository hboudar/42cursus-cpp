NAME	=	phonebook

SRCS	=	main.cpp
OBJS	=	$(SRCS:.cpp=.opp)
headers	=	PhoneBook.hpp Contact.hpp

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.opp: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
