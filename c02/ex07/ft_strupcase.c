/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:00:00 by messid            #+#    #+#             */
/*   Updated: 2023/08/29 12:38:07 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	char	*cpy;

	cpy = str;
	while (*cpy != '\0')
	{
		if (*cpy >= 'a' && *cpy <= 'z')
		{
			*cpy = *cpy - 32;
		}
		cpy++;
	}
	return (str);
}
/*
int	main()
{
	
	char	arr[] = "HeLlo #$%^&*( hhhhhhhhhh";

	ft_strupcase(&arr[0]);

	printf("Return: %s",arr);
	return 0;
}
*/
