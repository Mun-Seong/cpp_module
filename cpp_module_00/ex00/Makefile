CPP		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	megaphone

SRCS	=	megaphone.cpp

OBJS	=	$(SRCS:.cpp=.o)

.c.o			:
				$(CPP) $(FLAGS) -c $< -o $(<:.c=.o)

all				:	$(NAME)

$(NAME)			:	$(OBJS)
				$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

clean			:
				rm -f $(OBJS)

fclean			:	clean
				rm -f $(NAME)

re				:	fclean all

.PHONY: 		clean fclean all re