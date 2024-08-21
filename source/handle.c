/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:19:48 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/21 13:09:19 by gudaniel         ###   ########.fr       */
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
	if (!str)
		return (1);
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

int	non_numeric(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		if (!argv[i][j])
			return(1);
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (1);
			j++;
			if (j > 11)
				return (1);
		}
		i++;
	}
	return (0);
}

char	**verify_split(int argc, char **argv)
{
	char	**new_string;
	int		i;

	i = 0;
	if (argc == 1)
		exit(1);
	new_string = NULL;
	if (argc > 2)
		new_string = argv + 1;
	if (argc == 2)
	{
		new_string = ft_split(argv[1], ' ');
		if (!new_string)
			exit(1);
		if (!*new_string)
		{
			ft_free_matrix(new_string);
			exit(1);
		}
	}
	return (new_string);
}
int	limits_int(char **argv)
{
	int		i;
	ssize_t	nbr;

	i = 0;
	while (argv[i])
	{
		nbr = ft_atol(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	equal_int(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atol(argv[i]) == ft_atol(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
