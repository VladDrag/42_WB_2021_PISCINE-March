/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkais <kkais@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:52:09 by kkais             #+#    #+#             */
/*   Updated: 2021/03/21 22:01:37 by kkais            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPERS_H
# define SKYSCRAPERS_H
# define SIZE 4

typedef struct	parameters
{
	int up[SIZE];
	int	down[SIZE];
	int	left[SIZE];
	int	right[SIZE];
}	params;

int		check_input(char *argv, params *par);
int		calcula(char mtrx[SIZE][SIZE], params *par);
int		find_zero(char mtrx[SIZE][SIZE], int *x, int *y);
int		check_for_same_value(char mtrx[SIZE][SIZE], int x, int y, int numb);
int		check_column(char mtrx[SIZE][SIZE], params *par, int y);
int		check_row(char mtrx[SIZE][SIZE], params *par, int x);
int		print_mtrx(char mtrx[SIZE][SIZE]);

#endif
