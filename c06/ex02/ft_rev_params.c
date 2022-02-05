/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:58:41 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/19 10:01:09 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	char	*ba;

	ba = str;
	while (*ba != 0)
	{
		write(1, ba, 1);
		ba++;
	}
}

int	main(int	ac, char	**av)
{
	while (ac > 1)
	{
		ft_putstr(av[--ac]);
		ft_putchar('\n');
	}
	return (0);
}
