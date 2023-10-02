/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:41:16 by messid            #+#    #+#             */
/*   Updated: 2023/09/13 16:43:26 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*rslt;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	rslt = malloc(sizeof(int) * (i));
	if (rslt == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = rslt;
	i = 0;
	while (max > min)
	{
		rslt[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;
	
	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
