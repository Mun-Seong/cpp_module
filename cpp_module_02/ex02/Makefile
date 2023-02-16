CPP		=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror
INCLUDE	=	-I ./

NAME	=	ex02

SRCS	=	Fixed.cpp	\
			main.cpp

OBJS	=	$(SRCS:.cpp=.o)

all				:	$(NAME)

$(NAME)			:	$(OBJS)
				$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)

.cpp.o			:
				$(CPP) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

clean			:
				rm -f $(OBJS)

fclean			:	clean
				rm -f $(NAME)

re				:	fclean 
				make all

.PHONY: 		clean fclean all re