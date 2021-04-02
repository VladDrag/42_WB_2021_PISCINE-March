/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 06:26:50 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/23 18:27:24 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if ((to_find[j + 1]) == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <unistd.h>

int main()
{
	char str[50] = "I like-ra rap music";
	char to_find[50] = "rap";
	printf("%s\n", ft_strstr(str, to_find));
	return 0;
}