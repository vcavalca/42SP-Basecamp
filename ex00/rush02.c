/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:23:33 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/04 15:09:12 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((column == 1 && line == 1) || (column == x && line == 1))
				ft_putchar('A');
			else if ((column == x && line == y) || (column == 1 && line == y))
				ft_putchar('C');
			else if ((column > 1 && column < x) && (line == 1 || line == y))
				ft_putchar('B');
			else if ((line > 1 && line < y) && (column == 1 || column == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
