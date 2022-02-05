/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:03:48 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/17 16:39:55 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power_recursive(int	nb, int	power, int	n)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (n);
	if (power >= 1)
		return (ft_recursive_power_recursive(nb, power - 1, n * nb));
	return (0);
}

int	ft_recursive_power(int	nb, int	power)
{
	return (ft_recursive_power_recursive(nb, power, nb));
}
