/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:50:30 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/10/05 01:57:45 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*xoxo;
	int		x;
	int		j;
	int		k;

	x = 0;
	k = 0;
	xoxo = (char *) malloc(sizeof(strs + 1));
	while (x < size)
	{
		j = -1;
		while (strs[x][++j])
		{
			xoxo[k] = strs[x][j];
			k++;
		}
		j = -1;
		while (sep[++j] && x != size - 1)
		{
			xoxo[k++] = sep[j];
		}
		x++;
	}
	xoxo[k] = '\0';
	return (xoxo);
}
