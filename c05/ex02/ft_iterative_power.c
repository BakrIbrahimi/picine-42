/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:49:07 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/17 15:59:11 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	b;
	int	a;

	b = 1;
	a = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++b <= power)
	{
		nb *= a;
	}
	return (nb);
}
