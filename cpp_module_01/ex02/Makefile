# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 00:16:32 by museo             #+#    #+#              #
#    Updated: 2022/10/27 14:07:15 by museo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
INCLUDE	=	-I ./

NAME	=	ex02

SRCS	=	main.cpp

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