/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:41:18 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/25 18:41:37 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	*range = NULL;
	if (max <= min)
		return (0);
	i = 0;
	*range = (int *)malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (-1);
	while (max > min)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int *a;
	a = NULL;

	printf("%d\n",ft_ultimate_range(&a, -1, 9));
	for (int i = 0; i < 10; i++)
		printf("%d\n",a[i]);
	return (0);
}*/
