/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:31:24 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/14 15:54:01 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int count;
    unsigned int position;
    unsigned int hold;

    hold = 0;
    count = 1;
    position = 0;
    while (src[hold])
    {
        hold++;
    }
    if (hold != 0)
    {
        while (count < size)
        {
            dest[position] = src[position];
            count++;
            position++;
        }
    }
    dest[position] = '\0';
    return (hold);
}
