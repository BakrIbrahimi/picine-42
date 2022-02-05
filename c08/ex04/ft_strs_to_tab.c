/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:37:53 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/24 16:44:05 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		s_len;

	s_len = 0;
	while (src[s_len] != '\0')
		s_len++;
	copy = (char *)malloc(sizeof(char) * (s_len + 1));
	if (copy == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (src[i] != '\0')
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s_str;
	int			i;

	s_str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (s_str == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (++i < ac)
		{
			s_str[i].size = ft_strlen(av[i]);
			s_str[i].str = av[i];
			s_str[i].copy = ft_strdup(av[i]);
		}
		s_str[i].str = 0;
		return (s_str);
	}
}
