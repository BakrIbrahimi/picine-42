/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:33:47 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/11 11:58:44 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_rev_int_tab(int	*tab, int	size)
{
	int	ib;
	int	ba;

	ib = 0;
	while (ib < size)
	{
		ba = tab[ib];
		tab[ib] = tab[size - 1];
		tab[size - 1] = ba;
		ib++;
		size--;
	}
}
