/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkais <kkais@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 21:40:44 by kkais             #+#    #+#             */
/*   Updated: 2021/03/21 22:26:48 by kkais            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapers.h"
#include <unistd.h>
#include <stdio.h>

int		check_column(char mtrx[SIZE][SIZE], params *par, int y)
{
	int i;
	int max;
	int max_view;

	max = 0;
	max_view = 0;
	i = 0;
	while (i < SIZE)
	{
		max_view += mtrx[y][i] > max;
		if (mtrx[y][i] > max)
			max = mtrx[y][i];
		i++;
	}
	if (max_view != par->left[y])
		return (0);
	max = 0;
	max_view = 0;
	while (i >= 0)
	{
		max_view += mtrx[y][i] > max;
		if (mtrx[y][i] > max)
			max = mtrx[y][i];
		i--;
	}
	if (max_view != par->right[y])
		return (0);
	return (1);
}

int		check_for_same_value(char mtrx[SIZE][SIZE], int x, int y, int numb)
{
	int i;

	i = 0;
	while (i < SIZE)
	{
		if (mtrx[y][i] == numb || mtrx[i][x] == numb)
			return (0);
		i++;
	}
	return (1);
}

int		check_row(char mtrx[SIZE][SIZE], params *par, int x)
{
	int i;
	int max;
	int max_view;

	max = 0;
	max_view = 0;
	i = 0;
	while (i < SIZE)
	{
		max_view += mtrx[i][x] > max;
		if (mtrx[i][x] > max)
			max = mtrx[i][x];
		i++;
	}
	if (max_view != par->up[x])
		return (0);
	max = 0;
	max_view = 0;
	while (i >= 0)
	{
		max_view += mtrx[i][x] > max;
		if (mtrx[i][x] > max)
			max = mtrx[i][x];
		i--;
	}
	if (max_view != par->down[x])
		return (0);
	return (1);
}

int		find_zero(char mtrx[SIZE][SIZE], int *x, int *y)
{
	int i;
	int j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			if (mtrx[i][j] == 0)
			{
				*y = i;
				*x = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
