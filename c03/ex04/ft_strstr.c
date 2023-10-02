/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:58:52 by messid            #+#    #+#             */
/*   Updated: 2023/09/11 20:48:46 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*tr;

	while (*str)
	{
		if (*str == *to_find)
		{
			tr = str; 
			while (*to_find)
			{
				if (*tr != *to_find)
				{
					break ;
				}
				tr++;
				to_find++;
			}
			if (*to_find == '\0')
			{
				return (str); 
			}
		}
		str++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, World!";
    char to_find[] = "World";
    char *result = ft_strstr(str, to_find);
    printf("%s",result);
    return 0;
}
*/
