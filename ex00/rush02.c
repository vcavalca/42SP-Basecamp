/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:23:33 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/03 14:25:26 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush02(int x, int y)
{
	int length;
	int width;

	length = 1;
	while( length <= y)
	{
		width = 1;
		while(width <= x)
		{
			
			if((length == 1 && width == 1) || (length == 1 && width == x))
			{
				ft_putchar('A');
			}
			else if((length == y && width == x) || (length == y && width == 1))
			{
				ft_putchar('C');
			}
			else if((length == 1 && width < x ))
			{
				ft_putchar('B');
			}
			else if((length == y && width < x ))
			{
				ft_putchar('B');
			}
			else if ((length > 1 && width == 1))
			{
				ft_putchar('B');
			}
			else if((length > 1 && width == x))
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}

			width++;
		}
		ft_putchar('\n');
		length++;
	}
}