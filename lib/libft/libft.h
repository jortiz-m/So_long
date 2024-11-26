/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:28:33 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/11/26 11:03:10 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdbool.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_read(int fd, char *rest);
char	*ft_createline(char *buffer);
char	*ft_createrest(char *buffer);

char	**create_matrix(int n);
void	free_matrix(char **matrix);
int		matrixlen(char **matrix);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isalpha(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isdigit(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isalnum(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isascii(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_isprint(int c);
/**
 * @brief 
 * 
 * @param str 
 * @return int 
 */
size_t	ft_strlen(const char *str);
/**
 * @brief 
 * 
 * @param str 
 * @param c 
 * @param len 
 */
void	*ft_memset(void *str, int c, size_t len);
/**
 * @brief 
 * 
 * @param s 
 * @param n 
 */
void	ft_bzero(void *s, size_t n);
/**
 * @brief
 * 
 * @param dst 
 * @param src 
 * @param n 
 * @return void* 
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);
/**
 * @brief 
 * 
 * @param dst 
 * @param src 
 * @param len 
 * @return void* 
 */
void	*ft_memmove(void *dst, const void *src, size_t len);
/**
 * @brief 
 * 
 * @param dst 
 * @param src 
 * @param dstsize 
 * @return size_t 
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
/**
 * @brief 
 * 
 * @param dst 
 * @param src 
 * @param n 
 * @return size_t 
 */
size_t	ft_strlcat(char *dst, const char *src, size_t n);
/**
 * @brief
 * 
 * @param c 
 * @return int 
 */
int		ft_toupper(int c);
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int		ft_tolower(int c);
/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strchr(const char *s, int c);
/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief 
 * 
 * @param str 
 * @param c 
 * @param n 
 * @return void* 
 */
void	*ft_memchr(const void *str, int c, size_t n);
/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * @brief 
 * 
 * @param haystack 
 * @param needle 
 * @param n 
 * @return char* 
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
/**
 * @brief 
 * 
 * @param str 
 * @return int 
 */
int		ft_atoi(const char *str);
/**
 * @brief 
 * 
 * @param count 
 * @param size 
 * @return void* 
 */
void	*ft_calloc(size_t count, size_t size);
/**
 * @brief 
 * 
 * @param s1 
 * @return char* 
 */
char	*ft_strdup(const char *s1);
/**
 * @brief 
 * 
 * @param s 
 * @param start 
 * @param len 
 * @return char* 
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @return char* 
 */
char	*ft_strjoin(char *s1, const char *s2);
/**
 * @brief 
 * 
 * @param s1 
 * @param set 
 * @return char* 
 */
char	*ft_strtrim(char const *s1, char const *set);
/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char** 
 */
char	**ft_split(char const *s, char c);
/**
 * @brief 
 * 
 * @param n 
 * @return char* 
 */
char	*ft_itoa(int n);
/**
 * @brief 
 * 
 * @param s 
 * @param f 
 * @return char* 
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * @brief 
 * 
 * @param c 
 * @param fd 
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/**
 * @brief 
 * 
 * @param c 
 * @param fd 
 */
void	ft_putchar_fd(char c, int fd);
/**
 * @brief 
 * 
 * @param s 
 * @param fd 
 */
void	ft_putstr_fd(char *s, int fd);
/**
 * @brief 
 * 
 * @param s 
 * @param fd 
 */
void	ft_putendl_fd(char *s, int fd);
/**
 * @brief 
 * 
 * @param n 
 * @param fd 
 */
void	ft_putnbr_fd(int n, int fd);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
/**
 * @brief 
 * 
 * @param content 
 * @return t_list* 
 */
t_list	*ft_lstnew(void *content);
/**
 * @brief 
 * 
 * @param lst 
 * @param new 
 */
void	ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @brief 
 * 
 * @param lst 
 * @return int 
 */
int		ft_lstsize(t_list *lst);
/**
 * @brief 
 * 
 * @param lst 
 * @return t_list* 
 */
t_list	*ft_lstlast(t_list *lst);
/**
 * @brief 
 * 
 * @param lst 
 * @param new 
 */
void	ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @brief 
 * 
 * @param lst 
 * @param del 
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/**
 * @brief 
 * 
 * @param lst 
 * @param del 
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));
/**
 * @brief 
 * 
 * @param lst 
 * @param f 
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/**
 * @brief 
 * 
 * @param lst 
 * @param f 
 * @param del 
 * @return t_list* 
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif