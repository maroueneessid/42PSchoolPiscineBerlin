/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:42:53 by messid            #+#    #+#             */
/*   Updated: 2023/08/29 11:55:11 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
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
	
	char	arr[] = "PHU&5748666584&&&VDSHILDWEbhvdwghkdgdgbjhgebjhrgjhq";
	int	to  = ft_str_is_alpha(&arr[0]);
	printf("returned: %d",to);
	return 0;
}
*/
