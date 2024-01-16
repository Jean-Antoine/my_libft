/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeada-si <jeada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:10:43 by jeada-si          #+#    #+#             */
/*   Updated: 2024/01/16 09:12:07 by jeada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min_array(int *n, int size)
{
	int	i;
	int	min;

	if (size)
		return (*n);
	i = 1;
	min = *n;
	while (i < size)
		if (n[i] < min)
			min = n[i];
	return (min);
}
