/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:51:18 by vterroso          #+#    #+#             */
/*   Updated: 2023/03/17 11:04:59 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)  
			i++;
		
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
    char c = ' ';
    printf("%d\n", count_words(str, c));

    return 0;
}
