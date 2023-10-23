/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:44:59 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/25 15:29:20 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (original_dest);
}

/*
int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: %s <dest_string> <src_string> <nb>\n", argv[0]);
        return (1);
    }

    char *dest = argv[1];
    char *src = argv[2];
    unsigned int nb = 0;

    for (int i = 0; argv[3][i] != '\0'; i++)
    {
        nb = nb * 10 + (argv[3][i] - '0');
    }

    ft_strncat(dest, src, nb);

    printf("Concatenated String: %s\n", dest);

    return (0);
}
*/
