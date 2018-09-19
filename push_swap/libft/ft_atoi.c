/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:54:04 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:54:27 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	int			j;
	long int	nb;

	i = 0;
	j = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		j *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	nb *= j;
	return (nb);
}
