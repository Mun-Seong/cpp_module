CPP		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
INCLUDE	=	-I ./

NAME	=	phonebook

SRCS	=	Contact.cpp		\
			PhoneBook.cpp	\
			main.cpp

OBJS	=	$(SRCS:.cpp=.o)

all				:	$(NAME)

$(NAME)			:	$(OBJS)
				$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

.c.o			:
				$(CPP) $(FLAGS) -c $< -o $(<:.c=.o)

clean			:
				rm -f $(OBJS)

fclean			:	clean
				rm -f $(NAME)

re				:	fclean all

.PHONY: 		clean fclean all re