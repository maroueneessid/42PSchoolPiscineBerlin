/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:30:46 by messid            #+#    #+#             */
/*   Updated: 2023/09/11 15:34:47 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}
/*
int	main()
{

	char	s1[] = "2222222";
	char	s2[] = "2222222";

	int 	returned = ft_strcmp(&s1[0],&s2[0]);
	printf("%d",returned);
	return 0;
}
*/
