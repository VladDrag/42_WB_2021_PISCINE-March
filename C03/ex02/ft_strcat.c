/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:15:23 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/23 09:55:47 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		temp = src[j];
		dest[i] = temp;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <unistd.h>

int main()
{
	char dest[100] = "hello\n99923923";
	char src[100] = "Justin";
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return 0;
}