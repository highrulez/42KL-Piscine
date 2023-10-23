/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:40:41 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/20 21:42:01 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	me;

	me = 0;
	while (str[me] != '\0')
	{
		if (str[me] >= 'A' && str[me] <= 'Z')
		{
			str[me] += 32;
		}
		me++;
	}
	return (str);
}


int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_strlowcase(argv[1]);
	}
	printf("Converted into lowecase: %s\n", argv[1]);
	return (0);
}
