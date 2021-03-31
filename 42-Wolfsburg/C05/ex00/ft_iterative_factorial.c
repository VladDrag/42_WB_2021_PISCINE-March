/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 17:58:45 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/25 20:08:50 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	counter;

	i = 1;
	counter = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (i);
	while (counter <= nb)
	{
		i *= counter;
		counter++;
	}
	return (i);
}
