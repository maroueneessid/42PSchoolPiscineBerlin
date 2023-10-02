/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:51:30 by messid            #+#    #+#             */
/*   Updated: 2023/09/05 15:09:07 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*cpy;

	cpy = dest;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (n > i)
	{
		while (n > i)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{

	char	source[] = "cactus";
	char	destination[255];

	ft_strncpy(&destination[0],&source[0], 5);
	printf("%s\n",destination);
	
	return (0);
}
*/
