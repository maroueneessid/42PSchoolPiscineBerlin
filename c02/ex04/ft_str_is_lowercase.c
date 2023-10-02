/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:26:55 by messid            #+#    #+#             */
/*   Updated: 2023/08/29 11:45:07 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	
	char	arr[] = "";
	int	i = ft_str_is_lowercase(&arr);
	printf("Result: %d",i);
	return 0;
}
*/
