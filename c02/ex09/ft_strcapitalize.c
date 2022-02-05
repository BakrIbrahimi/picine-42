/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:00:05 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/11 14:39:02 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		ib;
	int		nx;
	char	ba;

	ib = 0;
	nx = 1;
	while (*(str + ib) != '\0')
	{
		ba = *(str + ib);
		if (nx == 1 && ba >= 'a' && ba <= 'z')
			str[ib] -= 32;
		else if (nx == 0 && ba >= 'A' && ba <= 'Z')
			str[ib] += 32;
		if (ba < '0' || (ba > '9' && ba < 'A')
			|| (ba > 'Z' && ba < 'a') || ba > 122)
			nx = 1;
		else
			nx = 0;
		ib++;
	}
	return (str);
}
