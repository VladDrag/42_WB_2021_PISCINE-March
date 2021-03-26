/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 08:21:36 by vdragomi          #+#    #+#             */
/*   Updated: 2021/03/25 10:58:01 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else
		while (power >= 1)
		{
			return (nb * ft_recursive_power(nb, power - 1));
		}
	return (0);
}
