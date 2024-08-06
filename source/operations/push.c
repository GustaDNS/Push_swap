/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:41:38 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/06 11:13:28 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack *temp_a;
	t_stack *temp_b;
	
	temp_b = *b;
	temp_a = (*b)->next;
	temp_b->next = *a;
	*b = temp_a;
	*a = temp_b;
	ft_printf("pa\n");
}
void	pb(t_stack **a, t_stack **b)
{
	t_stack *temp_a;
	t_stack *temp_b;

	temp_a = *a;
	temp_b = (*a)->next;
	temp_a->next = *b;
	*a = temp_b;
	*b = temp_a;
	ft_printf("pb\n");
}