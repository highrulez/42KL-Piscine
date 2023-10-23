/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 01:33:55 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/20 14:40:18 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
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
	int	i;

	if (argc == 2)
	{
		i = ft_str_is_numeric(argv[1]);
	}
	printf("Please input only numbers, or else return 0.\n");
	printf("Return number is: %d\n", i);
	return (0);
}
*/