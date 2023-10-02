/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:39:05 by messid            #+#    #+#             */
/*   Updated: 2023/08/28 14:13:50 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{

	int	a = 11;
	int	b = 2;
	int	div;
	int	mod;

	ft_div_mod(a, b , &div, &mod);

	printf("div : %d ; mod : %d from %d by %d",div,mod,a,b);



	
	return (0);
}
*/
