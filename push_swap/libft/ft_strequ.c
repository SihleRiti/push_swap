/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:23:22 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:23:26 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		while (s1[j] || s2[i])
		{
			if (s1[j] == s2[i])
			{
				i++;
				j++;
			}
			else
				break ;
		}
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		else
			return (0);
	}
	return (0);
}
