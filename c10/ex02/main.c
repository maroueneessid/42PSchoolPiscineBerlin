/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:17:06 by messid            #+#    #+#             */
/*   Updated: 2023/09/14 18:21:37 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "helper.h"

void	display_file(char *pathname, int c)
{
	char	*buff;
	int		fd;
	int		tr;
	int size;

	size = getSizeToAllocate(pathname) + 1;
	buff = (char *) malloc(size);
	if (buff == NULL)
	{
		write(1, strerror(12), gl(strerror(12)));
		return;
	}
	fd = open(pathname, O_RDONLY);
	if (fd < 0)
	{
		write(1, strerror(2), gl(strerror(2)));
		write(1, "\n", 1);
		return ;
	}
	tr = read(fd, buff, size);
	if (tr < c)
	{
		ft_putstr(buff,0);
	}
	ft_putstr(buff, tr - c);
	flush_buffer(buff);
	free(buff);
	close(fd);
}


int	main(int argc, char *argv[])
{
	int	i;
	int checks;

	checks = arg_checks(argc,argv);
	if (checks < 0)
	{
		return (-1);
	}
	i = 3;	
	while (i < argc)
	{
		if (check_if_dir(argv[i]) < 0)
		{
			write(1, strerror(21), gl(strerror(21)));
			write(1,"\n", 1);
			break;
		}
		write(1,"==>  ", 5);
		write(1, argv[i], gl(basename(argv[i])));
		write(1,"  <==", 5);	
		write(1, "\n", 1);
		int atoi = ft_atoi(argv[2]);
		display_file(argv[i], atoi);
		i++;
	}
	return (0);
}
