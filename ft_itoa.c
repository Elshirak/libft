/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:08:56 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/22 15:09:17 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		sign;
	size_t	size;
	char	*ptr;

	sign = 1;
	if (n < 0)
		sign = -1;
	size = ft_getsize(n);
	ptr = (char *) malloc ((size) * sizeof (char));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	
}

size_t	ft_getsize(const int sign, const int n)
{
	size_t	size;
	int		m;

	m = (int)n;
	size = 0;
	if (sign == -1)
	{
		size++;
		m *= -1;
	}
	while (m > 0)
	{
		m /= 10;
		size++;
	}
	return (size + 1);
}

