/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:34:30 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/16 19:05:01 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	print(int y, int x)
{
	ft_putchar((y / 10) + '0');
	ft_putchar((y % 10) + '0');
	ft_putchar(' ');
	ft_putchar((x / 10) + '0');
	ft_putchar((x % 10) + '0');
	if (!(y == 98))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return ;
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a, b);
			b++;
		}
		a++;
	}
	return ;
}
