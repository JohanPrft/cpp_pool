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

# ######## VARIABLES ######## #

# ---- Final Executable --- #

NAME			=	tlou

# ---- Directories ---- #

DIR_OBJS		=	.bin/

DIR_SRCS		=	sources/

DIR_HEADERS		=	includes/

# ---- Files ---- #

HEADERS_LIST	=	Zombie.hpp

SRCS_LIST		=	main.cpp		\
					Zombie.cpp		\
					newZombie.cpp	\
					randomChump.cpp


HEADERS			=	${HEADERS_LIST:%.hpp=${DIR_HEADERS}%.hpp}

OBJS			=	${SRCS_LIST:%.cpp=${DIR_OBJS}%.o}

# ---- Compilation ---- #

CFLAGS			=	-Wall -Wextra -Werror -std=c++98 -g


# ######## RULES ######## #

all				:	${NAME}

${NAME}			:	${DIR_OBJS} ${OBJS} ${HEADERS}
					c++ ${CFLAGS} -I ${DIR_HEADERS} ${OBJS} ${LIBRARY} -o ${NAME}

run				:	${NAME}
					./${NAME}

${OBJS}			:	${DIR_OBJS}%.o:	${DIR_SRCS}%.cpp ${HEADERS} Makefile
					c++ ${CFLAGS} -I ${DIR_HEADERS} -c $< -o $@

${DIR_OBJS}		:
					mkdir -p ${DIR_OBJS}

clean			:
					${RM} ${OBJS}

fclean			:	clean
					${RM} -r ${NAME} ${DIR_OBJS}

re				:	fclean all

debug			:
					@echo ${HEADERS}

.PHONY:	all run clean fclean re