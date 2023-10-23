/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:31:49 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/10/05 22:55:43 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		xoxo;
	int		i;
	char	*length;

	if (src == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	length = (char *)malloc(i + 1);
	xoxo = 0;
	while (src[xoxo] != '\0')
	{
		length[xoxo] = src[xoxo];
		xoxo++;
	}
	length[xoxo] = '\0';
	return (length);
}

/*
int	main(int argc, char **argv)
{
	char	*clone;

	if (argc == 2)
	{
		printf("Your string is: %s\n", ft_strdup(argv[1]));
		free (clone);
		return (0);
	}
}
*/
