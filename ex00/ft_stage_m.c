/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stage_m.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:01:59 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/11 15:12:01 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ma_a(int m[6][6], int a, int b, int c)
{
	m[0][1] = a;
	m[0][2] = b;
	m[0][3] = c;
}

void	ft_ma_b(int m[6][6], int a, int b, int c)
{
	m[0][4] = a;
	m[5][1] = b;
	m[5][2] = c;
}

void	ft_ma_c(int m[6][6], int a, int b, int c)
{
	m[5][3] = a;
	m[5][4] = b;
	m[1][0] = c;
}

void	ft_ma_d(int m[6][6], int a, int b, int c)
{
	m[2][0] = a;
	m[3][0] = b;
	m[4][0] = c;
}

void	ft_ma_e(int m[6][6], int a, int b, int c)
{
	m[1][5] = a;
	m[2][5] = b;
	m[3][5] = c;
}
