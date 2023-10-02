/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:27:37 by messid            #+#    #+#             */
/*   Updated: 2023/09/05 15:10:59 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src);
int		gl(char *ptr);

char	*ft_strcat(char *dest, char *src)
{
	char	*begin;

	begin = dest + gl(dest);
	while (*src != '\0')
	{
		*begin = *src;
		begin++;
		src++;
	}
	*(begin) = '\0';
	return (dest);
}

int	gl(char *ptr)
{
	int	i;

	i = 0;
	while (*ptr != '\0')
	{
		i++;
		ptr++;
	}
	return (i);
}
/*
int	main()
{
	char	dest[20] = "Hello";
	char	src[] = " World!";
	int i = 0;
	ft_strcat(&dest[0],&src[0]);

	while (dest[i] != '\0')
	{
		write(1,&dest[i],1);
		i++;
	}

	return 0;
}
*/
