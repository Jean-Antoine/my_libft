/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeada-si <jeada-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:15:26 by jeada-si          #+#    #+#             */
/*   Updated: 2024/01/15 18:17:56 by jeada-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_max_array(int *n, int size)
{
	int	i;
	int	max;

	if (size)
		return (*n);
	i = 1;
	max = *n;
	while (i < size)
		if (n[i] > max)
			max = n[i];
	return (max);
}
