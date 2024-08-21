/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:19:01 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/21 11:31:39 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ra(t_stack **a, int i)
{
	t_stack	*temp_a;

	temp_a = *a;
	if (*a && (*a)->next)
	{
		while (temp_a->next)
			temp_a = temp_a->next;
		temp_a->next = *a;
		*a = (*a)->next;
		temp_a->next->next = NULL;
	}
	if (i == 0)
		ft_printf("ra\n");
}

void	rb(t_stack **b, int i)
{
	t_stack	*temp_b;

	temp_b = *b;
	if (*b && (*b)->next)
	{
		while (temp_b->next)
			temp_b = temp_b->next;
		temp_b->next = *b;
		*b = (*b)->next;
		temp_b->next->next = NULL;
	}
	if (i == 0)
		ft_printf("ra\n");
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a, 1);
	rb(b, 1);
	ft_printf("rr\n");
}
