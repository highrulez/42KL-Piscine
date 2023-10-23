/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:42:20 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/14 17:43:13 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		printf("N");
	else
		printf("P");
}

int	main(void)
{
	int	a;
	int	b;

	a = 6;
	b = -6;
	ft_is_negative(a);
	ft_is_negative(b);
	return (0);
}