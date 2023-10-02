/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:46:41 by messid            #+#    #+#             */
/*   Updated: 2023/09/09 17:32:35 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	start;

	if (min > max)
	{
		return (NULL);
	}
	ptr = (int *) malloc((max - min - 1) * 4);
	if (ptr == NULL)
	{
		return (NULL);
	}
	start = 0;
	while (start <= (max - min - 1))
	{
		ptr[start] = min + start;
		start++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int main() 
{
    int min = 5;
    int max = 10;

    int *result = ft_range(min, max);

    if (result != NULL) {
        printf("Range from %d to %d (inclusive):\n", min, max);
        for (int i = 0; i <= max - min - 1; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");

        free(result);
    } else {
        printf("Error: Invalid range (min > max)
       	or memory allocation failed.\n");
    }

    return 0;
}
*/
