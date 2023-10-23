/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:29:43 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/20 00:44:17 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	if (str == NULL)
	{
		return (0);
	}
	while (*str)
	{
		if (!is_alpha(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int	main(int argc, char	**argv)
{
	char	i;

	if (argc == 2)
	{
		i = ft_str_is_alpha(argv[1]);
	}
		printf("If its alphabetical, return 1. Others return 0\n");
		printf("Return value is: %d\n", i);
		return (0);
}
*/