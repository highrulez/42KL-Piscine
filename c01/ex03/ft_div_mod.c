/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:09:33 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/16 22:31:42 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int a;
	int b;
	int	div;
	int	mod;
	int *ptr_div;
	int *ptr_mod;
	
	a = 20;
	b = 2;
	ptr_div = &div;
	ptr_mod = &mod;
	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("Division Result is: %d\n", div);
	printf("Modulus Result is: %d\n", mod);
	return (0);
}