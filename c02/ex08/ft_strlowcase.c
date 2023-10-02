/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:00:00 by messid            #+#    #+#             */
/*   Updated: 2023/08/29 12:39:18 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	char	*cpy;

	cpy = str;
	while (*cpy != '\0')
	{
		if (*cpy >= 'A' && *cpy <= 'Z')
		{
			*cpy = *cpy + 32;
		}
		cpy++;
	}
	return (str);
}
/*
int	main()
{
	
	char	arr[] = "HeLlo 6844jhSAHUBUF=$%^&*(";

	ft_strlowcase(&arr[0]);

	printf("Return: %s",arr);
	return 0;
}
*/
