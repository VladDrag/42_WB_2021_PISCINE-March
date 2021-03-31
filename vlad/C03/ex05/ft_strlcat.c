/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:59:33 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/24 08:21:27 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int counter1;
	unsigned int counter2;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
		
	counter1 = ft_strlen(dest);
	counter2 = 0;
	
	while (src[counter2] != '\0' && counter1 + 1 < size)
	{
		dest[counter1] = src[counter2];
		counter1++;
		counter2++;
	}
	
	dest[counter1] = '\0';
	
	return (ft_strlen(dest) + ft_strlen(&src[counter2]));
}

#include <stdio.h>
#include <unistd.h>

int main()
{
	char dest[30] = "vlad";
	char src[30] =  "not";
	printf("%zu\n", ft_strlcat(dest, src, 20));
	return 0;
}