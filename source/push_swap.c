/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:14:27 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/21 15:14:20 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	char	**verify;

	verify = verify_split(argc, argv);
	stack_a = (t_stack **)malloc(sizeof(t_stack));
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	if (mix_functions(argc, verify, stack_a, stack_b))
		return (0);
	if (!stack_a || !stack_b)
		ft_free(stack_a, stack_b);
	create_stack(stack_a, verify);
	*stack_b = NULL;
	handle_negative(stack_a, 0);
	if (!sorted(stack_a))
		ft_union(stack_a, stack_b);
	if (!sorted(stack_a))
		radix(stack_a, stack_b);
	if (argc == 2)
		ft_free_matrix(verify);
	ft_free(stack_a, stack_b);
	return (0);
}
