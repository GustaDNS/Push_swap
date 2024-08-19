/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:51:21 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/19 10:23:15 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rra(t_stack **a, int i)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_b = *a;
	temp_a = *a;
	while (temp_a->next->next)
		temp_a = temp_a->next;
	temp_b = temp_a->next;
	temp_a->next = NULL;
	temp_b->next = *a;
	*a = temp_b;
	if (i == 0)
		ft_printf("rra\n");
}

void	rrb(t_stack **b, int i)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_b = *b;
	temp_a = *b;
	while (temp_a->next->next)
		temp_a = temp_a->next;
	temp_b = temp_a->next;
	temp_a->next = NULL;
	temp_b->next = *b;
	*b = temp_b;
	if (i == 0)
		ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a, 1);
	rrb(b, 1);
	ft_printf("rrr\n");
}
