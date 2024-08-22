# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 11:02:33 by jeberle           #+#    #+#              #
#    Updated: 2024/08/22 18:30:35 by jeberle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#
#--------------                       PRINT                       -------------#
#------------------------------------------------------------------------------#

RED := \033[31m
GREEN := \033[32m
YELLOW := \033[33m
BLUE := \033[34m
MAGENTA := \033[35m
CYAN := \033[36m
X := \033[0m

SUCCESS := \n$(CYAN)\
█████████████████████████████████████$(X)\n\
$(X)\n\
█        █  ███████  ███████  ███████$(X)\n\
█        █  █     █  █           █   $(X)\n\
█        █  ██████   ███████     █   $(X)\n\
█        █  █     █  █           █   $(X)\n\
███████  █  ███████  █           █   $(X)\n\
$(X)\n\
$(CYAN)█████████████████████████████████████$(X)\n\


#------------------------------------------------------------------------------#
#--------------                      GENERAL                      -------------#
#------------------------------------------------------------------------------#

NAME=libft.a

#------------------------------------------------------------------------------#
#--------------                       FLAGS                       -------------#
#------------------------------------------------------------------------------#

CC=cc
CFLAGS=-Wall -Wextra -Werror
ifeq ($(DEBUG), 1)
	CFLAGS += -fsanitize=address -g
endif
DEPFLAGS=-MMD -MP

#------------------------------------------------------------------------------#
#--------------                        DIR                        -------------#
#------------------------------------------------------------------------------#

OBJ_DIR := ./obj
DEP_DIR := $(OBJ_DIR)/.deps
INC_DIRS := .
SRC_DIRS := analyzer arrays btree converter lists math memory prints strings

vpath %.c $(foreach dir,$(SRC_DIRS),$(dir))
vpath %.h $(INC_DIRS)
vpath %.d $(DEP_DIR)

#------------------------------------------------------------------------------#
#--------------                        SRC                        -------------#
#------------------------------------------------------------------------------#

ANALYZER_SRCS= \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_isspace.c \
ft_str_is_unique.c \
ft_strcchr.c \
ft_strchr.c \
ft_strcmp.c \
ft_strcontains.c \
ft_strcstr.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strpbrk.c \
ft_strrchr.c \
ft_strspn.c \
ft_strstr.c \
ft_substr.c

ARRAYS_SRCS= \
ft_array_free.c \
ft_array_l_free.c \
ft_array_length.c \
ft_array_strcchr.c \
ft_array_strchr.c

BTREE_SRCS= \
ft_btreeadd_child.c \
ft_btreeadd_next.c \
ft_btreeclear.c \
ft_btreenew.c \
ft_btreeput.c

CONVERTER_SRCS= \
ft_atoi.c \
ft_atol.c \
ft_atoistate.c \
ft_itoa.c \
ft_ltoa.c \
ft_strbase.c

LISTS_SRCS= \
ft_dlstadd_back.c \
ft_dlstadd_front.c \
ft_dlstclear.c \
ft_dlstdelone.c \
ft_dlstfind.c \
ft_dlstlast.c \
ft_dlstnew.c \
ft_dlstput.c \
ft_dlstrotate.c \
ft_dlstsize.c \
ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstclear.c \
ft_lstdelone.c \
ft_lstfind.c \
ft_lstinsert_after.c \
ft_lstiter.c \
ft_lstlast.c \
ft_lstmap.c \
ft_lstnew.c \
ft_lstpenultimate.c \
ft_lstput.c \
ft_lstrotate.c \
ft_lstsize.c

MATH_SRCS= \
ft_abs.c \
ft_even.c \
ft_ggt.c \
ft_isneg.c \
ft_ispos.c \
ft_kgv.c \
ft_odd.c \

MEMORY_SRCS= \
ft_bzero.c \
ft_calloc.c \
ft_condfree.c \
ft_getenv.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_multifree.c \
ft_setenv.c \
ft_unsetenv.c \
ft_realloc.c \
ft_smartfree.c \

PRINTS_SRCS= \
ft_color.c \
ft_fprintf.c \
ft_printf.c \
ft_putarray.c \
ft_putbits_fd.c \
ft_putbits.c \
ft_putchar_fd.c \
ft_putchar.c \
ft_putcharr_fd.c \
ft_putcharr.c \
ft_putendl_fd.c \
ft_putendl.c \
ft_putenv_fd.c \
ft_putenv.c \
ft_putnbr_fd.c \
ft_putnbr.c \
ft_putnbrr_fd.c \
ft_putnbrr.c \
ft_putstr_fd.c \
ft_putstr.c \
ft_putstrr_fd.c \
ft_putstrr.c \
ft_putunbr_fd.c \
ft_putunbr.c \
ft_putunbrr_fd.c \
ft_putunbrr.c \
get_next_line.c \
smart_prints_1.c \
smart_prints_2.c

STRINGS_SRCS= \
ft_count_words.c \
ft_count_words_b_str.c \
ft_split_b_str.c \
ft_split.c \
ft_strcat.c \
ft_strcpy.c \
ft_strdup.c \
ft_strendswith.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strmapi.c \
ft_strncat.c \
ft_strncpy.c \
ft_strndup.c \
ft_strreplace.c \
ft_strreplaceall.c \
ft_strrev.c \
ft_strtrim.c \
ft_tolower.c \
ft_toupper.c

#------------------------------------------------------------------------------#
#--------------                      OBJECTS                      -------------#
#------------------------------------------------------------------------------#

OBJECTS := $(addprefix $(OBJ_DIR)/, $(ANALYZER_SRCS:%.c=%.o) $(ARRAYS_SRCS:%.c=%.o) $(BTREE_SRCS:%.c=%.o) $(CONVERTER_SRCS:%.c=%.o) $(LISTS_SRCS:%.c=%.o) $(MATH_SRCS:%.c=%.o) $(MEMORY_SRCS:%.c=%.o) $(PRINTS_SRCS:%.c=%.o) $(STRINGS_SRCS:%.c=%.o))

#------------------------------------------------------------------------------#
#--------------                      COMPILE                      -------------#
#------------------------------------------------------------------------------#

.PHONY:	all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rs $(NAME) $(OBJECTS) > /dev/null 2>&1
	@echo "$(GREEN)SUCCESS:$(X)\n$(SUCCESS)"

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) $(DEPFLAGS) -I$(INC_DIRS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS) $(OBJECTS:.o=.d)
	@echo "\033[31mobjects deleted\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[31mlibft deleted\033[0m"

re: fclean all
