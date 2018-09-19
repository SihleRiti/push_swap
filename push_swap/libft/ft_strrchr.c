/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:19:45 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:28:44 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(str);
	while (*str == '\0')
		return (0);
	while (*str)
		str++;
	while (j > i)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		else
		{
			j--;
			str--;
		}
	}
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (0);
}
