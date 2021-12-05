/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testft_printf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <marvin@42lausanne.ch>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:04:17 by ski               #+#    #+#             */
/*   Updated: 2021/12/02 19:04:22 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MAIN_H
# define MAIN_H
/* ************************************************************************** */
# include "../libftprintf/ft_printf.h"
# include "../libftprintf/libft/libft.h"
/* ************************************************************************** */
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

/* ************************************************************************** */
void	test_essai_printf(void);

void	test_conv_c(void);
void	test_conv_s(void);
void	test_conv_p(void);
void	test_conv_d(void);
void	test_conv_u(void);
void	test_conv_x_min(void);

/* ************************************************************************** */
#endif