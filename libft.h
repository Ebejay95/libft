/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:38:35 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/05 13:46:16 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// HELPERSHIT
char	*build_line(char *workstring);
char	*build_workstring(int fd, char *workstring, int *state, char *range);
char	*prep_next(char *workstring);
int		smart_print_c(int c);
int		smart_print_s(char *s);
int		smart_print_p(void *p);
int		smart_print_d(int i);
int		smart_print_i(int i);
int		smart_print_u(unsigned int i);
int		smart_print_x(unsigned int i);
int		smart_print_xup(unsigned int i);
int		smart_print(char type, va_list args);
int		null_pointer(void);

// ANALYZER
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_str_is_unique(char *str);
char	*ft_strchr(const char *src, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strcontains(char *haystack, char needle);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strpbrk(const char *s, const char *charset);
char	*ft_strrchr(const char *src, int c);
size_t	ft_strspn(const char *s, const char *charset);
char	*ft_strstr(const char *hayst, const char *needle);
char	*ft_substr(char const *s, unsigned int start, size_t len);

// CONVERTER
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
char	*ft_strbase(unsigned long long input, const char *base);

// LISTS
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

// MEMORY
void	ft_bzero(void *start, size_t size);
void	*ft_calloc(size_t count, size_t size);
char	*ft_getenv(const char *name);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *trg, const void *src, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *trg, const void *src, size_t size);
void	*ft_memset(void *start, int fill, size_t size);
void	*realloc(void *ptr, size_t size);
int		ft_setenv(const char *name, const char *value, int overwrite);
char	*ft_smartfree(char *s, int proc);
int		ft_unsetenv(const char *name);

// PRINTS
int		ft_printf(const char *text, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
int		ft_putcharr_fd(char c, int fd);
int		ft_putcharr(char c);
void	ft_putendl_fd(char *s, int fd);
void	ft_putendl(char *s);
int		ft_putenv(char *string);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
int		ft_putnbrr(int n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putstr(char *s);
int		ft_putstrr(char *s);
void	ft_putunbr(unsigned int n);
int		ft_putunbrr(unsigned int n);
char	*get_next_line(int fd);

size_t	ft_strcpy(char *trg, const char *src);
size_t	ft_strlcat(char *trg, const char *src, size_t size);
size_t	ft_strlcpy(char *trg, const char *src, size_t size);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strrev(const char *s1);
char	*ft_strreplace(char *h, char *n, char *r);
char	*ft_strreplaceall(char *h, char *n, char *r);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);
char	*build_line(char *workstring);
char	*build_workstring(int fd, char *workstring, int *state, char *range);
char	*prep_next(char *workstring);
void	*ft_memset(void *start, int fill, size_t size);
#endif