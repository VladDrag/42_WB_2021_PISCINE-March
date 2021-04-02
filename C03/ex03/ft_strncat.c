/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:55:09 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/23 09:59:17 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	unsigned int		j;
	char				temp;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while ((j < n) && src[j] != '\0')
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

int main()
{
	char dest[32] = "Hello sdsada";
	char src[32] = "Vlad";
	
	ft_strncat(dest, src, 0);
	printf("%s\n", dest);
	return 0;
}