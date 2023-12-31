# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 03:19:48 by lcarrizo          #+#    #+#              #
#    Updated: 2023/12/05 06:23:13 by lcarrizo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

############################    SRCS/DIRECTORES   #############################

NAME		= libft.a
HEADER		= -I ./
SRC		= ft_putnbr_fd.c ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
		ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJ		= $(SRC:.c=.o)

#############################    VARIABLES   ##################################

CC		= cc
RM 		= rm -fr
# GCC OPT: -c = compile without exe. -I = find the header in the folder given
OPT		= -c
CFLAGS		= -Wall -Werror -Wextra
# ar: 	r = Insert  the  files  member...  into  archive (with replacement).
#	c = Create  the  archive.   The specified archive is always created 
#	    if it did not exist, when you request an update.
#	s = Add an index to the archive, or update it if it already exists.
AR		= ar rcs

#############################    TARGETS    ##################################

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(OPT) $(SRC)
		$(AR) $(NAME) $(OBJ) 

all:		$(NAME)

clean:		
		$(RM) $(OBJ) 
		@echo "** clean **"
		
fclean:		clean
		$(RM) $(NAME)
		@echo "** full clean **"

re:		fclean all

.PHONY: all clean fclean re bonus
