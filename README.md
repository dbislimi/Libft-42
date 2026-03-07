# libft

Reimplementation of the C standard library functions, plus some extras. First 42 project, gets reused as a submodule in most later ones.

## Build

```bash
make        # produces libft.a
make bonus  # includes linked list functions
```

Link:

```bash
cc main.c -L. -lft -o program
```

## What's in it

All functions are prefixed `ft_` and match the behavior of their libc equivalents.

**Character checks:** `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_toupper` `ft_tolower`

**Strings:** `ft_strlen` `ft_strchr` `ft_strrchr` `ft_strdup` `ft_strjoin` `ft_split` `ft_strtrim` `ft_substr` `ft_strlcpy` `ft_strlcat` `ft_strncmp` `ft_strnstr` `ft_striteri` `ft_strmapi`

**Memory:** `ft_memset` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp` `ft_bzero` `ft_calloc`

**Conversion:** `ft_atoi` `ft_itoa`

**Output:** `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`

**Linked lists (bonus):** `ft_lstnew` `ft_lstadd_front` `ft_lstadd_back` `ft_lstsize` `ft_lstlast` `ft_lstclear` `ft_lstdelone` `ft_lstiter` `ft_lstmap`
