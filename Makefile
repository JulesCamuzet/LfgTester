CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = tester
LIBNAME = ft
UTILSDIR = srcs/utils
TESTSDIR = srcs/tests
INCLUDES = includes/

SRCS = srcs/main.c \
	$(UTILSDIR)/display.c \
	$(TESTSDIR)/all.c \
	$(TESTSDIR)/ft_isalpha.c \
	$(TESTSDIR)/ft_isdigit.c \
	$(TESTSDIR)/ft_isalnum.c \
	$(TESTSDIR)/ft_isascii.c \
	$(TESTSDIR)/ft_isprint.c \
	$(TESTSDIR)/ft_strlen.c \
	$(TESTSDIR)/ft_memset.c \
	$(TESTSDIR)/ft_bzero.c \
	$(TESTSDIR)/ft_memcpy.c \
	$(TESTSDIR)/ft_memmove.c \
	$(TESTSDIR)/ft_strlcpy.c \
	$(TESTSDIR)/ft_strlcat.c \
	$(TESTSDIR)/ft_toupper.c \
	$(TESTSDIR)/ft_tolower.c \
	$(TESTSDIR)/ft_strchr.c \
	$(TESTSDIR)/ft_strrchr.c \
	$(TESTSDIR)/ft_strncmp.c \
	$(TESTSDIR)/ft_memchr.c \
	$(TESTSDIR)/ft_memcmp.c \
	$(TESTSDIR)/ft_strnstr.c \
	$(TESTSDIR)/ft_atoi.c \
	$(TESTSDIR)/ft_calloc.c \
	$(TESTSDIR)/ft_strdup.c \
	$(TESTSDIR)/ft_substr.c \
	$(TESTSDIR)/ft_strjoin.c \
	$(TESTSDIR)/ft_strtrim.c \
	$(TESTSDIR)/ft_split.c \
	$(TESTSDIR)/ft_itoa.c \
	$(TESTSDIR)/ft_strmapi.c \
	$(TESTSDIR)/ft_striteri.c \
	$(TESTSDIR)/ft_putchar_fd.c \
	$(TESTSDIR)/ft_putstr_fd.c \
	$(TESTSDIR)/ft_putendl_fd.c \
	$(TESTSDIR)/ft_putnbr_fd.c \
	$(TESTSDIR)/ft_lstnew.c \
	$(TESTSDIR)/ft_lstadd_front.c \
	$(TESTSDIR)/ft_lstadd_back.c \
	$(TESTSDIR)/ft_lstsize.c \
	$(TESTSDIR)/ft_lstlast.c \
	$(TESTSDIR)/ft_lstdelone.c \
	$(TESTSDIR)/ft_lstclear.c \
	$(TESTSDIR)/ft_lstiter.c \
	$(TESTSDIR)/ft_lstmap.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -Llibs -l$(LIBNAME) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
