/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:16:50 by vterroso          #+#    #+#             */
/*   Updated: 2023/03/07 18:30:19 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalpha(110));
	printf("%d\n", ft_isdigit(48));
	printf("%d\n", ft_isalnum(56));
	printf("%d\n", ft_isascii(120));
	printf("%d\n", ft_isprint(85));
	printf("%d\n", ft_isalpha(5));
	printf("%d\n", ft_isalpha(5));
	return (0);
}
