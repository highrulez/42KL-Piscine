/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:59:22 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/10/05 00:33:49 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*xoxo;
	int	num;
	int	x;

	num = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	xoxo = (int *)malloc(num * sizeof(int));
	if (xoxo == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (x < num)
	{
		xoxo[x] = min;
		x++;
		min++;
	}
	return (xoxo);
}

/*
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s <min> <max>\n", argv[0]);
        return 1;
    }

    int min = atoi(argv[1]);
    int max = atoi(argv[2]);

    int *result = ft_range(min, max);

    if (result == NULL)
    {
        printf("Error!! 1 more try u'll die!\n");
        return 1;
    }
    printf("Result: ");
    
	int i = 0;
    while (i < max - min)
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");
	free(result);
	return 0;
}
*/
