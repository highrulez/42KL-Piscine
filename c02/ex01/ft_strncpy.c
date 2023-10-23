/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:29:32 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/19 18:32:03 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	xoxo;

	xoxo = 0;
	while (src[xoxo] != '\0' && xoxo < n)
	{
		dest[xoxo] = src[xoxo];
		xoxo++;
	}
	while (xoxo < n)
	{
		dest[xoxo] = '\0';
		xoxo++;
	}
	
	return (dest);
}


int	main(void)
{
	char	*src;
	char	*dest;

	src = "Secret i\"ll never tell";
	dest = (char *)malloc(25);
	if (dest == NULL)
	{
		printf("Memory allocation failed!");
		return (1);
	}
	ft_strncpy(dest, src, 24);
	printf("Copied string: %s\n", dest);
	free(dest);
	return (0);
}
