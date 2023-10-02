/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:58:08 by messid            #+#    #+#             */
/*   Updated: 2023/09/11 18:47:40 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	root;

	root = 0;
	while ((root * root) <= nb)
	{
		if ((root * root) == nb)
		{
			return (root);
		}
		root++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_sqrt(26));
	return 0;
}
*/
