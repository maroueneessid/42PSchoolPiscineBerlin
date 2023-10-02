/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:52:52 by messid            #+#    #+#             */
/*   Updated: 2023/09/05 14:54:44 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*cpy;

	cpy = dest;
	while (*src != '\0')
	{
		*cpy = *src;
		cpy++;
		src++;
	}
	*cpy = '\0';
	return (dest);
}
/*
int	main()
{
	char	source[] = "sourcemeee";
	char	destination[255];

	char	*dest = ft_strcpy(&destination[0],&source[0]);

	printf("%s",dest);

	return 0;
}
*/
