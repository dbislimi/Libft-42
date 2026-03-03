# libft

The C standard library reimplemented from scratch. You don't fully understand `strlen` until you've explained to a compiler exactly what it means to find a null byte.

## Quick Start

```bash
make        # produces libft.a
make bonus  # includes linked list functions
```

Link with your project:

```bash
cc main.c -L. -lft -o program
```

```c
#include "libft.h"
```

## How it works

All functions are prefixed `ft_` and behave identically to their libc counterparts — same prototypes, same edge case handling, same return values. The bonus adds functions not in libc: linked list operations and additional string utilities that are useful enough to carry into every project.

The library compiles to `libft.a` and is included as a submodule in subsequent projects (Minishell, ft_irc, pipex, and others).

## Functions

**Character classification**
`ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_toupper` `ft_tolower`

**String operations**
`ft_strlen` `ft_strchr` `ft_strrchr` `ft_strdup` `ft_strjoin` `ft_split` `ft_strtrim` `ft_substr` `ft_strlcpy` `ft_strlcat` `ft_strncmp` `ft_strnstr` `ft_striteri` `ft_strmapi`

**Memory**
`ft_memset` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp` `ft_bzero` `ft_calloc`

**Conversion**
`ft_atoi` `ft_itoa`

**File descriptor output**
`ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`

**Linked lists (bonus)**
`ft_lstnew` `ft_lstadd_front` `ft_lstadd_back` `ft_lstsize` `ft_lstlast` `ft_lstclear` `ft_lstdelone` `ft_lstiter` `ft_lstmap`
