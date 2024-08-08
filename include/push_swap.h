/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:11:06 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/08 15:28:28 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}	t_stack;

/*-----------------Handle-Errors-----------------*/
int		non_numeric(char **argv);
int		limits_int(char **argv);
int		equal_int(int argc, char **argv);
char	**verify_split(int argc, char **argv);
long	ft_atol(const char *str);

/*---------------------Moves---------------------*/
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	rra(t_stack **a, int i);
void	rrb(t_stack **b, int i);
void	rrr(t_stack **a, t_stack **b);
void	sa(t_stack **a, int i);
void	sb(t_stack **b, int i);
void	ss(t_stack **a, t_stack **b);
void	ra(t_stack **a, int i);
void	rb(t_stack **b, int i);
void	rr(t_stack **a, t_stack **b);

/*---------------------Stack---------------------*/
void	create_stack(t_stack **a, char **argv);

/*---------------------Utils---------------------*/
void	handle_negative(t_stack **a, int handle);
int		list_len(t_stack **a);

/*---------------------Sorting---------------------*/
int		sorted(t_stack **a);
void	radix(t_stack **a, t_stack **b);


#endif