/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:16:43 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/25 13:48:49 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int temp;

	i = 0;
	temp = argc;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	return (0);
}
