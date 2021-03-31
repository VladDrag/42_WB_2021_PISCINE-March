/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkais <kkais@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 15:18:18 by kkais             #+#    #+#             */
/*   Updated: 2021/03/21 21:50:59 by kkais            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapers.h"
#include <unistd.h>
#include <stdio.h>

int		check_input(char *argv, params *par)
{
	int i;
	int *pointer;

	i = 0;
	pointer = &par->up[0];
	while (argv[i] != '\0')
	{
		if (i % 2 != 0 && argv[i] == ' ')
		{
			i++;
			continue;
		}
		if (i % 2 != 0 && argv[i] != ' ')
			return (0);
		if (i % 2 == 0 && !(argv[i] >= '1' && argv[i] <= (SIZE + '0')))
			return (0);
		*pointer = argv[i] - '0';
		pointer++;
		i++;
	}
	if (i > 31)
		return (0);
	return (1);
}

int		calcula(char mtrx[SIZE][SIZE], params *par)
{
	int numb;
	int y;
	int x;

	if (find_zero(mtrx, &x, &y))
	{
		numb = 1 + '0';
		while (numb <= (SIZE + '0'))
		{
			if (check_for_same_value(mtrx, x, y, numb))
			{
				mtrx[y][x] = numb;
				if (y == 3 && !check_row(mtrx, par, x))
					continue;
				if (x == 3 && !check_column(mtrx, par, y))
					continue;
				if (calcula(mtrx, par) == 1)
					return (1);
			}
			numb++;
		}
		mtrx[y][x] = 0;
		return (0);
	}
	return (1);
}

int		print_mtrx(char mtrx[SIZE][SIZE])
{
	int x;
	int y;

	y = 0;
	while (y < SIZE)
	{
		x = 0;
		while (x < SIZE)
		{
			write(1, &mtrx[y][x], 1);
			if (x != (SIZE - 1))
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	params		par;
	char		mtrx[SIZE][SIZE];

	if (!(check_input(argv[1], &par)) || argc != 2)
		write(1, "Error\n", 6);
	else
	{
		i = 0;
		while (i < SIZE)
		{
			j = 0;
			while (j < SIZE)
			{
				mtrx[i][j] = 0;
				j++;
			}
			i++;
		}
		if (!calcula(mtrx, &par))
			write(1, "Error\n", 6);
		else
			print_mtrx(mtrx);
	}
	return (0);
}
