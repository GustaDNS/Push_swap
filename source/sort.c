/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:16:53 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/19 11:38:11 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void sort_2(t_stack **a)
{
	if ((*a)->data > (*a)->next->data)
		sa(a, 0);
}
void	sort_3(t_stack **a)
{
	if (sorted(a))
		return ;
	if ((*a)->data > (*a)->next->data && (*a)->data > (*a)->next->next->data)
	{
		ra(a, 0);
		if ((*a)->data > (*a)->next->data)
			sa(a, 0);
	}
	else if ((*a)->data > (*a)->next->data && (*a)->data < (*a)->next->next->data)
		sa(a, 0);
	else if ((*a)->data < (*a)->next->data && (*a)->data > (*a)->next->next->data)
		rra(a, 0);
	else if ((*a)->data < (*a)->next->data && (*a)->next->data > (*a)->next->next->data)
	{
		sa(a, 0);
		ra(a, 0);
	}
	else if ((*a)->data < (*a)->next->data && (*a)->data < (*a)->next->next->data)
	{
		ra(a, 0);
		sa(a, 0);
	}
}

void	sort_4(t_stack **a, t_stack **b, int i)
{
	if (sorted(a))
		return ;
	else if ((*a)->next->next->next->index == i)
	{
		rra(a, 0);
		pb(a, b);
		sort_3(a);
		pa(a, b);
		return ;
	}
	while ((*a)->index != i)
		ra(a, 0);
	pb(a, b);
	sort_3(a);
	pa(a, b);
}
void	sort_5(t_stack **a, t_stack **b)
{
	if (sorted(a))
		return ;
	else if ((*a)->next->next->next->next->index == 0)
	{
		rra(a, 0);
		pb(a, b);
		sort_4(a, b, 1);
		pa(a, b);
		return ;
	}
	else if ((*a)->next->next->next->index == 0)
	{
		rra(a, 0);
		rra(a, 0);
		pb(a, b);
		sort_4(a, b, 1);
		pa(a, b);
		return ;
	}
	while ((*a)->index != 0)
		ra(a, 0);
	pb(a, b);
	sort_4(a, b, 1);
	pa(a, b);
}

void	ft_union(t_stack **a, t_stack **b)
{
	if (list_len(a) == 2)
		sort_2(a);
	else if (list_len(a) == 3)
		sort_3(a);
	else if (list_len(a) == 4)
		sort_4(a, b, 0);
	else if (list_len(a) == 5)
		sort_5(a, b);
}