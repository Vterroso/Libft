/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:05:05 by vterroso          #+#    #+#             */
/*   Updated: 2023/03/14 19:08:52 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	len = ft_strlen(s1);
	while (i <= len / 2 && set != NULL && ft_strchr(set, s1[i]) != NULL)
		i++;
	j = len - 1;
	while (j >= len / 2 && set != NULL && ft_strchr(set, s1[j]) != NULL)
		j--;
	if (i > j)
		return (ft_strdup(""));
	len = j - i + 1;
	return (ft_substr(s1, i, len));
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%s\n", ft_strtrim("n", ""));
	return (0);
}*/
