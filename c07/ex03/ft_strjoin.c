/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:49:06 by messid            #+#    #+#             */
/*   Updated: 2023/09/13 16:46:33 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	gl(char *ptr)
{
	int	i;

	i = 0;
	while (*ptr != '\0')
	{
		i++;
		ptr++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*begin;

	begin = dest + gl(dest);
	while (*src != '\0')
	{
		*begin = *src;
		begin++;
		src++;
	}
	return (dest);
}

int	getsize2alloc(int size, char **strs, char *sep)
{
	int	i;
	int	tr;
	int	sepsize;

	sepsize = gl(sep) * (size - 1);
	tr = 0;
	i = 0;
	while (i < size)
	{
		tr += gl(strs[i]);
		i++;
	}
	return (tr + sepsize);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		size2alloc;

	if (size == 0)
	{
		ptr = (char *) malloc(1);
		return (ptr);
	}
	size2alloc = getsize2alloc(size, strs, sep);
	ptr = (char *) malloc(size2alloc + 1);
	i = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i != size - 1)
		{
			ft_strcat(ptr, sep);
		}
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int main() 
{
    char *strs[] = {"Hello","this","is","me","!"};
    char *sep = "---";

    char *result = ft_strjoin(5, strs, sep);

    if (result) {
        printf("Concatenated string: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
