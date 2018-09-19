/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:49:36 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:49:41 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (str1 > str2)
	{
		i = n;
		while (i > 0)
		{
			i--;
			s1[i] = s2[i];
		}
	}
	else
	{
		while (n > i)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (s1);
}
