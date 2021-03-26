/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:46:19 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/25 10:58:16 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	counter;

	counter = 0;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb == 2147395600)
		return (46340);
	else if (nb > 2147395600 && nb <= 2147483647)
		return (0);
	else
		while (counter * counter < nb)
			counter++;
	if (counter * counter == nb)
		return (counter);
	return (0);
}
