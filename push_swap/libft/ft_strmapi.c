/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:26:09 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:26:14 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	i = 0;
	dest = NULL;
	if (s && f)
	{
		if (!(dest = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (s[i])
		{
			dest[i] = f(i, s[i]);
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
