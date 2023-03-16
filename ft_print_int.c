/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:03:51 by vhovhann          #+#    #+#             */
/*   Updated: 2023/02/09 21:41:36 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_intlen(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
	{
		len++;
		return (len);
	}
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

int	ft_print_int(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len += write(1, "-2147483648", 11);
		return (len);
	}
	else if (n < 0)
	{
		len += write (1, "-", 1);
		n = -n;
		ft_print_int(n);
	}
	else if (n > 9)
	{
		ft_print_int(n / 10);
		ft_print_int(n % 10);
	}
	else
		ft_print_char(n + '0');
	len += ft_intlen(n);
	return (len);
}
