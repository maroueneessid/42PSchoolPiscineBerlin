/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:56:08 by messid            #+#    #+#             */
/*   Updated: 2023/09/09 13:56:51 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index == 0)
	{
		return (0);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2)); 
}
