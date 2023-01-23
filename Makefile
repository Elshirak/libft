# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selbakya <selbakya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 14:04:13 by selbakya          #+#    #+#              #
#    Updated: 2023/01/23 20:46:29 by selbakya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror 

HEADER = libft.h

SOURCES = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcmp.c \
ft_strncmp.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strdup.c ft_strnstr.c ft_strrchr.c ft_bzero.c \
ft_calloc.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_substr.c ft_strjoin.c ft_strtrim.c 
# ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(SOURCES:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

BLUE = \033[1;36m 
PINK = \033[1;35m
RESET = \033[0m

.PHONY: all bonus clean fclean re

all: $(NAME)
	@echo $?

$(NAME): $(OBJECTS) $(HEADER)
	@echo "$(BLUE) ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ \n$(RESET)\c"
	ar -rc $(NAME) $?
	@ranlib $(NAME)
	@echo "\n$(BLUE) lib created \n$(RESET)"

bonus: $(BONUS_OBJ) $(HEADER)
	@echo "$(BLUE) ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ ~~~ \n$(RESET)\c"
	ar -rc $(NAME) $?
	@ranlib $(NAME)
	@echo "\n$(BLUE) lib with bonus functions was created \n$(RESET)"

clean:  
	@rm -rf $(BONUS_OBJ) $(OBJECTS)
	@echo "$(NAME): $(PINK) object files are deleted $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@rm libft.h.gch
	@echo "$(NAME): $(PINK) $(NAME) deleted $(RESET)"


re: fclean all