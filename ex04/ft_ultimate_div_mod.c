/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 11:55:49 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/08 16:29:13 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int auxa;
	int auxb;

	auxa = *a;
	auxb =*b;
	*a = auxa / auxb;
	*b = auxa % auxb;
}
