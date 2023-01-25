/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:08:56 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/25 15:30:35 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_getsize(const int n);
char	*ft_fillstr(int n, char *result_str, long size_str);


char	*ft_itoa(int n)
{
	long	size_str;
	char	*result_str;

	/*
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	if (n == 0)
		return (ft_strdup("0"));
	*/
	size_str = ft_getsize(n);
	result_str = (char *) malloc(size_str * sizeof (char));
	if (result_str == NULL)
		return (NULL);
	return (ft_fillstr(n, result_str, size_str));
	
}

char	*ft_fillstr(int n, char *result_str, long size_str)
{	
	if (n == 0)
	{
		result_str[0] = 48;
		return (result_str);
	}
	if (n < 0)
	{
		result_str[0] = '-';
		n = n * -1;
		size_str--;
	}
	printf("%s RESULT_STR\n", result_str);
	printf("%ld SIZE_STR\n", size_str);
	printf("%d N\n\n", n);
	while (n > 0)
	{
		result_str[size_str] = 48 + (n % 10);
		printf("%s RESULT_STR\n", result_str);
		n = n / 10;
		size_str--;
		printf("%ld SIZE_STR\n", size_str);
		printf("%d N\n", n);
		
	}
	return (result_str);
}

long	ft_getsize(const int n)
{
	long	size;
	int		m;

	m = (int)n;
	size = 0;
	if (m < 0)
	{
		size++;
		m *= -1;
	}
	while (m > 0)
	{
		m /= 10;
		size++;
	}
	return (size);
}


#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(42));
	return (0);
}


/*
 size_t	size;
	size_t	iterator;
	char	*result_string;

	size = ft_getsize(n);
	result_string = (char *) malloc ((size) * sizeof (char));
	if (!result_string)
		return (NULL);
	iterator = 0;
	result_string[size] = '\0';
	if (n == 0)
	{
		result_string[0] = 48;
		return (result_string);
	}
	if (n < 0)
	{
		result_string[0] = '-';
		n = n * -1;
	}
	while (n >= 0)
	{
		result_string[iterator] = 48 + (n % 10);
		n = n / 10;
		iterator--;
	}
	return (result_string);

	printf("%s RESULT_STR\n", result_str);
	printf("%ld SIZE_STR\n", size_str);
	printf("%d N\n", n);

	*/