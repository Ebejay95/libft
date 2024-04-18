# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 11:02:33 by jeberle           #+#    #+#              #
#    Updated: 2024/04/18 17:16:42 by jeberle          ###   ########.fr        #
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
./lists/ft_dlstclear.c \
./lists/ft_dlstdelone.c \
./lists/ft_dlstlast.c \
./lists/ft_dlstnew.c \
./lists/ft_dlstput.c \
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
./lists/ft_lstput.c \
./lists/ft_lstrotate.c \
./lists/ft_lstsize.c

MATH_SRCS= \
./math/ft_abs.c \
./math/ft_even.c \
./math/ft_ggt.c \
./math/ft_isneg.c \
./math/ft_ispos.c \
./math/ft_kgv.c \
./math/ft_odd.c \

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
./prints/ft_putbits.c \
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

CFILES= $(ANALYZER_SRCS) $(CONVERTER_SRCS) $(LISTS_SRCS) $(MATH_SRCS) $(MEMORY_SRCS) $(PRINTS_SRCS) $(STRINGS_SRCS)
OBJECTS=$(CFILES:.c=.o)
DEPFILES=libft.h

.PHONY:	all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "\033[33mmake libft\033[0m"
	@ar rs $(NAME) $(OBJECTS) > /dev/null 2>&1
	@echo "\033[32mSUCCESS!!\033[0m"

%.o:%.c
	@$(CC) $(CFLAGS) $(DEPFLAGS) -c -o $@ $<

clean:
	@rm -rf $(OBJECTS)
	@echo "\033[31mobjects deleted\033[31m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[31mlibft deleted\033[31m"

re: fclean all
