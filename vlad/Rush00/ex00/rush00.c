/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:43:11 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/14 12:44:02 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	check_and_print(int y, int x, int pos_length, int pos_width);

void	rush(int y, int x)
{
	int	pos_width;
	int	pos_length;

	if (x <= 0 || y <= 0)
		return ;
	pos_width = 1;
	while (pos_width <= x)
	{
		pos_length = 1;
		while (pos_length <= y)
		{
			check_and_print(y, x, pos_length, pos_width);
			pos_length++;
		}
		ft_putchar('\n');
		pos_width++;
	}
}

void	check_and_print(int y, int x, int pos_length, int pos_width)
{
	if (pos_length == 1 && pos_width == 1)
		ft_putchar('o');
	else if (pos_length == y && pos_width == 1)
		ft_putchar('o');
	else if (pos_length == 1 && pos_width == x)
		ft_putchar('o');
	else if (pos_length == y && pos_width == x)
		ft_putchar('o');
	else if (pos_width == 1 && (pos_length != 1 || pos_length != y))
		ft_putchar('-');
	else if (pos_length == 1 && (pos_width != 1 || pos_width != x))
		ft_putchar('|');
	else if (pos_length == y && (pos_width != 1 || pos_width != x))
		ft_putchar('|');
	else if (pos_width == x && (pos_length != 1 || pos_length != y))
		ft_putchar('-');
	else
		ft_putchar(' ');
}
