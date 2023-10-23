/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:49:40 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/26 02:52:14 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}

/*
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s <destination_string> <source_string>\n", argv[0]);
        return (1);
    }

    char destination[100];
    
    ft_strcat(destination, argv[1]);
    ft_strcat(destination, argv[2]);

    printf("Concatenated String: %s\n", destination);

    return (0);
}
*/
