/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:59:35 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/10/03 12:10:56 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	xoxo;
	int	num;

	xoxo = 0;
	num = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (xoxo < power)
	{
		num *= nb;
		xoxo++;
	}
	return (num);
}

/*
int main(void)
{
	int i;

	i = ft_iterative_power(5, 2);
	printf("%d\n", i);
}
*/
