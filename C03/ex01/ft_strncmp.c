/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:46:47 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/25 07:46:14 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				temp;

	i = 0;
	temp = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			temp = s1[i] - s2[i];
			return (temp);
		}
		i++;
	}
	return (temp);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char *str1; char *str2;
	str1 = "gi there";
	str2 = "hi there Vlad";
	int a = 1;
    if(ft_strncmp(str1, str2, a)==0)
    {
        printf("\nYou entered the same string two times\n");
		printf("%d\n", strncmp(str1, str2, a));
		printf("%d\n", ft_strncmp(str1, str2, a));
    }

    else
    {
		printf("\nEntered strings are not same!\n");
		printf("%d\n", ft_strncmp(str1, str2, a));
		printf("%d\n", strncmp(str1, str2, a));
    }
	
    return 0;
}