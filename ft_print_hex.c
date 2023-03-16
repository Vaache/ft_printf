/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:03:48 by vhovhann          #+#    #+#             */
/*   Updated: 2023/02/09 22:32:15 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexlen(unsigned long long int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static void	ft_put_hex(unsigned int num, const char form)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, form);
		ft_put_hex(num % 16, form);
	}
	else
	{
		if (num <= 9)
			ft_print_char(num + '0');
		else
		{
			if (form == 'x')
				ft_print_char(num - 10 + 'a');
			if (form == 'X')
				ft_print_char(num - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hexlen(num));
}
