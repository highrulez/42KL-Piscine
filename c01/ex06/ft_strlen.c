/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:35:36 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/19 19:02:22 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0' )
	{
		i++;
		str++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	count;
	int	count1;

	if (argc == 3)
	{
		count = ft_strlen(argv[1]);
		count1 = ft_strlen(argv[2]);
	}
	printf("Total words: %d\n", count);
	printf("Next words: %d\n", count1);
	return (0);
}
