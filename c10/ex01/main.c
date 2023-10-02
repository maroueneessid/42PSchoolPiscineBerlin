/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:17:06 by messid            #+#    #+#             */
/*   Updated: 2023/09/14 17:03:54 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <libgen.h>
#define MAX_SIZE 30000

int	gl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_if_dir(char *pathname)
{
	int	l;

	l = gl(pathname);
	if (pathname[l - 1] == '/' || pathname[l - 1] == '\\')
	{
		return (-1);
	}
	return (1);
}

void	display_file(char *pathname)
{
	char	buff[35000];
	int		fd;
	int		tr;
	int		lb;

	fd = open(pathname, O_RDONLY);
	if (fd < 0)
	{
		write(1, strerror(2), gl(strerror(2)));
		write(1, "\n", 1);
		return ;
	}
	tr = read(fd, buff, sizeof(buff));
	lb = gl(buff);
	if (lb > MAX_SIZE)
	{
		write(1, strerror(27), gl(strerror(27)));
		write(1, "\n", 1);
		return ;
	}
	else
	{
		write(1, buff, tr);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		write(1, strerror(22), gl(strerror(22)));
		return (-1);
	}
	while (i < argc)
	{
		if (check_if_dir(argv[i]) < 0)
		{
			write(1, strerror(21), gl(strerror(21)));
		}
		else
		{
			display_file(argv[i]);
		}
		i++;
	}
	return (0);
}
