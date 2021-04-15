/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:23:55 by vcavalca          #+#    #+#             */
/*   Updated: 2021/04/14 19:04:35 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int ret;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	ret = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (ret);
}
