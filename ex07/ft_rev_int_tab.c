/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:45:28 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/08 13:46:43 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	trade;

	size--;
	i = 0;
	while (size >= i)
	{
		trade = tab[size];
		tab[size] = tab[i];
		tab[i] = trade;
		size--;
		i++;
	}
}

int        main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size;

    size = 11;

    ft_rev_int_tab(array, size);

    int count = 0;

    while (count < size)
    {
        printf(" %d ", array[count]);
        count++;
    }

    return (0);
}