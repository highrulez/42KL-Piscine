/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 02:32:20 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/28 13:35:31 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	xoxo;

	xoxo = 0;
	while (s1[xoxo] == s2[xoxo])
	{
		if (s1[xoxo] == '\0')
		{
			return (0);
		}
		xoxo++;
	}
	return (s1[xoxo] - s2[xoxo]);
}

void	ft_swap(char **str, int size)
{
	char	*temporary;
	int		i;
	int		j;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size - 1)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				temporary = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temporary;
			}
			j++;
		}
		i++;
	}
}

void	ft_print_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		ft_swap(argv, argc);
		while (i < argc)
		{
			ft_print_params(argv[i++]);
		}
	}
	return (0);
}
