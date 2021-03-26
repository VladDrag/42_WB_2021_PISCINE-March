/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 07:56:36 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/25 07:41:59 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char *str1; char *str2;
	str1 = "vlad2";
	str2 = "vlad";
    if(ft_strcmp(str1, str2)==0)
    {
        printf("\nYou entered the same string two times\n");
		printf("%d\n", ft_strcmp(str1, str2));
		printf("%d\n", strcmp(str1, str2));
    }
    else
    {
		printf("\nEntered strings are not same!\n");
		printf("%d\n", ft_strcmp(str1, str2));
		printf("%d\n", strcmp(str1, str2));
    }
	
    return 0;
}