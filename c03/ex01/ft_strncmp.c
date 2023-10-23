/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:27:37 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/09/26 14:38:12 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

#include <string.h>

int main(void)
{
  int i;

  i = 0;
  char  s1[] = "Hello";
  char  s2[] = "Hello World";

  printf("%d\n", strncmp(s1, s2, 10));
  i = ft_strncmp(s1, s2, 10);
  printf("Compare result: %d\n", i);
  return (0);
}
