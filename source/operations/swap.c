/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:11:36 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/07 11:37:30 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sa(t_stack **a, int i)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = *a;
	temp_b = (*a)->next;
	temp_a->next = (*a)->next->next;
	*a = temp_b;
	(*a)->next = temp_a;
	if (i == 0)
		ft_printf("sa\n");
}

void	sb(t_stack **b, int i)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_b = *b;
	temp_a = (*b)->next;
	temp_b->next = (*b)->next->next;
	*b = temp_a;
	(*b)->next = temp_b;
	if (i == 0)
		ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a, 1);
	sb(b, 1);
	ft_printf("ss\n");
}
