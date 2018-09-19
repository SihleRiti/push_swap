/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:22:59 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:23:05 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	j = ft_strlen(str);
	if (!(dest = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (i <= j)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
