#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_isalpha(int c); //done
int				ft_isdigit(int c); //done
int				ft_isalnum(int c); //done
int				ft_isascii(int c); //done
int				ft_isprint(int c); //done
int				ft_strlen(const char *str); //done
void			*ft_memset(void *s, int c, size_t n); //done
void			ft_bzero(void *s, size_t n); //done
void			*ft_memcpy(void *dst, const void *src, size_t n); //done
void			*ft_memmove(void *dst, const void *src, size_t len); //done
size_t			ft_strlcpy(char *dest, char *src, size_t size); 
size_t			ft_strlcat(char *dest, char *src, size_t size);
int				ft_toupper(int c); //done
int				ft_tolower(int c); //done
char			*ft_strchr(const char *s, int c); //done
char			*ft_strrchr(const char *s, int c); //done
int				ft_strncmp(const char *s1, const char *s2, size_t n); //done?
void			*ft_memchr(const void *str, int c, size_t n); //done
int 			ft_memcmp(const void *str1, const void *str2, size_t n); //done
char 			*ft_strnstr(const char *big, const char *little, size_t len); //done
int				ft_atoi(char *str); //done
void			*ft_calloc(size_t num, size_t size); //done
char 			*ft_strdup(const char *string); //done
char			*ft_substr(char const *s, unsigned int start, size_t len); //done
char			*ft_strjoin(char const *s1, char const *s2); //done
char			*ft_strtrim(char const *s1, char const *set); //done
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n); //done
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char)); //done
void			ft_striteri(char *s, void (*f)(unsigned int, char *)); //done
void			ft_putchar_fd(char c, int fd); 
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
// t_list			*ft_lstnew(void *content);
// void			ft_lstadd_front(t_list **lst, t_list *new);
// int				ft_lstsize(t_list *lst);
// t_list			*ft_lstlast(t_list *lst);
// void			ft_lstadd_back(t_list **lst, t_list *new);
// void			ft_lstdelone(t_list *lst, void (*del)(void *));
// void			ft_lstclear(t_list **lst, void (*del)(void *));
// void			ft_lstiter(t_list *lst, void (*f)(void *));
// t_list			*ft_lstmap(t_list *lst,
// 					void *(*f)(void *), void (*del)(void *));
#endif