/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:26:55 by messid            #+#    #+#             */
/*   Updated: 2023/08/29 11:46:33 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
int	main(void)
{
	
	char	arr[] = "AAAAAAAAAA";
	int	i = ft_str_is_uppercase(&arr);
	printf("Result: %d",i);
	return 0;
}
*/
