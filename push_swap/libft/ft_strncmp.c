/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:26:57 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:27:02 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str, const char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)str;
	s2 = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && n - 1 > i)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		i++;
	}
	return (*s1 - *s2);
}
