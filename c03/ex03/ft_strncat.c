/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:26:40 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/14 18:24:36 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	char			*ba;
	char			*ib;
	unsigned int	m;

	m = 0;
	ba = dest;
	ib = src;
	while (*ba)
		ba++;
	while (m < nb && *ib)
	{
		*ba = *ib;
		ib++;
		ba++;
		m++;
	}
	*ba = 0;
	return (dest);
}
