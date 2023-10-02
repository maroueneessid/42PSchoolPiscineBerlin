/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:24:52 by messid            #+#    #+#             */
/*   Updated: 2023/09/02 18:50:17 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int	a = 5;
	int	b = 3;

	ft_swap(&a, &b);
	printf("a before : 5 ; a now : %i\n",a);
	printf("b before : 3 ; a now : %i\n",b);

	
	return (0);
}
*/
