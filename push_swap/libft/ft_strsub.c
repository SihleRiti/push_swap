/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:18:20 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:29:36 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = NULL;
	if (s)
	{
		if (!(s1 = (char *)malloc(len + 1)))
			return (NULL);
		while (i < len)
		{
			s1[i] = s[start];
			i++;
			start++;
		}
		s1[i] = '\0';
	}
	return (s1);
}
