/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julescamuzet <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:08:15 by julescamuzet      #+#    #+#             */
/*   Updated: 2025/11/14 19:01:55 by julescamuzet     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "libft.h"
# include <string.h>

void	run_all_tests(void);

int		test_ft_isalpha(void);
int		test_ft_isdigit(void);
int		test_ft_isalnum(void);
int		test_ft_isascii(void);
int		test_ft_isprint(void);
int		test_ft_strlen(void);
int		test_ft_memset(void);
int		test_ft_bzero(void);
int		test_ft_memcpy(void);
int		test_ft_memmove(void);
int		test_ft_strlcpy(void);
int		test_ft_strlcat(void);
int		test_ft_toupper(void);
int		test_ft_tolower(void);
int		test_ft_strchr(void);
int		test_ft_strrchr(void);
int		test_ft_strncmp(void);
int		test_ft_memchr(void);
int		test_ft_memcmp(void);
int		test_ft_strnstr(void);
int		test_ft_atoi(void);
int		test_ft_calloc(void);
int		test_ft_strdup(void);
int		test_ft_substr(void);
int		test_ft_strjoin(void);
int		test_ft_strtrim(void);
int		test_ft_split(void);
int		test_ft_itoa(void);
int		test_ft_strmapi(void);
int		test_ft_striteri(void);
int		test_ft_putint_fd(void);
int     test_ft_putchar_fd(void);
int		test_ft_putstr_fd(void);
int		test_ft_putendl_fd(void);
int		test_ft_putnbr_fd(void);

int		test_ft_lstnew(void);
int		test_ft_lstadd_front(void);
int		test_ft_lstadd_back(void);
int		test_ft_lstsize(void);
int		test_ft_lstlast(void);
int		test_ft_lstdelone(void);
int		test_ft_lstclear(void);
int		test_ft_lstiter(void);
int		test_ft_lstmap(void);

#endif
