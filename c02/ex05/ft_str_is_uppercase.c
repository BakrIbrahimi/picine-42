/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:33:07 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/11 11:36:31 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	int		m;
	int		ret;
	char	f;

	m = 0;
	ret = 1;
	while (*(str + m) != '\0')
	{
		f = *(str + m);
		if (f < 65 || f > 90)
		{
			ret = 0;
		}
		m++;
	}
	return (ret);
}
