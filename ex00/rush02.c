/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:23:33 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/03 17:20:47 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	length;
	int	width;

	length = 1;
	while (length <= y)
	{
		width = 1;
		while (width <= x)
		{
			if ((width == 1 && length == 1) || (width == x && length == 1))
				ft_putchar('A');
			else if ((width == x && length == y) || (width == 1 && length == y))
				ft_putchar('C');
			else if ((width > 1 && width < x) && (length == 1 || length == y))
				ft_putchar('B');
			else if ((length > 1 && length < y) && (width == 1 || width == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			width++;
		}
		ft_putchar('\n');
		length++;
	}
}
