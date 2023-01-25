/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:20:59 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/25 16:39:20 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	itera;

	itera = 0;
	if (!s || !fd)
		return ;
	while (s[itera] != '\0')
	{
		write(fd, &s[itera], 1);
		itera++;
	}
}