/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:25:45 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:25:50 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			dest[i] = f(s[i]);
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
