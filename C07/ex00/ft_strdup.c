/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:15:45 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/29 20:08:50 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char    *ft_strdup(char *src)
{
    char    *dest;
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (src[j])
    {
        j++;
    }
    dest = malloc(sizeof(char) * j);
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}


int main()
{
    char *test;
    char *kek = "vlad";
    test = ft_strdup(kek);
    printf("%s\n", test);
    return 0;
}