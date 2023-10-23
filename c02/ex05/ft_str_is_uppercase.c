/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:03:00 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/20 17:12:37 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
// USING ARGUMENT //
int	main(int argc, char **argv)
{
	int	p;

	if (argc == 2)
	{
		p = ft_str_is_uppercase(argv[1]);
	}
	printf("Display 1 if its uppercase alphabet, else 0\n");
	printf("Result is: %d\n", p);
	return (0);
}
*/