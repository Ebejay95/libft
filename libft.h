/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:38:35 by jeberle           #+#    #+#             */
/*   Updated: 2024/04/25 13:56:04 by jeberle          ###   ########.fr       */
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

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}	t_dlist;

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
//	int ft_isspace(int c);
//	int ft_isupper(int c);
//	int ft_islower(int c);
//	int ft_strisupper(int c);
//	int ft_strislower(int c);
//	int ft_isxdigit(int c);
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
//double ft_atof(const char *str);
//char *ft_ulltoa_base(unsigned long long value, const char *base);
//char *ft_dtoa(double n, unsigned int precision);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
char	*ft_strbase(unsigned long long input, const char *base);

// LISTS
//void ft_lstinsert_before(t_list **lst, t_list *next, t_list *new);
//void ft_lstremove(t_list **lst, t_list *to_remove, void (*del)(void *));
//t_list *ft_lstmerge(t_list *first, t_list *second);
//void ft_lstsort(t_list **lst, int (*cmp)(void *, void *));
//void	ft_dlstdelone(t_dlist *dlst, void (*del)(void *));
//void	ft_dlstiter(t_dlist *dlst, void (*f)(void *));
//	*ft_dlstmap(t_dlist *dlst, void *(*f)(void *), void (*del)(void *));
// *ft_dlstfind(t_dlist *dlst, void *content, int (*cmp)(void *, void *));
//void ft_dlstinsert_after(t_dlist *dlst, t_dlist *new);
//void ft_dlstinsert_before(t_dlist **lst, t_list *next, t_list *new);
//void ft_dlstremove(t_dlist **lst, t_dlist *to_remove, void (*del)(void *));
//t_dlist *ft_dlstmerge(t_dlist *first, t_dlist *second);
//void ft_dlstsort(t_dlist **lst, int (*cmp)(void *, void *));
void	ft_dlstadd_back(t_dlist **lst, t_dlist *new);
void	ft_dlstadd_front(t_dlist **lst, t_dlist *new);
void	ft_dlstclear(t_dlist **lst, void (*del)(void *));
void	ft_dlstdelone(t_dlist *lst, void (*del)(void *));
t_dlist	*ft_dlstlast(t_dlist *lst);
t_dlist	*ft_dlstnew(void *content);
void	ft_dlstput(t_dlist **lst, void (*listprint)(void *), char sep);
void	ft_dlstrotate(t_dlist **lst, int n, int direction);
int		ft_dlstsize(t_dlist *dlst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
t_list	**ft_lstfind(t_list **lst, void *content, int (*cmp)(void *, void *));
void	ft_lstinsert_after(t_list **lst, t_list *next, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstpenultimate(t_list *lst);
void	ft_lstput(t_list **lst, void (*listprint)(void *), char sep);
void	ft_lstrotate(t_list **lst, int n, int direction);
int		ft_lstsize(t_list *lst);

// MATH
int		ft_abs(int n);
int		ft_even(int n);
int		ft_ggt(int a, int b);
int		ft_isneg(int n);
int		ft_ispos(int n);
int		ft_kgv(int a, int b);
int		ft_odd(int n);
//int ft_isprime(int n);
//double ft_pow(double base, double exponent);
//double ft_sqrt(double x);
//double ft_log(double x);
//double ft_log10(double x);
//double ft_fabs(double x);
//double ft_mean(double *array, size_t length);
//double ft_median(double *array, size_t length);
//double ft_stddev(double *array, size_t length);
//double ft_variance(double *array, size_t length);
//void ft_vec_add(double *result, const double *a, const double *b, size_t n);
// ft_vec_scalar_mul(double *result, const double *a, double scalar, size_t n);
//void ft_vec_cross(double result[3], const double a[3], const double b[3]);
//double ft_vec_dot(const double *a, const double *b, size_t n);
//void ft_matrix_add(double **result, double **a, double **b,
// size_t rows, size_t cols);
//void ft_matrix_mul(double **result, double **a, double **b,
// size_t a_rows, size_t a_cols, size_t b_cols);
//double ft_matrix_det2x2(double **matrix);
//double ft_matrix_det3x3(double **matrix);
//void ft_matrix_transpose(double **result, double **matrix,
//size_t rows, size_t cols);
//void ft_srand(unsigned int seed);
//int ft_rand(void);
//int ft_rand_range(int min, int max) {
//    return min + ft_rand() % (max - min + 1);
//}
//double ft_rand_double(void) {
//    return ft_rand() / ((double)RAND_MAX + 1);
//}

// MEMORY
//void *ft_aligned_alloc(size_t alignment, size_t size);
//void ft_memcheck(const void *ptr, const char *file, int line);
//void *ft_memcpy_safe(void *destination, const void *source, 
//size_t size, size_t dest_size);
//void ft_memswap(void *ptr1, void *ptr2, size_t size);
//void ft_memtrack_start(void);
//void ft_memtrack_stop(void);
//void ft_memtrack_report(void);
void	ft_bzero(void *start, size_t size);
void	*ft_calloc(size_t count, size_t size);
char	*ft_getenv(const char *name);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *trg, const void *src, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *trg, const void *src, size_t size);
void	*ft_memset(void *start, int fill, size_t size);
void	*ft_realloc(void *ptr, size_t size);
int		ft_setenv(const char *name, const char *value, int overwrite);
char	*ft_smartfree(char *s, int proc);
int		ft_unsetenv(const char *name);

// PRINTS
// all for error fd unified naming and suppert for fd's return 
//etc TDO ERROR (perror)
int		ft_printf(const char *text, ...);
void	ft_putbits(int n);
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

// SRINGS
//char *ft_strtok(char *str, const char *delim);
//char *ft_strncpy(char *dest, const char *src, size_t n);
//size_t ft_strcspn(const char *s, const char *reject);
//size_t ft_strspn(const char *s, const char *accept);
//char *ft_strchrnul(const char *s, int c);
//char *ft_strpbrk(const char *s, const char *accept);
//char *ft_strndup(const char *s1, size_t n);
size_t	ft_count_words(char const *s, char c);
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

// FILE_HANDLING
//int ft_open(const char *filename, int mode);
//ssize_t ft_read(int fd, void *buffer, size_t count);
//ssize_t ft_write(int fd, const void *buffer, size_t count);
//int ft_close(int fd);
//int ft_exists(const char *filename);
//int ft_mkdir(const char *pathname, mode_t mode);

// NETWORK
//int ft_socket(int domain, int type, int protocol);
//int ft_bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
//int ft_listen(int sockfd, int backlog);
//int ft_accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
//ssize_t ft_send(int sockfd, const void *buf, size_t len, int flags);
//ssize_t ft_recv(int sockfd, void *buf, size_t len, int flags);
//int ft_close(int sockfd);
//ssize_t ft_sendto(int sockfd, const void *buf, size_t len, int flags, 
//const struct sockaddr *dest_addr, socklen_t addrlen);
//ssize_t ft_recvfrom(int sockfd, void *buf, size_t len, int flags, struct 
//sockaddr *src_addr, socklen_t *addrlen);

// TIME
//double ft_time_seconds(void);
//void ft_highres_time_start(void);
//double ft_highres_time_stop(void);

// HASH
//unsigned long ft_hash_string(const char *str);
//int ft_levenshtein(const char *s1, const char *s2);
//char *ft_base64_encode(const unsigned char *data, size_t input_length, 
//size_t *output_length);
//unsigned char *ft_base64_decode(const char *data, size_t input_length, 
//size_t *output_length);

// BINARY_TREE
//typedef struct s_btree {
//    void *content;
//    struct s_btree *left;
//    struct s_btree *right;
//} t_btree;
//void ft_btree_insert(t_btree **root, void *item, int (*cmpf)(void *, void *));
//t_btree *ft_btree_search(t_btree *root, void *data_ref, 
//int (*cmpf)(void *, void *));
//void ft_btree_inorder(t_btree *root, void (*applyf)(void *));
//void ft_btree_remove(t_btree **root, void *data_ref, int (*cmpf)(void *,/
//void *), void (*freef)(void *));

// HASH_TABLE
//typedef struct s_hashnode {
//    char *key;
//    void *value;
//    struct s_hashnode *next;
//} t_hashnode;
//typedef struct s_hashtable {
//    t_hashnode **buckets;
//    size_t size;
//} t_hashtable;
//unsigned int ft_hash(char *key, size_t size);
//void ft_hashtable_set(t_hashtable *ht, char *key, void *value);
//void *ft_hashtable_get(t_hashtable *ht, char *key);
//void ft_hashtable_remove(t_hashtable *ht, char *key);

// STACK
//typedef struct s_stacknode {
//    void *content;
//    struct s_stacknode *next;
//} t_stacknode;
//typedef struct s_stack {
//    t_stacknode *top;
//} t_stack;
//t_stack *ft_stack_create(void);
//void ft_stack_push(t_stack *stack, void *content);
//void *ft_stack_pop(t_stack *stack);
//void *ft_stack_peek(const t_stack *stack);
//int ft_stack_size(t_stack *stack);

// QUEUE
//typedef struct s_queuenode {
//    void *content;
//    struct s_queuenode *next;
//} t_queuenode;
//typedef struct s_queue {
//    t_queuenode *front;
//    t_queuenode *rear;
//} t_queue;
//t_queue *ft_queue_create(void);
//void ft_enqueue(t_queue *queue, void *content);
//void *ft_dequeue(t_queue *queue);
//void *ft_queue_peek(const t_queue *queue);

// GRAPH
//typedef struct s_graphnode {
//    int id;
//    void *content;
//    struct s_graphnode *next;
//} t_graphnode;
//typedef struct s_edge {
//    int start;
//    int end;
//    int weight;
//    struct s_edge *next;
//} t_edge;
//typedef struct s_graph {
//    t_graphnode **nodes;
//    t_edge **edges;
//    int num_nodes;
//    int num_edges;
//} t_graph;
//t_graph *ft_graph_create(int num_nodes);
//void ft_graph_add_node(t_graph *graph, int node_id, void *content);
//void ft_graph_remove_node(t_graph *graph, int node_id);
//void ft_graph_add_edge(t_graph *graph, int start, int end, int weight);
//void ft_graph_remove_edge(t_graph *graph, int start, int end);
//bool ft_graph_dfs(t_graph *graph, int start_node_id, int target_node_id);
//void ft_graph_bfs(t_graph *graph, int start_node_id, void (*visit_func)(int
// node_id, void *content));
#endif