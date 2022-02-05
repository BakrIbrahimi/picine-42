/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:46:09 by bibrahim          #+#    #+#             */
/*   Updated: 2021/08/11 11:14:32 by bibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	m;

	m = 0;
	while (*(src + m) != '\0' && m < n)
	{
		*(dest + m) = *(src + m);
		m++;
	}
	while (m < n)
	{
		*(dest + m) = '\0';
		m++;
	}
	return (dest);
}
