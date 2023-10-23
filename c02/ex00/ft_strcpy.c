/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:29:18 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/19 00:47:29 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		argv[1] = (char *)malloc(strlen(argv[2]) + 1);
		ft_strcpy(argv[1], argv[2]);
		printf("Copied Text is: %s\n", argv[1]);
		free(argv[1]);
	}
	else if (argc <= 2)
	{
		printf("You need one more input to copy!");
	}
	else
	{
		printf("Thats too much input!! Relax bro!");
	}
	return (0);
}
*/