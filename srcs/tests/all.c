/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julescamuzet <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:31:53 by julescamuzet      #+#    #+#             */
/*   Updated: 2025/11/15 00:44:21 by julescamuzet     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "utils.h"

void	run_all_tests(void)
{
	display_result(test_ft_isalpha(), "ft_isalpha");
	display_result(test_ft_isdigit(), "ft_isdigit");
	display_result(test_ft_isalnum(), "ft_isalnum");
	display_result(test_ft_isascii(), "ft_isascii");
	display_result(test_ft_isprint(), "ft_isprint");
	display_result(test_ft_strlen(), "ft_strlen");
	display_result(test_ft_memset(), "ft_memset");
	display_result(test_ft_bzero(), "ft_bzero");
	display_result(test_ft_memcpy(), "ft_memcpy");
	display_result(test_ft_memmove(), "ft_memmove");
	display_result(test_ft_strlcpy(), "ft_strlcpy");
	display_result(test_ft_strlcat(), "ft_strlcat");
	display_result(test_ft_toupper(), "ft_toupper");
	display_result(test_ft_tolower(), "ft_tolower");
	display_result(test_ft_strchr(), "ft_strchr");
	display_result(test_ft_strrchr(), "ft_strrchr");
	display_result(test_ft_strncmp(), "ft_strncmp");
	display_result(test_ft_memchr(), "ft_memchr");
	display_result(test_ft_memcmp(), "ft_memcmp");
	display_result(test_ft_strnstr(), "ft_strnstr");
	display_result(test_ft_atoi(), "ft_atoi");
	display_result(test_ft_calloc(), "ft_calloc");
	display_result(test_ft_strdup(), "ft_strdup");
	display_result(test_ft_substr(), "ft_substr");
	display_result(test_ft_strjoin(), "ft_strjoin");
	display_result(test_ft_strtrim(), "ft_strtrim");
	display_result(test_ft_split(), "ft_split");
	display_result(test_ft_itoa(), "ft_itoa");
	display_result(test_ft_strmapi(), "ft_strmapi");
	display_result(test_ft_striteri(), "ft_striteri");
	display_result(test_ft_putchar_fd(), "ft_putchar_fd");
	display_result(test_ft_putstr_fd(), "ft_putstr_fd");
	display_result(test_ft_putendl_fd(), "ft_putendl_fd");
	display_result(test_ft_putnbr_fd(), "ft_putnbr_fd");
	display_result(test_ft_lstnew(), "ft_lstnew");
	display_result(test_ft_lstadd_front(), "ft_lstadd_front");
	display_result(test_ft_lstadd_back(), "ft_lstadd_back");
	display_result(test_ft_lstdelone(), "ft_lstdelone");
	display_result(test_ft_lstclear(), "ft_lstlstclear");
	display_result(test_ft_lstiter(), "ft_lstiter");
	display_result(test_ft_lstsize(), "ft_lstsize");
	display_result(test_ft_lstmap(), "ft_lstmap");
	display_result(test_ft_lstlast(), "ft_lstlast");
}
