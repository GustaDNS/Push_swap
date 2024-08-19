/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:23:10 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/19 15:06:25 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	create_stack(t_stack **a, char **argv)
{
	t_stack	*temp;
	int		i;

	i = 0;
	*a = (t_stack *)malloc (sizeof(t_stack));
	if (!a)
		ft_free(a, NULL);
	(*a)->data = ft_atol(argv[i]);
	(*a)->index = -1;
	temp = *a;
	while (argv[++i])
	{
		temp->next = (t_stack *)malloc (sizeof(t_stack));
		if (!temp->next)
			ft_free(&temp, NULL);
		temp = temp->next;
		temp->data = ft_atol(argv[i]);
		temp->index = -1;
		temp->next = NULL;
	}
}

void	ft_free(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = *a;
	while (temp_a)
	{
		temp_b = temp_a->next;
		free(temp_a);
		temp_a = temp_b;
	}
	free(a);
	if (b)
	{
		temp_b = *b;
		while (temp_b)
		{
			temp_a = temp_b->next;
			free(temp_b);
			temp_b = temp_a;
		}
		free(b);
	}
	exit(0);
}

void	ft_free_matrix(char **g_matrix)
{
	int i;

	i = 0;
	while (g_matrix[i])
	{
		free(g_matrix[i]);
		i++;
	}
	free(g_matrix);
}