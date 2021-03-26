/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:49:42 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/25 09:45:43 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = argc - 1;
	if (argc > 1)
	{
		while (argv[j] && j >= 1)
		{
			i = 0;
			while (argv[j][i])
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j--;
		}
	}
	return (0);
}
