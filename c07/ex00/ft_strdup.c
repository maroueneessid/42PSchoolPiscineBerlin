/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:40:50 by messid            #+#    #+#             */
/*   Updated: 2023/09/09 16:46:19 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	gl(char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		i++;
		src++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tr;
	char	*cpy;

	tr = (char *) malloc(gl(src) + 1);
	if (tr == NULL)
	{
		return (NULL);
	}
	cpy = tr;
	while (*src != '\0')
	{
		*cpy = *src;
		cpy++;
		src++;
	}
	*cpy = '\0';
	return (tr);
}
/*
#include <stdio.h>
int main() {
    char *original = "Hello, World!\n";
    char *duplicate = ft_strdup(original);
    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);
    free(duplicate);
    return 0;
}
*/
