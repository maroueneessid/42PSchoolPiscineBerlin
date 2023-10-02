/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:00:32 by messid            #+#    #+#             */
/*   Updated: 2023/08/28 14:13:58 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmpa;

	tmpa = *a;
	*a = *a / *b;
	*b = tmpa % *b;
}
/*
int	main(void)
{	
	int	a = 10;
	int	b = -2;

	printf("Begin -> a : %d | b : %d\n", a,b);
	ft_ultimate_div_mod(&a , &b);

	printf("End -> Div stored in a : %d | Mod stored in b : %d\n",a,b);

	return(0);
}
*/
