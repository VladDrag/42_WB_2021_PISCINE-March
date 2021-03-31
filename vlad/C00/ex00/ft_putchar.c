/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:40:13 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/18 19:46:52 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

1 character = 1 byte */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    i = 0;
    while (i < size)
    {
        printf("%d\n", tab[size - (i + 1)]);
        i++;
    }
}

int        main(void)
{
    int numbers[10] = {1,2,3,4,5,6,7,8,9,0};
    int size = 10;
    ft_rev_int_tab(numbers, size);
}