/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:22:11 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:22:17 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int				i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)src;
	while (s2[i])
	{
		dest[i] = s2[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
