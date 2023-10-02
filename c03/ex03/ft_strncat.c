/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:31:37 by messid            #+#    #+#             */
/*   Updated: 2023/09/11 20:51:39 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	gl(char *ptr)
{
	unsigned int	i;

	i = 0;
	while (*ptr != '\0')
	{
		i++;
		ptr++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*begin;

	i = 0;
	begin = dest + gl(dest);
	if (gl(src) < n)
	{
		n = gl(src) + 1;
	}
	while (i < n)
	{
		begin[i] = src[i];
		i++;
	}
	*(begin + i) = '\0';
	return (dest);
}
/*
int	main()
{
	char	dest[20] = "Hello";
	char	src[] = "!!!";
	int i = 0;
	ft_strncat(&dest[0],&src[0],2);
	while (dest[i] != '\0')
	{
		write(1,&dest[i],1);
		i++;
	}

	return 0;
}
*/
