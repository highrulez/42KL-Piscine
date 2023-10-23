/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:32:47 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/16 23:21:11 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_store;

	temp_store = *a;
	*a = *a / *b;
	*b = temp_store % *b;
}
/*
int	main(void)
{
	int a;
	int b;
	int	*ptr_a;
	int	*ptr_b;

	a = 30;
	b = 2;
	ptr_a = &a;
	ptr_b = &b;
	ft_ultimate_div_mod(&a, &b);
	printf("Div result is: %d\n", a);
   	printf("Mod result is: %d\n", b);
	return (0);

}
*/
