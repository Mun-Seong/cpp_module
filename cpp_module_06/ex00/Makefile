# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 18:53:54 by museo             #+#    #+#              #
#    Updated: 2022/11/03 01:15:14 by museo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic
INCLUDE	=	-I ./

NAME	=	converter

SRCS	=	Converter.cpp	\
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