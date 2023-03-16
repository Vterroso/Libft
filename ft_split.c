/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:51:18 by vterroso          #+#    #+#             */
/*   Updated: 2023/03/16 16:30:35 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)  
			s++;
		
	}
	return (count);
}
/*
char	**ft_split(char const *s, char c)
{
	
}*/

#include <stdio.h>

int main(void)
{
    char *str = "Hola amigo mio";
    char c = 40;
    printf("%d\n", count_words(str, c));

    return 0;
}
