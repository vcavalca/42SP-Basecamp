/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:37:38 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/10 16:17:40 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int    rush(unsigned int col1up, unsigned int col2up, unsigned int col3up, unsigned int col4up, unsigned int col1down, unsigned int col2down, unsigned int col3down, unsigned int col4down, unsigned int row1left, unsigned int row2left, unsigned int row3left, unsigned int row4left, unsigned int row1right, unsigned int row2right, unsigned int row3right, unsigned int row4right)
{
    int i;
    int j;

    if (((col1up == 0 || col2up == 0 || col3up == 0 || col4up == 0) || (col1up > 4 || col2up > 4 || col3up > 4 || col4up > 4)) || ((col1down == 0 || col2down == 0 || col3down == 0 || col4down == 0) || (col1down > 4 || col2down > 4 || col3down > 4 || col4down > 4)) || ((row1left == 0 || row2left == 0 || row3left == 0 || row4left == 0) || (row1left > 4 || row2left > 4 || row3left > 4 || row4left > 4)) || ((row1right == 0 || row2right == 0 || row3right == 0 || row4right == 0) || (row1right > 4 || row2right > 4 || row3right > 4 || row4right > 4)))
    {
      write(1, "Error", 5);
      return (0);
    }
    else 
    {
		int matriz[6][6];

        matriz[0][1] = col1up;
        matriz[0][2] = col2up;
        matriz[0][3] = col3up;
        matriz[0][4] = col4up;
        matriz[5][1] = col1down;
        matriz[5][2] = col2down;
        matriz[5][3] = col3down;
        matriz[5][4] = col4down;
        matriz[1][0] = row1left;
        matriz[2][0] = row2left;
        matriz[3][0] = row3left;
        matriz[4][0] = row4left;
        matriz[1][5] = row1right;
        matriz[2][5] = row2right;
        matriz[3][5] = row3right;
        matriz[4][5] = row4right;

        i = 0;
        j = 0;
        while (matriz[i][j] <= matriz[5][5])
        {
            while (matriz[i][j] <= matriz[5][5])
            {
                if(((col1up == 4 || col2up == 4 || col3up == 4 || col4up == 4)))
                {
                    matriz[4][j] = 4;
                    matriz[3][j] = 3;
                    matriz[2][j] = 2;
                    matriz[1][j] = 1;
                }
                else if ((col1down == 4 || col2down == 4 || col3down == 4 || col4down == 4))
                {
                    matriz[1][j] = 4;
                    matriz[2][j] = 3;
                    matriz[3][j] = 2;
                    matriz[4][j] = 1;
                }
                j++;
            }
            if((row1left == 4 || row2left == 4 || row3left == 4 || row4left == 4))
            {
                matriz[i][4] = 4;
                matriz[i][3] = 3;
                matriz[i][2] = 2;
                matriz[i][1] = 1;
            }
            else if ((row1right == 4|| row2right == 4|| row3right == 4 || row4right ==4))
            {
                matriz[i][1] = 4;
                matriz[i][2] = 3;
                matriz[i][3] = 2;
                matriz[i][4] = 1;                
            }
            i++;
        }

		i = 0;
        j = 0;
        while (matriz[i][j] <= matriz[5][5])
        {
            while (matriz[i][j] <= matriz[5][5])
            {
                write(1, &matriz[i][j], 4);
                j++;
            }
            i++;
        }
		return matriz[5][5];
	}

	return (0);
}