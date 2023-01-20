/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:48:37 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/20 14:31:33 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_isalpha(int symbol);
void	ft_bzero(void *s, size_t length);
void	*ft_memset(void *dest, int val, size_t len);
int		ft_isalnum(int sym);
int		ft_isascii(int sym);
int		ft_isdigit(int symbol);
int		ft_isprint(int sym);
void	ft_memcpy(void *dest, const void *src, size_t len);

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}	t_list;

#endif
