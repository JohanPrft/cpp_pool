# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#   Created: 2023/07/19 11:41:18 by jprofit           #+#    #+#               #
#   Updated: 2023/07/19 11:41:18 by jprofit          ###   ########.fr         #
#                                                                              #
# **************************************************************************** #

### ARGUMENTS ###

NAME	= megaphone

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	=

SRCS	= megaphone.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

### RULES ###

all: 			${NAME}

run:			${NAME}
				./${NAME}

${NAME}:		${OBJS}
				${CC} ${FLAGS} ${OBJS} -o $@

%.o:			%.cpp ${HEADER} Makefile
				${CC} ${FLAGS} -c $< -o $@

clean:
				$(RM) ${OBJS}

fclean:			clean
				$(RM) ${NAME}

re:				fclean
				$(MAKE) all

.PHONY:			all run clean fclean re