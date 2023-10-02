/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messid <messid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:45:46 by messid            #+#    #+#             */
/*   Updated: 2023/09/03 18:24:30 by messid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
/*
int	main()
{
	int	arr[] = {99,2,7,1,100,110,200};
	int	size = sizeof(arr)/sizeof(int);
	ft_rev_int_tab(&arr[0], size);

	for (int i = 0; i < size ; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
*/
