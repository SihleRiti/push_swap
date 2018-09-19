/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_functions3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:07:27 by sriti             #+#    #+#             */
/*   Updated: 2018/09/17 16:07:31 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		pos_big(int *a, int a_c)
{
	int big;
	int j;

	big = biggest(a, a_c);
	j = 0;
	while (big != a[j])
		j++;
	return (j);
}

int		rrr_function2(int element, int *a, int a_c, int i)
{
	int j;

	j = pos_big(a, a_c);
	while (element < i && j < a_c)
	{
		rrr(a, a_c, i);
		ft_putstr("rrr\n");
		element++;
		j++;
	}
	while (element < i)
	{
		rra(a, a_c, i);
		ft_putstr("rra\n");
		element++;
	}
	while (j < a_c)
	{
		rrb(a, a_c);
		ft_putstr("rrb\n");
		j++;
	}
	a_c = pb(a, a_c, i);
	ft_putstr("pb\n");
	return (a_c);
}

int		rr_function2(int element, int *a, int a_c, int i)
{
	int j;

	j = pos_big(a, a_c);
	while (element > a_c && j > 0)
	{
		rr(a, a_c, i);
		ft_putstr("rr\n");
		element--;
		j--;
	}
	while (element > a_c)
	{
		ra(a, a_c, i);
		ft_putstr("ra\n");
		element--;
	}
	while (j > 0)
	{
		rb(a, a_c);
		ft_putstr("rb\n");
		j--;
	}
	a_c = pb(a, a_c, i);
	ft_putstr("pb\n");
	return (a_c);
}

int		ra_rrb2(int element, int *a, int a_c, int i)
{
	int j;

	j = pos_big(a, a_c);
	while (element > a_c)
	{
		ra(a, a_c, i);
		ft_putstr("ra\n");
		element--;
	}
	while (j < a_c)
	{
		rrb(a, a_c);
		ft_putstr("rrb\n");
		j++;
	}
	a_c = pb(a, a_c, i);
	ft_putstr("pb\n");
	return (a_c);
}

int		rra_rb2(int element, int *a, int a_c, int i)
{
	int j;

	j = pos_big(a, a_c);
	while (element < i)
	{
		rra(a, a_c, i);
		ft_putstr("rra\n");
		element++;
	}
	while (j > 0)
	{
		rb(a, a_c);
		ft_putstr("rb\n");
		j--;
	}
	a_c = pb(a, a_c, i);
	ft_putstr("pb\n");
	return (a_c);
}
