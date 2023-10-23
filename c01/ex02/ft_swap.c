/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 21:42:56 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/16 22:05:10 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

int main(void)
{
	int	z;
	int	y;
	int	*ptr_z;
	int	*ptr_y;

	z = 5;
	y = 0;
	ptr_z = &z;
	ptr_y = &y;
	ft_swap(ptr_z, ptr_y);
	printf("The address is change: %d\n", z);
	printf("The other value is: %d\n", y);
	return (0);
}