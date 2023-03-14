/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:45:56 by vterroso          #+#    #+#             */
/*   Updated: 2023/03/14 21:13:48 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_count(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i = -i;
		count ++;
	}
	while (i < 0)
	{
		i /= 10;
		count ++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	char		*str;
	long int	nb;
	int			i;

	i = digit_count(nb);

}
