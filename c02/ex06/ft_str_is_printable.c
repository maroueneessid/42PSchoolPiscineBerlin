/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:47:21 by messid            #+#    #+#             */
/*   Updated: 2023/09/05 18:18:58 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= ' ' && *str <= '~'))
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
	char	arr[] = "";
	int	i = ft_str_is_printable(&arr[0]);
	printf("Result: %d",i);
	return 0;
}
*/
