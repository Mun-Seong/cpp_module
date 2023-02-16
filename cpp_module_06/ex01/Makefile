# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 15:22:34 by museo             #+#    #+#              #
#    Updated: 2022/11/04 15:22:36 by museo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic
INCLUDE	=	-I ./

NAME	=	serialize

SRCS	=	main.cpp

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