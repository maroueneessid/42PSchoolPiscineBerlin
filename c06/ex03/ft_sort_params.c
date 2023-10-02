/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:50:11 by messid            #+#    #+#             */
/*   Updated: 2023/09/12 21:12:37 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_sort(char *arr[], int size)
{
	int	j;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		j = 0;
		while (j < size - 1)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
			{
				ft_swap(&arr[j], &arr[j + 1]);
				swapped = 1;
			}
			j++;
		}
		size--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		return (0);
	}
	ft_sort(argv + 1, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
