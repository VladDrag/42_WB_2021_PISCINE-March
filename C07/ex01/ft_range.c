/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:15:45 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/29 20:08:50 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *array;
    int i;

    array = malloc(sizeof(int) * (max - min));
    i = 0;
    while (min < max)
    {
        array[i] = min;
        min++;
        i++;
    }
    return (array);
}

int main()
{
    int *array;
    array = ft_range(4, 5);
    int i;

    i = 0;
    while (array[i])
    {
        printf("%d\n", array[i]);
        i++;
    }
    return 0;

}
