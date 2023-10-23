/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:11:14 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/28 02:18:32 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	ent1;
	int	ent2;

	ent1 = 1;
	if (argc > 1)
	{
		while (ent1 < argc)
		{
			ent2 = 0;
			while (argv[ent1][ent2] != '\0')
			{
				write(1, &argv[ent1][ent2], 1);
				ent2++;
			}
			write(1, "\n", 1);
			ent1++;
		}
	}
	return (0);
}
