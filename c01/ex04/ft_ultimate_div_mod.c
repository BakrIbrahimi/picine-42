/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:01:10 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/08 17:04:37 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	ba;
	int	ab;

	ba = *a;
	ab = *b;
	*a = ba / ab;
	*b = ba % ab;
}