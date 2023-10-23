/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:07:42 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/27 20:34:58 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	name;

	name = 0;
	if (argc == 1)
	{
		while (argv[0][name])
		{
			write(1, &argv[0][name], 1);
			name++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "Leave it empty!", 15);
	}
	return (0);
}
