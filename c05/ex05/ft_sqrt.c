/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:12:01 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/10/03 12:09:46 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb > 0)
	{
		while (sqrt * sqrt <= nb)
		{
			if (sqrt * sqrt == nb)
			{
				return (sqrt);
			}
			if (sqrt > 30000)
			{
				return (0);
			}
			sqrt++;
		}
	}
	return (0);
}

/*
int main()
{
    int i;

    i = ft_sqrt(2);
    printf("%d\n", i);
    return (0);
}
*/
