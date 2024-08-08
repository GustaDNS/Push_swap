/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:23:10 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/08 12:09:38 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	create_stack(t_stack **a, char **argv)
{
	t_stack	*temp;
	int		i;

	i = 1;
	*a = (t_stack *)malloc (sizeof(t_stack));
	if (!a)
		return ;
	(*a)->data = ft_atol(argv[i]);
	(*a)->index = -1;
	temp = *a;
	while (argv[++i])
	{
		temp->next = (t_stack *)malloc (sizeof(t_stack));
		if (!temp->next)
			free(temp);
		temp = temp->next;
		temp->data = ft_atol(argv[i]);
		temp->index = -1;
		temp->next = NULL;
	}
}

