/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:48:07 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:48:15 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *s1;

	s1 = (unsigned char *)str;
	while (n > 0)
	{
		if (*s1 == (unsigned char)c)
			return (s1);
		else
			s1++;
		n--;
	}
	return (0);
}
