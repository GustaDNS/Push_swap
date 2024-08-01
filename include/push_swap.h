/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:11:06 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/01 16:59:22 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libraries/libft/ft_printf/ft_printf.h"
# include "../libraries/libft/libft.h"
# include <limits.h>

/*-------------------Handle-Errors-------------------*/
int	non_numeric(char **argv);
int	limits_int(int argc, char **argv);

#endif