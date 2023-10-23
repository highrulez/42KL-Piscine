/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:11:36 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/28 02:18:45 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = argc - 1;
	if (argc > 1)
	{
		while (x > 0)
		{
			y = 0;
			while (argv[x][y])
			{
				write(1, &argv[x][y], 1);
				y++;
			}
			write(1, "\n", 1);
			x--;
		}
	}
	return (0);
}
