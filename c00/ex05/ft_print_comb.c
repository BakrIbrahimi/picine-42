/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 14:31:46 by ecaceres          #+#    #+#             */
/*   Updated: 2021/08/07 17:52:07 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char	s, char	f, char m, bool	last)
{
	ft_putchar(s);
	ft_putchar(f);
	ft_putchar(m);
	if (last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	s;
	char	f;
	char	m;
	bool	last;

	s = '0';
	while (s <= '7')
	{
		f = s + 1;
		while (f <= '8')
		{
			m = f + 1;
			while (m <= '9')
			{
				last = !(s == '7' && f == '8' && m == '9');
				ft_write_comb(s, f, m, last);
				m++;
			}
			f++;
		}
		s++;
	}
}
