/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:33:24 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:33:29 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *dst;
	unsigned char *s2;

	dst = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	while (n > 0)
	{
		*dst = *s2;
		if (*dst == (unsigned char)c)
		{
			dst++;
			return (dst);
		}
		s2++;
		dst++;
		n--;
	}
	return (0);
}
