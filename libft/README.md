*This project was created by agomez-a as part of the 42 curriculum.*

## DESCRIPTION

Libft is a library written in C.  
The project is divided into three parts:
1. The  first part recreates basic functions from the C standard library (libc).
2. The second part adds some additional functions.
3. The last part focuses on linked lists.

This project helps reinforce the undestanding of the C languaje, memory management and function reusability.  
It can also serve as a base for future 42 projects.

## INSTRUCTIONS

To use this libft, you first need to clone this repository.  
Once you have cloned it, you need to compile it using:

```make```

This will generate object files (.o) for each .c filr and the static library libft.a.

You can also use the following additional commands:

```make clean   #removes the object files but keeps libft.a```

```make fclean  #removes the object files and libft.a```

```make re      #removes the object files and libft.a, then recompiles everything```

If you want to use this library in another project, you will have to include the file:

```#include "libft.h"```

## RESOURCES

### Documentation and References
- Manual pages (man) for the C standard library functions used in this project.
- Online resources for clarifying concepts.
- Guidance and help from classmates when needed.

### Use of AI
During this project, artificial intelligence was used as a learning aid, mainly for the additional functions and linked lists.
- AI provided explanations about how the functions work and what they do, but **never gave code**.
- Occasionally AI was used to review or suggest corrections, again **without providing code**.
- All exercises and functions were implemented by me. AI served only as a supportive tool, similar to a teacher or tutor.

## LIBRARY DESCRIPTION

The libft library provides a collection of reusable C functions.  
The functions are organized into the following categories:

### Character checks and conversions
Functions used to analyze and convert characters.
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_tolower`
- `ft_toupper`

### String manipulation
Functions for handling and modifying strings.
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strncmp`
- `ft_strchr`
- `ft_strrchr`
- `ft_strnstr`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

### Memory management
Functions for manipulating and managing memory.
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### Conversion functions
Functions used to convert data types.
- `ft_atoi`
- `ft_itoa`

### Output functions
Functions that write characters, strings or numbers to a given file descriptor.
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Linked list functions
Functions for creating and manipulating linked lists.
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstlast`
- `ft_lstsize`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`
