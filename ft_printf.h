/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:04:02 by vhovhann          #+#    #+#             */
/*   Updated: 2023/02/09 22:31:13 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	ft_print_char(int c);
int	ft_print_int(int n);
int	ft_print_str(char *s);
int	ft_print_uint(unsigned int n);
int	ft_print_hex(unsigned int num, const char format);
int	ft_print_ptr(uintptr_t ptr);
int	ft_printf(const char *s, ...);

#endif