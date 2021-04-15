/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:10:14 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/08 16:26:13 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int position;

	i = 1;
	while (i < size)
	{
		position = tab[i];
		j = i;
		while (j > 0 && (position < tab[j - 1]))
		{
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = position;
		i++;
	}
}
