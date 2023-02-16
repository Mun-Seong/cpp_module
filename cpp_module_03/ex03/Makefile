CPP		=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -Wshadow -std=c++98
INCLUDE	=	-I ./

NAME	=	diamondtrap

SRCS	=	ClapTrap.cpp	\
			ScavTrap.cpp	\
			FragTrap.cpp	\
			DiamondTrap.cpp	\
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

re				:	fclean all

.PHONY: 		clean fclean all re