/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:16:58 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/10/02 13:29:11 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	rec;
	int	num;

	rec = 0;
	num = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (rec < power)
	{
		num = nb * ft_recursive_power(nb, power - 1);
	}
	return (num);
}

/*
int	main(void)
{
	int i;

	i = ft_recursive_power(5, 5);
	printf("%d\n", i);
}
*/
