/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 00:03:30 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/25 15:10:36 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;
	unsigned int	remaining_space;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	remaining_space = size - dest_len - 1;
	i = dest_len;
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (*src && i < size - 1)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (total_len);
}
/*
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s <destination> <source>\n", argv[0]);
        return 1;
    }

    char *dest = argv[1];
    char *src = argv[2];

    unsigned int size = 100;

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("Resulting string length: %u\n", result);

    return 0;
}
*/
