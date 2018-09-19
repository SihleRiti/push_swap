/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:53:33 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:53:38 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isnegetive(int nbr)
{
	int i;

	i = 1;
	if (nbr < 0)
		i *= -1;
	return (i);
}

static char		*ft_str(char *ptr)
{
	char	*str;
	int		i;

	i = 0;
	while (ptr[i] != '\0')
		i++;
	if (!(str = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	str = ft_strdup(ptr);
	return (str);
}

char			*ft_itoa(int n)
{
	int			neg;
	char		*str;
	long int	nbr;
	char		buf[20];

	neg = ft_isnegetive(n);
	nbr = n;
	str = &buf[20];
	*str = '\0';
	if (nbr == 0)
		*--str = '0';
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 0)
	{
		*--str = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (neg == -1)
		*--str = '-';
	return (ft_str(str));
}
