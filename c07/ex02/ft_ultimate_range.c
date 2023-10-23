/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:50:12 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/10/05 14:55:19 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x;
	int	num;
	int	*xoxo;

	num = max - min;
	if (min >= max)
	{
		return (0);
	}
	xoxo = (int *)malloc(sizeof(int) * (num + 1));
	if (xoxo == NULL)
	{
		return (0);
	}
	x = 0;
	while (x < num)
	{
		xoxo[x] = min;
		x++;
		min++;
	}
	*range = xoxo;
	return (x);
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
    int *range;

    int result = ft_ultimate_range(&range, min, max);

    if (range == NULL)
    {
        printf("Error: Memory allocation failed or invalid range.\n");
        return (1);
    }

    printf("Result: %d\n", result);

    int i = 0;
    while (i < max - min)
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");

    free(range);
    return (0);
}
*/
