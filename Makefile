# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 11:02:33 by jeberle           #+#    #+#              #
#    Updated: 2024/04/16 21:29:17 by jonathanebe      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CODEDIRS=.
CC=cc
CFLAGS= -Wall -Wextra -Werror
DEPFLAGS= -MP -MD

ANALYZER_SRCS= \
./analyzer/ft_isalnum.c \
./analyzer/ft_isalpha.c \
./analyzer/ft_isascii.c \
./analyzer/ft_isdigit.c \
./analyzer/ft_isprint.c \
./analyzer/ft_str_is_unique.c \
./analyzer/ft_strchr.c \
./analyzer/ft_strcmp.c \
./analyzer/ft_strcontains.c \
./analyzer/ft_strlen.c \
./analyzer/ft_strncmp.c \
./analyzer/ft_strnstr.c \
./analyzer/ft_strpbrk.c \
./analyzer/ft_strrchr.c \
./analyzer/ft_strspn.c \
./analyzer/ft_strstr.c \
./analyzer/ft_substr.c

CONVERTER_SRCS= \
./converter/ft_atoi.c \
./converter/ft_itoa.c \
./converter/ft_strbase.c

LISTS_SRCS= \
./lists/ft_dlstadd_back.c \
./lists/ft_dlstadd_front.c \
./lists/ft_dlstlast.c \
./lists/ft_dlstnew.c \
./lists/ft_dlstrotate.c \
./lists/ft_dlstsize.c \
./lists/ft_lstadd_back.c \
./lists/ft_lstadd_front.c \
./lists/ft_lstclear.c \
./lists/ft_lstdelone.c \
./lists/ft_lstfind.c \
./lists/ft_lstinsert_after.c \
./lists/ft_lstiter.c \
./lists/ft_lstlast.c \
./lists/ft_lstmap.c \
./lists/ft_lstnew.c \
./lists/ft_lstsize.c

MEMORY_SRCS= \
./memory/ft_bzero.c \
./memory/ft_calloc.c \
./memory/ft_getenv.c \
./memory/ft_memchr.c \
./memory/ft_memcmp.c \
./memory/ft_memcpy.c \
./memory/ft_memmove.c \
./memory/ft_memset.c \
./memory/ft_realloc.c \
./memory/ft_smartfree.c \

PRINTS_SRCS= \
./prints/ft_printf.c \
./prints/ft_putchar_fd.c \
./prints/ft_putchar.c \
./prints/ft_putcharr_fd.c \
./prints/ft_putcharr.c \
./prints/ft_putendl_fd.c \
./prints/ft_putendl.c \
./prints/ft_putenv.c \
./prints/ft_putnbr_fd.c \
./prints/ft_putnbr.c \
./prints/ft_putnbrr.c \
./prints/ft_putstr_fd.c \
./prints/ft_putstr.c \
./prints/ft_putstrr.c \
./prints/ft_putunbr.c \
./prints/ft_putunbrr.c \
./prints/get_next_line_utils.c \
./prints/get_next_line.c \
./prints/smart_prints_1.c \
./prints/smart_prints_2.c

STRINGS_SRCS= \
./strings/ft_strcpy.c \
./strings/ft_split.c \
./strings/ft_strdup.c \
./strings/ft_striteri.c \
./strings/ft_strjoin.c \
./strings/ft_strlcat.c \
./strings/ft_strlcpy.c \
./strings/ft_strmapi.c \
./strings/ft_strreplace.c \
./strings/ft_strreplaceall.c \
./strings/ft_strrev.c \
./strings/ft_strtrim.c \
./strings/ft_tolower.c \
./strings/ft_toupper.c

CFILES= $(ANALYZER_SRCS) $(CONVERTER_SRCS) $(LISTS_SRCS) $(MEMORY_SRCS) $(PRINTS_SRCS) $(STRINGS_SRCS)
OBJECTS=$(CFILES:.c=.o)
DEPFILES=libft.h

.PHONY:	all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rs $(NAME) $(OBJECTS)

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all