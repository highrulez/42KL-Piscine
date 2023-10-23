/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:45:31 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/10/02 12:57:39 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	if (nb > 1)
	{
		fact = nb * ft_recursive_factorial(nb - 1);
	}
	return (fact);
}

/*
int	main(void)
{
	int i;

	i = ft_recursive_factorial(4);
	printf("%d\n", i);
}
*/
