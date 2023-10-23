/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:41:21 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/14 17:42:20 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 0;
	while (i <= 9)
	{
		c = i + '0';
		printf("%c", c);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}