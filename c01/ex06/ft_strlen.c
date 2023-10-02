/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:38:15 by messid            #+#    #+#             */
/*   Updated: 2023/09/02 18:51:09 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}
/*
int	main(void)
{
	char	mystr[] = "Cactus";
	int	count = ft_strlen(&mystr[0]);

	printf("Length of %s is %d",mystr,count);

	return (0);
}
*/
