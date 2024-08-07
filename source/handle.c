/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:19:48 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/07 14:33:02 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	ft_atol(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] <= 13 && str[i] >= 9) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

int	limits_int(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_atol(argv[i]) > INT_MAX || ft_atol(argv[i]) < INT_MIN)
			ft_printf("Error");
		i++;
	}
	return (0);
}

int	non_numeric(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				ft_printf("Error");
			j++;
		}
		i++;
	}
	return (0);
}

char	**verify_split(int argc, char **argv)
{
	char	**new_string;
	int		i;

	i = 1;
	new_string = argv + 1;
	if (argc == 2)
	{
		new_string = ft_split(argv[i], ' ');
		if (!new_string)
			exit(1);
	}
	return (new_string);
}

int	equal_int(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atol(argv[i]) == ft_atol(argv[j]))
			{
				ft_printf("Error: Duplicate numbers found\n");
				return (1);
			}
		}
	}
	return (0);
}
