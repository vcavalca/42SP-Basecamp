/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_m.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:06:17 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/11 15:02:13 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_m(int matriz[6][6])
{
	int i;
	int j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			if (matriz[i][j] == 1)
				write(1, "1", 1);
			else if (matriz[i][j] == 2)
				write(1, "2", 1);
			else if (matriz[i][j] == 3)
				write(1, "3", 1);
			else if (matriz[i][j] == 4)
				write(1, "4", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
