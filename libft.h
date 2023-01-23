/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:48:37 by selbakya          #+#    #+#             */
/*   Updated: 2023/01/23 20:43:35 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void    *ft_calloc(size_t number_of_elements, size_t size_of_element);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_isalpha(int symbol);
void	ft_bzero(void *s, size_t length);
void	*ft_memset(void *dest, int val, size_t len);
int 	ft_memcmp(const void *array1, const void *array2, size_t len);
int		ft_isalnum(int sym);
int		ft_isascii(int sym);
int		ft_isdigit(int symbol);
int		ft_isprint(int sym);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void    *ft_memchr(const void *smth, int symbol, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *dest, int val, size_t len);
char    *ft_strchr(const char *pointer_str, int symbol);
char 	*ft_strdup(const char *source_string);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *s, int symb);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int symbol);
int		ft_toupper(int symbol);

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}	t_list;

#endif
