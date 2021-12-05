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
NAME 			= a.out

CC				= gcc
CFLAGS 			= -Wall -Wextra -Werror
AR 				= ar rc
RM				= rm -f 
NORM			= norminette -R CheckForbiddenSourceHeader

PATH_PRINTF		= ../libftprintf/
PATH_LIBFT		= ../libftprintf/libft/

SRC_MAIN		= $(wildcard *.c)
SRC_LIBFT		= $(wildcard ${PATH_LIBFT}*.c)
SRC_PRINTF		= $(wildcard ${PATH_PRINTF}*.c) 

MK_MAIN			= Makefile
MK_LIBFT		= ${PATH_LIBFT}Makefile
MK_PRINTF		= ${PATH_PRINTF}Makefile

HD_MAIN			= main.h
HD_LIBFT		= ${PATH_LIBFT}libft.h
HD_PRINTF		= ${PATH_PRINTF}ft_printf.h

all: $(NAME)
# **************************************************************************** #
# $(NAME): $(OBJ_LIBFT) $(OBJ_PRINTF) $(OBJ_MAIN) 
#	${CC} $(CFLAGS) $(OBJ_LIBFT) $(OBJ_PRINTF) $(OBJ_MAIN) -o $(NAME)
$(NAME): $(SRC_MAIN) $(SRC_LIBFT) $(SRC_PRINTF) 
	${CC} $(CFLAGS) $(SRC_MAIN) $(SRC_LIBFT) $(SRC_PRINTF)  -o $(NAME)
# **************************************************************************** #
test:
	ls $(SRC_PRINTF)

clean: sub_clean
	${RM} *.o

fclean: clean sub_fclean
	${RM} $(NAME)

re: fclean all sub_re

.PHONY: all clean fclean re

# **************************************************************************** #
sub_all:
	${MAKE} all -C ${PATH_PRINTF}

sub_clean:
	${MAKE} clean -C ${PATH_PRINTF}

sub_fclean:
	${MAKE} fclean -C ${PATH_PRINTF}

sub_re:
	${MAKE} re -C ${PATH_PRINTF}

# **************************************************************************** #
