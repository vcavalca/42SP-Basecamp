/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:37:38 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/11 11:43:10 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int    rush(unsigned int col1up, unsigned int col2up, unsigned int col3up, unsigned int col4up, unsigned int col1down, unsigned int col2down, unsigned int col3down, unsigned int col4down, unsigned int row1left, unsigned int row2left, unsigned int row3left, unsigned int row4left, unsigned int row1right, unsigned int row2right, unsigned int row3right, unsigned int row4right)
{
    if (((col1up == 0 || col2up == 0 || col3up == 0 || col4up == 0) || (col1up > 4 || col2up > 4 || col3up > 4 || col4up > 4)) || ((col1down == 0 || col2down == 0 || col3down == 0 || col4down == 0) || (col1down > 4 || col2down > 4 || col3down > 4 || col4down > 4)) || ((row1left == 0 || row2left == 0 || row3left == 0 || row4left == 0) || (row1left > 4 || row2left > 4 || row3left > 4 || row4left > 4)) || ((row1right == 0 || row2right == 0 || row3right == 0 || row4right == 0) || (row1right > 4 || row2right > 4 || row3right > 4 || row4right > 4)) || (col1up == 1 && col1down == 1) || (col2up == 1 && col2down == 1) || (col3up == 1 && col3down == 1) || (col4up == 1 && col4down == 1) || (row1left == 1 && row1right == 1) || (row2left == 1 && row2right == 1) || (row3left == 1 && row3right == 1) || (row4left == 1 && row4right == 1) || (col1up == 2 && col1down == 4) || (col2up == 2 && col2down == 4) || (col3up == 2 && col3down == 4) || (col4up == 2 && col4down == 4) || (row1left == 2 && row1right == 4) || (row2left == 2 && row2right == 4) || (row3left == 2 && row3right == 4) || (row4left == 2 && row4right == 4) || (col1up == 3 && col1down == 3) || (col2up == 3 && col2down == 3) || (col3up == 3 && col3down == 3) || (col4up == 3 && col4down == 3) || (row1left == 3 && row1right == 3) || (row2left == 3 && row2right == 3) || (row3left == 3 && row3right == 3) || (row4left == 3 && row4right == 3) || (col1up == 3 && col1down == 4) || (col2up == 3 && col2down == 4) || (col3up == 3 && col3down == 4) || (col4up == 3 && col4down == 4) || (row1left == 3 && row1right == 4) || (row2left == 3 && row2right == 4) || (row3left == 3 && row3right == 4) || (row4left == 3 && row4right == 4) || (col1up == 4 && col1down == 2) || (col2up == 4 && col2down == 2) || (col3up == 4 && col3down == 2) || (col4up == 4 && col4down == 2) || (row1left == 4 && row1right == 2) || (row2left == 4 && row2right == 2) || (row3left == 4 && row3right == 2) || (row4left == 4 && row4right == 2) || (col1up == 4 && col1down == 3) || (col2up == 4 && col2down == 3) || (col3up == 4 && col3down == 3) || (col4up == 4 && col4down == 3) || (row1left == 4 && row1right == 3) || (row2left == 4 && row2right == 3) || (row3left == 4 && row3right == 3) || (row4left == 4 && row4right == 3) || (col1up == 4 && col1down == 4) || (col2up == 4 && col2down == 4) || (col3up == 4 && col3down == 4) || (col4up == 4 && col4down == 4) || (row1left == 4 && row1right == 4) || (row2left == 4 && row2right == 4) || (row3left == 4 && row3right == 4) || (row4left == 4 && row4right == 4))
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
        
        int i;
        int j;
        
        i = 1;
        j = 1;
        while (i <= 4)
        {
          while (j <= 4)
          {
            if(matriz[0][j] == 4 && matriz[5][j] == 1)
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
            else if(matriz[0][j] == 3 && matriz[5][j] == 2)
            {
              matriz[1][j] = 1;
              matriz[2][j] = 2;
              matriz[3][j] = 4;
              matriz[4][j] = 3;
            }
			else if(matriz[0][j] == 3 && matriz[5][j] == 2)
            {
              matriz[1][j] = 1;
              matriz[2][j] = 3;
              matriz[3][j] = 4;
              matriz[4][j] = 2;
            }
			else if(matriz[0][j] == 3 && matriz[5][j] == 2)
            {
              matriz[1][j] = 2;
              matriz[2][j] = 3;
              matriz[3][j] = 4;
              matriz[4][j] = 1;
            }
            else if(matriz[5][j] == 3 && matriz[0][j] == 1)
            {
              matriz[4][j] = 1;
              matriz[3][j] = 3;
              matriz[2][j] = 2;
              matriz[1][j] = 4;
            }
			else if(matriz[5][j] == 3 && matriz[0][j] == 1)
            {
              matriz[4][j] = 2;
              matriz[3][j] = 3;
              matriz[2][j] = 1;
              matriz[1][j] = 4;
            }
			else if(matriz[5][j] == 3 && matriz[0][j] == 1)
            {
              matriz[4][j] = 2;
              matriz[3][j] = 1;
              matriz[2][j] = 3;
              matriz[1][j] = 4;
            }
            else if(matriz[0][j] == 2 && matriz[5][j] == 1)
            {
              matriz[1][j] = 3;
              matriz[2][j] = 1;
              matriz[3][j] = 2;
              matriz[4][j] = 4;
            }
			else if(matriz[0][j] == 2 && matriz[5][j] == 1)
            {
              matriz[1][j] = 3;
              matriz[2][j] = 2;
              matriz[3][j] = 1;
              matriz[4][j] = 4;
            }
            else if(matriz[5][j] == 2 && matriz[0][j] == 3)
            {
              matriz[4][j] = 1;
              matriz[3][j] = 4;
              matriz[2][j] = 3;
              matriz[1][j] = 2;
            }
			else if(matriz[5][j] == 2 && matriz[0][j] == 3)
            {
              matriz[4][j] = 2;
              matriz[3][j] = 4;
              matriz[2][j] = 3;
              matriz[1][j] = 1;
            }
			else if(matriz[5][j] == 2 && matriz[0][j] == 3)
            {
              matriz[4][j] = 3;
              matriz[3][j] = 4;
              matriz[2][j] = 2;
              matriz[1][j] = 1;
            }
			else if(matriz[5][j] == 2 && matriz[0][j] == 2)
            {
              matriz[4][j] = 1;
              matriz[3][j] = 4;
              matriz[2][j] = 2;
              matriz[1][j] = 3;
            }
			else if(matriz[5][j] == 2 && matriz[0][j] == 2)
            {
              matriz[4][j] = 2;
              matriz[3][j] = 1;
              matriz[2][j] = 4;
              matriz[1][j] = 3;
            }
			else if(matriz[5][j] == 2 && matriz[0][j] == 2)
            {
              matriz[4][j] = 2;
              matriz[3][j] = 4;
              matriz[2][j] = 1;
              matriz[1][j] = 3;
            }
			else if(matriz[5][j] == 2 && matriz[0][j] == 2)
            {
              matriz[4][j] = 3;
              matriz[3][j] = 1;
              matriz[2][j] = 4;
              matriz[1][j] = 2;
            }
			else if(matriz[5][j] == 2 && matriz[0][j] == 2)
            {
              matriz[4][j] = 3;
              matriz[3][j] = 2;
              matriz[2][j] = 4;
              matriz[1][j] = 1;
            }
			else if(matriz[5][j] == 2 && matriz[0][j] == 2)
            {
              matriz[4][j] = 3;
              matriz[3][j] = 4;
              matriz[2][j] = 1;
              matriz[1][j] = 2;
            }
            else if(matriz[0][j] == 1 && matriz[0][j] == 2)
            {
              matriz[1][j] = 4;
              matriz[2][j] = 1;
              matriz[3][j] = 2;
              matriz[4][j] = 3;
            }
			else if(matriz[0][j] == 1 && matriz[0][j] == 2)
            {
              matriz[1][j] = 4;
              matriz[2][j] = 2;
              matriz[3][j] = 1;
              matriz[4][j] = 3;
            }
            else if(matriz[5][j] == 1 && matriz[0][j] == 3)
            {
              matriz[4][j] = 4;
              matriz[3][j] = 1;
              matriz[2][j] = 3;
              matriz[1][j] = 2;
            }
			else if(matriz[5][j] == 1 && matriz[0][j] == 3)
            {
              matriz[4][j] = 4;
              matriz[3][j] = 2;
              matriz[2][j] = 3;
              matriz[1][j] = 1;
            }
			else if(matriz[5][j] == 1 && matriz[0][j] == 3)
            {
              matriz[4][j] = 4;
              matriz[3][j] = 3;
              matriz[2][j] = 1;
              matriz[1][j] = 2;
            }
            j++;
          }
          if(matriz[i][0] == 4 && matriz[i][5] == 1)
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
			else if(matriz[i][0] == 3 && matriz[i][5] == 2)
            {
              matriz[i][1] = 1;
              matriz[i][2] = 2;
              matriz[i][3] = 4;
              matriz[i][4] = 3;
            }
			else if(matriz[i][0] == 3 && matriz[i][5] == 2)
            {
              matriz[i][1] = 1;
              matriz[i][2] = 3;
              matriz[i][3] = 4;
              matriz[i][4] = 2;
            }
			else if(matriz[i][0] == 3 && matriz[i][5] == 2)
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
			else if(matriz[i][0] == 2 && matriz[i][5] == 1)
            {
              matriz[i][1] = 3;
              matriz[i][2] = 1;
              matriz[i][3] = 2;
              matriz[i][4] = 4;
            }
			else if(matriz[i][0] == 2 && matriz[i][5] == 1)
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
			else if(matriz[i][0] == 1 && matriz[i][5] == 2)
            {
              matriz[i][1] = 4;
              matriz[i][2] = 1;
              matriz[i][3] = 2;
              matriz[i][4] = 3;
            }
			else if(matriz[i][0] == 1 && matriz[i][5] == 2)
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

		for ( i=1; i<5; i++ ){
    	for ( j=1; j<5; j++ )
		{
			//write(1, &matriz[i][i], 4);
			printf ("%d ", matriz[i][j]);			
		}
			//write(1, "\n", 1);
			printf("\n");
		}
    }
    return (0);
}

int		main(void)
{
	
	rush(4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2);
	
	return (0);
}