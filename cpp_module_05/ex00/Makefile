# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 20:38:15 by museo             #+#    #+#              #
#    Updated: 2022/11/03 16:11:57 by museo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic

NAME	=	ex00

SRCS	=	Bureaucrat.cpp	\
			main.cpp

OBJS	=	$(SRCS:.cpp=.o)

.cpp.o			:
				$(CPP) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

all				:	$(NAME)

$(NAME)			:	$(OBJS)
				$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean			:
				rm -f $(OBJS)

fclean			:	clean
				rm -f $(NAME)

re				:	fclean
				make all

.PHONY: 		clean fclean all re