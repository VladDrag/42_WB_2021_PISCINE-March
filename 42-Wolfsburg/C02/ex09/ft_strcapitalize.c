/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:59:12 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/24 13:44:45 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_letter(char c)  //lowercase
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int		is_capital(char c) //uppercase
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		is_number(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	str2[100];

	i = 0;
	while (str[i] != '\0')
	{
		if (is_capital(str[i]) == 1)
			str[i] = str[i] + 32;
		str2[i] = str[i];
		if (is_letter(str[i]) == 1)
		{
			if (is_number(str[i - 1]) == 1)
			{
				str2[i] = str[i];
			}
			else if (is_letter(str[i - 1]) != 1)
			{
				str2[i] = str[i] - 32;
			}
		}
		i++;
	}
	str2[i] = '\0';
	str = str2;
	return (str);
}
