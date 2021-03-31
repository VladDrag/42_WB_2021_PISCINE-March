/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:04:56 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/16 05:37:43 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		buffer;

	i = 0;
	j = 0;
	if (tab)
	{
		while (i < size)
		{
			while (j < size)
			{
				if (tab[i] < tab[j])
				{
					buffer = tab[i];
					tab[i] = tab[j];
					tab[j] = buffer;
				}
				j++;
			}
			i++;
			j = 0;
		}
	}
}
