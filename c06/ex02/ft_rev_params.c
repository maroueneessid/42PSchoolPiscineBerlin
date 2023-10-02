/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:06:53 by messid            #+#    #+#             */
/*   Updated: 2023/09/09 16:12:48 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *ptr)
{
	while (*ptr != '\0')
	{
		write(1, ptr, 1);
		ptr++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	if (argc == 1)
	{
		return (0);
	}
	while (i > 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
