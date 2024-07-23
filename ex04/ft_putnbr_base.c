/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:52:25 by liulm             #+#    #+#             */
/*   Updated: 2024/07/23 12:58:20 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_in_binary(int nb)
{
	
}

void	print_in_hexadecimal(int nb)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb >= 16)
	{
		print_in_hexadecimal(nb / 16);
		print_in_hexadecimal(nb % 16);
	}
	else
	{
		ft_putchar(hexa[nb]);
	}
}

void	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(nb % 10 + '0');
	}
}
