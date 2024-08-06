/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:14:27 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/06 14:28:42 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	(void)argc;
	t_stack **stack_a;
	t_stack **stack_b;
	t_stack	*temp_a;
	t_stack	*temp_b;

	stack_a = (t_stack **)malloc(sizeof(t_stack));
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	create_stack(stack_a, argv);
	*stack_b = NULL;
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	ss(stack_a, stack_b);
	rrr(stack_a, stack_b);
	temp_a = *stack_a;
	temp_b = *stack_b;
	while (temp_a)
	{
		ft_printf("Stack_a -->[%d]\n", temp_a->data);
		temp_a = temp_a->next;
	}
	while(temp_b)
	{
		ft_printf("Stack_b -->[%d]\n", temp_b->data);
		temp_b = temp_b->next;
	}
	return (0);		
}