/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:11:35 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:11:43 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(int *a, int a_c, int i)
{
	if ((a[a_c] < a[a_c + 1]) && (a[a_c] < a[a_c + 2])
		&& (a[a_c + 1] > a[a_c + 2]))
		small_sort_two(a, a_c, i);
	else if ((a[a_c] > a[a_c + 1]) && (a[a_c] > a[a_c + 2])
		&& (a[a_c + 1] > a[a_c + 2]))
		small_sort_three(a, a_c, i);
	else if ((a[a_c] > a[a_c + 1]) && (a[a_c] > a[a_c + 2])
		&& (a[a_c + 1] < a[a_c + 2]))
	{
		ra(a, a_c, i);
		ft_putstr("ra\n");
	}
	else if ((a[a_c] > a[a_c + 1]) && (a[a_c] < a[a_c + 2])
		&& (a[a_c + 1] < a[a_c + 2]))
	{
		sa(a, a_c, i);
		ft_putstr("sa\n");
	}
	else if ((a[a_c] < a[a_c + 1]) && (a[a_c] > a[a_c + 2])
		&& (a[a_c + 1] > a[a_c + 2]))
	{
		rra(a, a_c, i);
		ft_putstr("rra\n");
	}
}

void	small_sort_two(int *a, int a_c, int i)
{
	rra(a, a_c, i);
	sa(a, a_c, i);
	ft_putstr("rra\n");
	ft_putstr("sa\n");
}

void	sort_two(int *a, int a_c, int i)
{
	if (a[a_c] > a[a_c + 1])
	{
		sa(a, a_c, i);
		ft_putstr("sa\n");
	}
}

void	small_sort_three(int *a, int a_c, int i)
{
	sa(a, a_c, i);
	rra(a, a_c, i);
	ft_putstr("sa\n");
	ft_putstr("rra\n");
}

int		check_small(int *a, int a_c, int element)
{
	int sm;
	int j;
	int n;

	j = 0;
	sm = a[j++];
	while (j < a_c)
	{
		if (sm > a[j])
			sm = a[j];
		j++;
	}
	j = 0;
	n = a[element];
	if (sm > n)
		return (n);
	while (j < a_c)
	{
		if ((sm < a[j]) && (a[j] < n))
			sm = a[j];
		j++;
	}
	return (sm);
}
