# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 09:45:53 by ski               #+#    #+#              #
#    Updated: 2021/11/04 16:34:14 by ski              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC				= gcc
CFLAGS 			= -Wall -Wextra -Werror
AR 				= ar rc
RM				= rm -f 
NORM			= norminette -R CheckForbiddenSourceHeader
# **************************************************************************** #
NAME 			= a.out
# ----------------------------------------------------------------------------
PATH_MAIN		= ./
HD_MAIN			= main.h
SRC_MAIN		= $(wildcard *.c)
OBJ_MAIN		= ${SRC_MAIN:.c=.o}
MK_MAIN			= Makefile
# ----------------------------------------------------------------------------
PATH_PRINTF		= ../libftprintf/
HD_PRINTF		= ${PATH_PRINTF}ft_printf.h
SRC_PRINTF		= $(wildcard ${PATH_PRINTF}*.c) 
OBJ_PRINTF		= ${SRC_PRINTF:.c=.o}
MK_PRINTF		= ${PATH_PRINTF}Makefile
# ----------------------------------------------------------------------------
PATH_LIBFT		= ../libftprintf/libft/
HD_LIBFT		= ${PATH_LIBFT}libft.h
SRC_LIBFT		= $(wildcard ${PATH_LIBFT}*.c)
OBJ_LIBFT		= ${SRC_LIBFT:.c=.o}
MK_LIBFT		= ${PATH_LIBFT}Makefile
# **************************************************************************** #
PATH_SUBMAKE	= ${PATH_PRINTF}
SRC_NORM		= ${SRC_MAIN}
HD_NORM			= ${HD_MAIN}

# **************************************************************************** #
all: $(NAME)
 $(NAME): $(OBJ_LIBFT) $(OBJ_PRINTF) $(OBJ_MAIN) 
	${CC} $(CFLAGS) $(OBJ_LIBFT) $(OBJ_PRINTF) $(OBJ_MAIN) -o $(NAME)
# $(NAME): $(SRC_MAIN) $(SRC_LIBFT) $(SRC_PRINTF) 
#	${CC} $(CFLAGS) $(SRC_MAIN) $(SRC_LIBFT) $(SRC_PRINTF)  -o $(NAME)

clean: sub_clean
	${RM} *.o

fclean: clean sub_fclean
	${RM} $(NAME)

re: fclean all sub_re

.PHONY: all clean fclean re

nono: sub_nono
#	${NORM} ${SRC_NORM}
#	${NORM} ${HD_NORM}

# **************************************************************************** #
sub_all:
	${MAKE} all -C ${PATH_SUBMAKE}

sub_clean:
	${MAKE} clean -C ${PATH_SUBMAKE}

sub_fclean:
	${MAKE} fclean -C ${PATH_SUBMAKE}

sub_re:
	${MAKE} re -C ${PATH_SUBMAKE}

sub_nono:
	${MAKE} nono -C ${PATH_SUBMAKE}

# **************************************************************************** #
