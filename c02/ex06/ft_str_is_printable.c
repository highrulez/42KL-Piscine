/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:14:51 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/20 20:53:11 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
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
		i = ft_str_is_printable(argv[1]);
	}
	printf("1 if its printable characters. Others will be 0\n");
	printf("Value is: %d\n", i);
	return (0);
}
*/