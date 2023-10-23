/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:48:06 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/25 15:26:22 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*to_find_ptr;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		str_ptr = str;
		to_find_ptr = to_find;
		while ((*to_find_ptr != '\0') && (*str_ptr == *to_find_ptr))
		{
			str_ptr++;
			to_find_ptr++;
		}
		if (*to_find_ptr == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
/*
int	main(int argc, char **argv)
{
    if (argc != 3)
	{
        printf("Usage: %s <string> <substring_to_find>\n", argv[0]);
        return (1);
    }

    char *result = ft_strstr(argv[1], argv[2]);

    if (result != NULL)
    {
        printf("We'll find it for you: %s\n", argv[1]);
		printf("Its inside there: %s\n", argv[2]);
    }
	else 
	{
        printf("Sorry, couldn't find it.\n");
    }

    return (0);
}
*/
