/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:05:24 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/17 15:48:40 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_recursive_factorial_recursive(int	b, int	n)
{
	if (b == 0)
		return (n);
	if (b >= 0)
		return (ft_recursive_factorial_recursive(b - 1, n * b));
	return (0);
}

int	ft_recursive_factorial(int	nb)
{
	return (ft_recursive_factorial_recursive(nb, 1));
}
