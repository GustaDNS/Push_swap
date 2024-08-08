/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:14:27 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/08 15:35:22 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	(void)argc;
	t_stack **stack_a;
	t_stack **stack_b;

	stack_a = (t_stack **)malloc(sizeof(t_stack));
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	create_stack(stack_a, argv);
	*stack_b = NULL;
	handle_negative(stack_a, 0);
	radix(stack_a, stack_b);
	return (0);		
}