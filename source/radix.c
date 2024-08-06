/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:17:49 by gudaniel          #+#    #+#             */
/*   Updated: 2024/08/06 09:27:01 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int getMax(int arr[], int n) 
{
	int max; 
	int	i;

	i = 1;
	max = arr[0];
	while (i < n) 
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	return (max);
}

void countingSort(int arr[], int n, int exp)
{
	int output[n];
	int count[10] = {0};
	int i;

	i = 0;
	while (i < n)
	{
		count[(arr[i] / exp) % 10]++;
		i++;
	}
	i = 1;
	while (i < 10)
	{
		count[i] += count[i - 1];
		i++;
	}
	i = n - 1;
	while (i >= 0)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
		i--;
	}
	i = 0;
	while (i < n)
	{
		arr[i] = output[i];
		i++;
	}
}

void	radixSort(int arr[], int n)
{
	int max;
	int	exp;

	exp = 1;
	max = getMax(arr, n);
	while (max / exp > 0) 
	{
		countingSort(arr, n, exp);
		exp *= 10;
	}
}

int main() {
	int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
	int n = sizeof(arr) / sizeof(arr[0]);

	radixSort(arr, n);

	printf("Sorted array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}