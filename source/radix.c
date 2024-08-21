/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:17:49 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/21 11:41:12 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	radix(t_stack **a, t_stack **b)
{
	int	size;
	int	bit;

	bit = 0;
	while (!sorted(a))
	{
		size = list_len(a);
		while (size--)
		{
			if (((*a)->index >> bit) & 1)
				ra(a, 0);
			else
				pb(a, b);
		}
		while (*b)
			pa(a, b);
		bit++;
	}
}
