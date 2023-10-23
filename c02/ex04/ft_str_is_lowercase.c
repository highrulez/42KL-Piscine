/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:48:55 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/20 16:53:12 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// USING ARGUMENT //
/*
int	main(int argc, char **argv)
{
	int	x;

	if (argc == 2)
	{
		x = ft_str_is_lowercase(argv[1]);
	}
	printf("Return 1 if lowercase alphabetical, and 0 if it others.\n");
	printf ("Return number is: %d\n", x);
	return (0);
}
*/
