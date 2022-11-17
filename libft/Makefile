# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 14:36:56 by dpentlan          #+#    #+#              #
#    Updated: 2022/11/07 14:36:58 by dpentlan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This makefile is going to compile all the .c source files into .o object files
# Then package them with the archiver "ar" command. 

NAME = libft.a

SRCS =  ft_isalpha.c \
        ft_isdigit.c \
	ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_strlen.c \
        ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_strlcpy.c \
        ft_strlcat.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strncmp.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strnstr.c \
        ft_atoi.c \
        ft_calloc.c \
# ft_strdup.c \		# Can use malloc()

# AFTER THIS IS PART II

# ft_substr.c \ 
# ft_strjoin.c \ 
# ft_strtrim.c \ 
# ft_split.c \ 
# ft_itoa.c \ 
# ft_strmapi.c \ 
# ft_striteri.c \ 
# ft_putchar_fd.c \ 
# ft_putstr_fd.c \ 
# ft_putendl_fd.c \ 
# ft_putnbr_fd.c \ 
# Not finished. Check Bonus.

# Need to look up the syntax here.
OBJS = ${SRCS:.c=.o}

INCS = libft.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	ar rcs $(NAME) -o $(OBJS)

# Need to look up the syntax here.
.c.o:
	gcc ${CFLAGS} -c $< -o ${<:.c=.o}

# clean only deletes object files.
clean:
	rm -f $(OBJS)

# fclean deletes object files and the binary.
fclean:	clean
	rm -f $(NAME)

# re will delete the object files and binary and then re run all. Fresh start.
re:	fclean all

# Was coppied makefile to learn from.

# NAME    = libft.a
# 
# SRCS    = ft_atoi.c\
    #   ft_bzero.c\
    #   ft_calloc.c\
    #   ft_isalnum.c\
    #   ft_isalpha.c\
    #   ft_isascii.c\
    #   ft_isdigit.c\
    #   ft_isprint.c\
    #   ft_strlen.c\
    #   ft_itoa.c\
    #   ft_memset.c\
    #   ft_memcpy.c\
# 
# OBJS    = ${SRCS:.c=.o}
# 
# INCS    = libft.h
# 
# RM     = rm -f
# 
# LIB    = ar rcs
# 
# GCC    = gcc
# 
# CFLAGS    = -Wall -Wextra -Werror
# 
# .c.o:
        # ${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}
# 
# $(NAME):    ${OBJS} ${INCS}
        # ${LIB} ${NAME} ${OBJS}
# 
# all:        ${NAME}
# 
# clean:
        # rm -f ${OBJS}
# 
# fclean:        clean
        # rm  -f ${NAME}
# 
