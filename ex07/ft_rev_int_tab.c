/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:45:28 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/08 16:25:47 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int i;
	int aux[size];

	i = 0;
	index = size - 1;
	while (index >= 0)
	{
		aux[i] = tab[index];
		index--;
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = aux[i];
		i++;
	}
}
