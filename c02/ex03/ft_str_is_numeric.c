/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:31:20 by messid            #+#    #+#             */
/*   Updated: 2023/08/29 11:26:04 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		else
		{
			str++;
		}
	}
	return (1);
}
/*
int	main()
{
	char arr[] = "1234567890";
	int	i = ft_str_is_numeric(&arr[0]);
	printf("Returned : %d",i);
	return 0;
}
*/
