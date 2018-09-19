/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:17:47 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:29:51 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(int c)
{
	if (c == '\t' || c == ' ' || c == '\n')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (ft_iswhitespace(s[i]))
		i++;
	k = ft_strlen(s);
	k--;
	while (ft_iswhitespace(s[k]))
		k--;
	if (!(str = (char *)malloc(sizeof(char) * k + 1)))
		return (NULL);
	while (i <= k)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
