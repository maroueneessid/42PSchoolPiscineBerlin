/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:31:42 by messid            #+#    #+#             */
/*   Updated: 2023/09/09 13:43:23 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	result = 1;
	count = 1;
	while (nb >= count)
	{
		result *= count;
		count++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_iterative_factorial(10));
	return (0);
}
*/
