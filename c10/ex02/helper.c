/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:22:54 by messid            #+#    #+#             */
/*   Updated: 2023/09/14 18:22:56 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "helper.h"

// Get Length of Str
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

// Checks if file is a directory or not . (can be done better i think)
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

// Implementation of strcmp
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			return (0);
		i++;
	}
	if (s2[i] != '\0')
		return (-1);
	else
		return (0);
}

// Helper method for atoi
int	is_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	return (i);
}

// implementation of atoi that accepts multiple +- signs 
int	ft_atoi(char *str)
{
	int	sign;
	int	count;
	int	value;

	sign = 1;
	count = is_space(str);
	value = 0;
	while (str[count] == 43 || str[count] == 45)
	{
		if (str[count] == 45)
			sign = sign * (-1);
		count++;
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
		value *= 10;
		value += (str[count] - 48);
		count++;
	}
	value = value * sign;
	return (value);
}

// write content of file starting from specific index 
void	ft_putstr(char *str, int c)
{
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

// flushes the buffer
void	flush_buffer(char *buff)
{
	while (*buff)
	{
		*buff = '\0';
		buff++;
	}
}

// checks if parameter given to -c is actually a number before using atoi on it
int		is_number(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (-1);
		}
		str++;
	}
	return (0);
}

// other multiple checks for arguments and parameters

int		arg_checks(int argc, char *argv[])
{
	if (argc <= 3)
	{
		write(1, MISSING_PARAM, sizeof(MISSING_PARAM));
		return (-1);
	}
	if (strcmp(argv[1],"-c") != 0)
	{
		write(1, MISSING_PARAM, sizeof(MISSING_PARAM));
		return (-1);
	}
	else if (strcmp(argv[1],"-c") == 0 && argc < 3)
	{
		write(1, strerror(22), gl(strerror(22)));
		return (-1);
	}
	else if (strcmp(argv[1],"-c") == 0 && is_number(argv[2]) < 0)
	{
		write(1, "invalid number of bytes", 24);
		return (-1);
	}
	else
	{
		return (0);
	}
}

// calculates the size of file in blocks of 1024 (can vary)
int	getSizeToAllocate(char *pathname)
{
	int	size2alloc = 0;
	char buff[1024];

	int fd = open(pathname, O_RDONLY);
	
	if (fd < 0)
	{
		return (-1);
	}
    int bytesRead;	
	while ((bytesRead = read(fd, buff, sizeof(buff))) > 0)
	{
		size2alloc += bytesRead;
	}
	close(fd);
	return (size2alloc);
}
