/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:02:40 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/10/05 16:13:04 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		x;
	char	*dup;

	length = ft_strlen(src);
	x = 0;
	dup = (char *) malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	while (src[x])
	{
		dup[x] = src[x];
		x++;
	}
	dup[x] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int			x;
	t_stock_str	*tab;

	x = 0;
	tab = (t_stock_str *) malloc(sizeof(t_stock_str) * (argc + 1));
	if (tab == NULL)
	{
		return (NULL);
	}
	while (x < argc)
	{
		tab[x].str = argv[x];
		tab[x].size = ft_strlen(argv[x]);
		tab[x].copy = ft_strdup(argv[x]);
		x++;
	}
	tab[x].str = 0;
	return (tab);
}
