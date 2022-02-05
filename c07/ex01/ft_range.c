/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:34:22 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/25 18:42:35 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*ran;
	int	i;

	ran = NULL;
	if (max <= min)
		return (ran);
	i = 0;
	ran = (int *)malloc((max - min) * sizeof(int));
	if (ran == NULL)
		return (NULL);
	while (max > min)
	{
		ran[i] = min;
		min++;
		i++;
	}
	return (ran);
}
