# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpjevic <mpjevic@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/19 18:08:09 by mpjevic           #+#    #+#              #
#    Updated: 2024/04/27 16:14:22 by homefolder       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libft.a
B_NAME =	libft.a
HEADER =	libft.h

SRCS = 		ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c

OBJS = 		$(SRCS:.c=.o)

B_SRC = 	ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstmap_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstsize_bonus.c

B_OBJS = 	$(B_SRC:.c=.o)

CC = 		cc
CFLAGS = 	-Wall -Wextra -Werror
RM = 		rm -f

all: 		$(NAME)

$(NAME): 	$(OBJS) $(HEADER)
			ar rcs $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS) $(B_OBJS)

fclean:		clean
			$(RM) $(NAME) $(B_NAME) 

re: 		fclean all

bonus: 		$(B_NAME)

$(B_NAME):	$(OBJS) $(B_OBJS) $(HEADER)
			ar rcs $(B_NAME) $(OBJS) $(B_OBJS)

$(B_OBJS):	$(SRCS) $(HEADER)
		$(CC) $(CFLAGS) -c $(@:.o=.c) -o $@

.PHONY: 	all clean fclean re bonus

