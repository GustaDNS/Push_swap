/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:34:49 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/20 16:33:19 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	sorted(t_stack **a)
{
	t_stack *temp_a;

	temp_a = *a;
	while (temp_a->next)
	{
		if (temp_a->index > temp_a->next->index)
			return (0);
		else
			temp_a = temp_a->next;
	}
	return (1);
}

void handle_negative(t_stack **a, int handle)
{
	t_stack *temp_a;
	t_stack *temp_b;
	int i;

	temp_a = *a;
	while (temp_a)
	{
		temp_b = *a;
		i = INT_MAX;
		while (temp_b)
		{
			if (temp_b->data < i && temp_b->index == -1)
				i = temp_b->data;
			temp_b = temp_b->next;
		}
		temp_b = *a;
		while (temp_b)
		{
			if (temp_b->data == i)
				temp_b->index = handle++;
			temp_b = temp_b->next;
		}
		temp_a = temp_a->next;
	}
}

int	list_len(t_stack **a)
{
	t_stack	*temp_a;
	int		i;
	
	temp_a = *a;
	i = 0;
	while (temp_a)
	{
		temp_a = temp_a->next;
		i++;
	}
	return (i);
}
int	mix_functions(int argc, char **verify, t_stack **a, t_stack **b)
{
	int	count;

	count = 0;
	count += limits_int(verify);
	count += non_numeric(verify);
	count += equal_int(verify);
	if (count != 0)
	{
		ft_printf("Error");
		if (argc == 2)
			ft_free_matrix(verify);
		free(a);
		free(b);
	}
	return (count);
}