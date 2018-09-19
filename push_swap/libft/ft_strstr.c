/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:18:52 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:29:18 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;
	int j;

	i = 0;
	if (str2[0] == '\0')
		return ((char *)str1);
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] == str1[j + i])
		{
			if (str2[j + 1] == '\0')
				return ((char *)str1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
