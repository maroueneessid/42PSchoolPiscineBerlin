/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:17:06 by messid            #+#    #+#             */
/*   Updated: 2023/09/13 19:16:19 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "cons.h"
#include <unistd.h>
#include <fcntl.h>

void	display_file(char *pathname)
{
	char	buff[10000];
	int		fd;
	int		tr;

	fd = open(pathname, O_RDONLY);
	if (!fd)
	{
		write(1, &CANNOT_READ, sizeof(CANNOT_READ));
	}
	tr = read(fd, buff, sizeof(buff));
	write(1, buff, tr);
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write(1, &NO_ARG, sizeof(NO_ARG));
	}
	if (argc > 2)
	{
		write(1, &TOO_MANY, sizeof(TOO_MANY));
		return (-1);
	}
	display_file(argv[1]);
	return (0);
}
