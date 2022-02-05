/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:28:14 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/14 18:35:21 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	int	b;
	int	c;

	if (*to_find == 0)
		return (str);
	b = 0;
	while (str[b] != '\0')
	{
		c = 0;
		while (to_find[c] == str[b + c])
		{
			if (to_find[c + 1] == '\0')
			{
				return (str + b);
			}
			c++;
		}
		b++;
	}
	return (0);
}
