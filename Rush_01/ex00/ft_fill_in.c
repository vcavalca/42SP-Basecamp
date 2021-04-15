/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_in.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:05:33 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/11 15:07:27 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_in(int matriz[6][6])
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i <= 4)
	{
		while (j <= 4)
		{
			if (matriz[0][j] == 4 && matriz[5][j] == 1)
			{
				matriz[1][j] = 1;
				matriz[2][j] = 2;
				matriz[3][j] = 3;
				matriz[4][j] = 4;
			}
			else if (matriz[5][j] == 4 && matriz[0][j] == 1)
			{
				matriz[4][j] = 1;
				matriz[3][j] = 2;
				matriz[2][j] = 3;
				matriz[1][j] = 4;
			}
			else if (matriz[0][j] == 3 && matriz[5][j] == 2)
			{
				matriz[1][j] = 1;
				matriz[2][j] = 2;
				matriz[3][j] = 4;
				matriz[4][j] = 3;
			}
			else if (matriz[0][j] == 3 && matriz[5][j] == 2)
			{
				matriz[1][j] = 1;
				matriz[2][j] = 3;
				matriz[3][j] = 4;
				matriz[4][j] = 2;
			}
			else if (matriz[0][j] == 3 && matriz[5][j] == 2)
			{
				matriz[1][j] = 2;
				matriz[2][j] = 3;
				matriz[3][j] = 4;
				matriz[4][j] = 1;
			}
			else if (matriz[5][j] == 3 && matriz[0][j] == 1)
			{
				matriz[4][j] = 1;
				matriz[3][j] = 3;
				matriz[2][j] = 2;
				matriz[1][j] = 4;
			}
			else if (matriz[5][j] == 3 && matriz[0][j] == 1)
			{
				matriz[4][j] = 2;
				matriz[3][j] = 3;
				matriz[2][j] = 1;
				matriz[1][j] = 4;
			}
			else if (matriz[5][j] == 3 && matriz[0][j] == 1)
			{
				matriz[4][j] = 2;
				matriz[3][j] = 1;
				matriz[2][j] = 3;
				matriz[1][j] = 4;
			}
			else if (matriz[0][j] == 2 && matriz[5][j] == 1)
			{
				matriz[1][j] = 3;
				matriz[2][j] = 1;
				matriz[3][j] = 2;
				matriz[4][j] = 4;
			}
			else if (matriz[0][j] == 2 && matriz[5][j] == 1)
			{
				matriz[1][j] = 3;
				matriz[2][j] = 2;
				matriz[3][j] = 1;
				matriz[4][j] = 4;
			}
			else if (matriz[5][j] == 2 && matriz[0][j] == 3)
			{
				matriz[4][j] = 1;
				matriz[3][j] = 4;
				matriz[2][j] = 3;
				matriz[1][j] = 2;
			}
			else if (matriz[5][j] == 2 && matriz[0][j] == 3)
			{
				matriz[4][j] = 2;
				matriz[3][j] = 4;
				matriz[2][j] = 3;
				matriz[1][j] = 1;
			}
			else if (matriz[5][j] == 2 && matriz[0][j] == 3)
			{
				matriz[4][j] = 3;
				matriz[3][j] = 4;
				matriz[2][j] = 2;
				matriz[1][j] = 1;
			}
			else if (matriz[5][j] == 2 && matriz[0][j] == 2)
			{
				matriz[4][j] = 1;
				matriz[3][j] = 4;
				matriz[2][j] = 2;
				matriz[1][j] = 3;
			}
			else if (matriz[5][j] == 2 && matriz[0][j] == 2)
			{
				matriz[4][j] = 2;
				matriz[3][j] = 1;
				matriz[2][j] = 4;
				matriz[1][j] = 3;
			}
			else if (matriz[5][j] == 2 && matriz[0][j] == 2)
			{
				matriz[4][j] = 2;
				matriz[3][j] = 4;
				matriz[2][j] = 1;
				matriz[1][j] = 3;
			}
			else if (matriz[5][j] == 2 && matriz[0][j] == 2)
			{
				matriz[4][j] = 3;
				matriz[3][j] = 1;
				matriz[2][j] = 4;
				matriz[1][j] = 2;
			}
			else if (matriz[5][j] == 2 && matriz[0][j] == 2)
			{
				matriz[4][j] = 3;
				matriz[3][j] = 2;
				matriz[2][j] = 4;
				matriz[1][j] = 1;
			}
			else if (matriz[5][j] == 2 && matriz[0][j] == 2)
			{
				matriz[4][j] = 3;
				matriz[3][j] = 4;
				matriz[2][j] = 1;
				matriz[1][j] = 2;
			}
			else if (matriz[0][j] == 1 && matriz[0][j] == 2)
			{
				matriz[1][j] = 4;
				matriz[2][j] = 1;
				matriz[3][j] = 2;
				matriz[4][j] = 3;
			}
			else if (matriz[0][j] == 1 && matriz[0][j] == 2)
			{
				matriz[1][j] = 4;
				matriz[2][j] = 2;
				matriz[3][j] = 1;
				matriz[4][j] = 3;
			}
			else if (matriz[5][j] == 1 && matriz[0][j] == 3)
			{
				matriz[4][j] = 4;
				matriz[3][j] = 1;
				matriz[2][j] = 3;
				matriz[1][j] = 2;
			}
			else if (matriz[5][j] == 1 && matriz[0][j] == 3)
			{
				matriz[4][j] = 4;
				matriz[3][j] = 2;
				matriz[2][j] = 3;
				matriz[1][j] = 1;
			}
			else if (matriz[5][j] == 1 && matriz[0][j] == 3)
			{
				matriz[4][j] = 4;
				matriz[3][j] = 3;
				matriz[2][j] = 1;
				matriz[1][j] = 2;
			}
			j++;
		}
		if (matriz[i][0] == 4 && matriz[i][5] == 1)
		{
			matriz[i][1] = 1;
			matriz[i][2] = 2;
			matriz[i][3] = 3;
			matriz[i][4] = 4;
		}
		else if (matriz[i][5] == 4 && matriz[i][0] == 1)
		{
			matriz[i][4] = 1;
			matriz[i][3] = 2;
			matriz[i][2] = 3;
			matriz[i][1] = 4;
		}
		else if (matriz[i][0] == 3 && matriz[i][5] == 2)
		{
			matriz[i][1] = 1;
			matriz[i][2] = 2;
			matriz[i][3] = 4;
			matriz[i][4] = 3;
		}
		else if (matriz[i][0] == 3 && matriz[i][5] == 2)
		{
			matriz[i][1] = 1;
			matriz[i][2] = 3;
			matriz[i][3] = 4;
			matriz[i][4] = 2;
		}
		else if (matriz[i][0] == 3 && matriz[i][5] == 2)
		{
			matriz[i][1] = 2;
			matriz[i][2] = 3;
			matriz[i][3] = 4;
			matriz[i][4] = 1;
		}
		else if (matriz[i][5] == 3 && matriz[i][0] == 1)
		{
			matriz[i][4] = 1;
			matriz[i][3] = 3;
			matriz[i][2] = 2;
			matriz[i][1] = 4;
		}
		else if (matriz[i][5] == 3 && matriz[i][0] == 1)
		{
			matriz[i][4] = 2;
			matriz[i][3] = 3;
			matriz[i][2] = 1;
			matriz[i][1] = 4;
		}
		else if (matriz[i][5] == 3 && matriz[i][0] == 1)
		{
			matriz[i][4] = 2;
			matriz[i][3] = 1;
			matriz[i][2] = 3;
			matriz[i][1] = 4;
		}
		else if (matriz[i][0] == 2 && matriz[i][5] == 1)
		{
			matriz[i][1] = 3;
			matriz[i][2] = 1;
			matriz[i][3] = 2;
			matriz[i][4] = 4;
		}
		else if (matriz[i][0] == 2 && matriz[i][5] == 1)
		{
			matriz[i][1] = 3;
			matriz[i][2] = 2;
			matriz[i][3] = 1;
			matriz[i][4] = 4;
		}
		else if (matriz[i][5] == 2 && matriz[i][0] == 3)
		{
			matriz[i][4] = 1;
			matriz[i][3] = 4;
			matriz[i][2] = 3;
			matriz[i][1] = 2;
		}
		else if (matriz[i][5] == 2 && matriz[i][0] == 3)
		{
			matriz[i][4] = 2;
			matriz[i][3] = 4;
			matriz[i][2] = 3;
			matriz[i][1] = 1;
		}
		else if (matriz[i][5] == 2 && matriz[i][0] == 3)
		{
			matriz[i][4] = 3;
			matriz[i][3] = 4;
			matriz[i][2] = 2;
			matriz[i][1] = 1;
		}
		else if (matriz[i][5] == 2 && matriz[i][0] == 2)
		{
			matriz[i][4] = 1;
			matriz[i][3] = 4;
			matriz[i][2] = 2;
			matriz[i][1] = 3;
		}
		else if (matriz[i][5] == 2 && matriz[i][0] == 2)
		{
			matriz[i][4] = 2;
			matriz[i][3] = 1;
			matriz[i][2] = 4;
			matriz[i][1] = 3;
		}
		else if (matriz[i][5] == 2 && matriz[i][0] == 2)
		{
			matriz[i][4] = 2;
			matriz[i][3] = 4;
			matriz[i][2] = 1;
			matriz[i][1] = 3;
		}
		else if (matriz[i][5] == 2 && matriz[i][0] == 2)
		{
			matriz[i][4] = 3;
			matriz[i][3] = 1;
			matriz[i][2] = 4;
			matriz[i][1] = 2;
		}
		else if (matriz[i][5] == 2 && matriz[i][0] == 2)
		{
			matriz[i][4] = 3;
			matriz[i][3] = 2;
			matriz[i][2] = 4;
			matriz[i][1] = 1;
		}
		else if (matriz[i][5] == 2 && matriz[i][0] == 2)
		{
			matriz[i][4] = 3;
			matriz[i][3] = 4;
			matriz[i][2] = 1;
			matriz[i][1] = 2;
		}
		else if (matriz[i][0] == 1 && matriz[i][5] == 2)
		{
			matriz[i][1] = 4;
			matriz[i][2] = 1;
			matriz[i][3] = 2;
			matriz[i][4] = 3;
		}
		else if (matriz[i][0] == 1 && matriz[i][5] == 2)
		{
			matriz[i][1] = 4;
			matriz[i][2] = 2;
			matriz[i][3] = 1;
			matriz[i][4] = 3;
		}
		else if (matriz[i][5] == 1 && matriz[i][0] == 3)
		{
			matriz[i][4] = 4;
			matriz[i][3] = 1;
			matriz[i][2] = 3;
			matriz[i][1] = 2;
		}
		else if (matriz[i][5] == 1 && matriz[i][0] == 3)
		{
			matriz[i][4] = 4;
			matriz[i][3] = 2;
			matriz[i][2] = 3;
			matriz[i][1] = 1;
		}
		else if (matriz[i][5] == 1 && matriz[i][0] == 3)
		{
			matriz[i][4] = 4;
			matriz[i][3] = 3;
			matriz[i][2] = 1;
			matriz[i][1] = 2;
		}
		i++;
	}
}
