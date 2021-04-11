/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:37:38 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/11 18:30:42 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_m(int matriz[6][6]);
void	ft_ma_a(int m[6][6], int a, int b, int c);
void	ft_ma_b(int m[6][6], int a, int b, int c);
void	ft_ma_c(int m[6][6], int a, int b, int c);
void	ft_ma_d(int m[6][6], int a, int b, int c);
void	ft_ma_e(int m[6][6], int a, int b, int c);
void	ft_fill_in(int matriz[6][6]);
void	ft_error();

int	rush(unsigned int col1up, unsigned int col2up,
unsigned int col3up, unsigned int col4up,
unsigned int col1down, unsigned int col2down,
unsigned int col3down, unsigned int col4down,
unsigned int row1left, unsigned int row2left,
unsigned int row3left, unsigned int row4left,
unsigned int row1right, unsigned int row2right,
unsigned int row3right, unsigned int row4right)
{
	int matriz[6][6];

	if (((col1up == 0 || col2up == 0 || col3up == 0 || col4up == 0)
	|| (col1up > 4 || col2up > 4 || col3up > 4 || col4up > 4))
	|| ((col1down == 0 || col2down == 0 || col3down == 0 || col4down == 0)
	|| (col1down > 4 || col2down > 4 || col3down > 4 || col4down > 4))
	|| ((row1left == 0 || row2left == 0 || row3left == 0 || row4left == 0)
	|| (row1left > 4 || row2left > 4 || row3left > 4 || row4left > 4))
	|| ((row1right == 0 || row2right == 0 || row3right == 0 || row4right == 0)
	|| (row1right > 4 || row2right > 4 || row3right > 4 || row4right > 4))
	|| (col1up == 1 && col1down == 1) || (col2up == 1 && col2down == 1)
	|| (col3up == 1 && col3down == 1) || (col4up == 1 && col4down == 1)
	|| (row1left == 1 && row1right == 1) || (row2left == 1 && row2right == 1)
	|| (row3left == 1 && row3right == 1) || (row4left == 1 && row4right == 1)
	|| (col1up == 2 && col1down == 4) || (col2up == 2 && col2down == 4)
	|| (col3up == 2 && col3down == 4) || (col4up == 2 && col4down == 4)
	|| (row1left == 2 && row1right == 4) || (row2left == 2 && row2right == 4)
	|| (row3left == 2 && row3right == 4) || (row4left == 2 && row4right == 4)
	|| (col1up == 3 && col1down == 3) || (col2up == 3 && col2down == 3)
	|| (col3up == 3 && col3down == 3) || (col4up == 3 && col4down == 3)
	|| (row1left == 3 && row1right == 3) || (row2left == 3 && row2right == 3)
	|| (row3left == 3 && row3right == 3) || (row4left == 3 && row4right == 3)
	|| (col1up == 3 && col1down == 4) || (col2up == 3 && col2down == 4)
	|| (col3up == 3 && col3down == 4) || (col4up == 3 && col4down == 4)
	|| (row1left == 3 && row1right == 4) || (row2left == 3 && row2right == 4)
	|| (row3left == 3 && row3right == 4) || (row4left == 3 && row4right == 4)
	|| (col1up == 4 && col1down == 2) || (col2up == 4 && col2down == 2)
	|| (col3up == 4 && col3down == 2) || (col4up == 4 && col4down == 2)
	|| (row1left == 4 && row1right == 2) || (row2left == 4 && row2right == 2)
	|| (row3left == 4 && row3right == 2) || (row4left == 4 && row4right == 2)
	|| (col1up == 4 && col1down == 3) || (col2up == 4 && col2down == 3)
	|| (col3up == 4 && col3down == 3) || (col4up == 4 && col4down == 3)
	|| (row1left == 4 && row1right == 3) || (row2left == 4 && row2right == 3)
	|| (row3left == 4 && row3right == 3) || (row4left == 4 && row4right == 3)
	|| (col1up == 4 && col1down == 4) || (col2up == 4 && col2down == 4)
	|| (col3up == 4 && col3down == 4) || (col4up == 4 && col4down == 4)
	|| (row1left == 4 && row1right == 4) || (row2left == 4 && row2right == 4)
	|| (row3left == 4 && row3right == 4) || (row4left == 4 && row4right == 4))
	{
		ft_error();
		return (0);
	}
	else
	{
		ft_ma_a(matriz, col1up, col2up, col3up);
		ft_ma_b(matriz, col4up, col1down, col2down);
		ft_ma_c(matriz, col3down, col4down, row1left);
		ft_ma_d(matriz, row2left, row3left, row4left);
		ft_ma_e(matriz, row1right, row2right, row3right);
		matriz[4][5] = row4right;
		ft_fill_in(matriz);
		ft_print_m(matriz);
	}
	return (0);
}
