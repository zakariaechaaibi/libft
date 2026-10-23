# Libft

A custom C standard library implementation developed as part of the 1337 (42 Network) curriculum.

## Overview

The goal of this project is to re-create essential libc functions and standard utility routines from scratch. The resulting static library (`libft.a`) serves as a core dependency for subsequent 42 cursus projects.

## Included Functions

### Libc Functions

* `ft_isalpha` - Check if character is alphabetic
* `ft_isdigit` - Check if character is a digit
* `ft_isalnum` - Check if character is alphanumeric
* `ft_isascii` - Check if character fits in the ASCII table
* `ft_isprint` - Check if character is printable
* `ft_strlen` - Calculate the length of a string
* `ft_memset` - Fill memory with a constant byte
* `ft_bzero` - Zero a byte string
* `ft_memcpy` - Copy memory area
* `ft_memmove` - Copy memory area with overlap protection
* `ft_strlcpy` - Copy string to a specific size
* `ft_strlcat` - Concatenate string to a specific size
* `ft_toupper` - Convert character to uppercase
* `ft_tolower` - Convert character to lowercase
* `ft_strchr` - Locate character in string (first occurrence)
* `ft_strrchr` - Locate character in string (last occurrence)
* `ft_strncmp` - Compare two strings up to n characters
* `ft_memchr` - Scan memory for a character
* `ft_memcmp` - Compare memory areas
* `ft_strnstr` - Locate a substring within a string length
* `ft_atoi` - Convert string to integer
* `ft_calloc` - Allocate and clear memory
* `ft_strdup` - Duplicate a string

### Additional Functions

* `ft_substr` - Extract substring from string
* `ft_strjoin` - Concatenate two strings into a new string
* `ft_strtrim` - Trim characters from beginning and end of string
* `ft_split` - Split string into an array of substrings using a delimiter
* `ft_itoa` - Convert integer to string
* `ft_strmapi` - Create new string by applying function to each character
* `ft_striteri` - Apply function to each character of string by reference
* `ft_putchar_fd` - Output a character to a file descriptor
* `ft_putstr_fd` - Output a string to a file descriptor
* `ft_putendl_fd` - Output a string followed by a newline to a file descriptor
* `ft_putnbr_fd` - Output an integer to a file descriptor

### Bonus Functions (Linked Lists)

* `ft_lstnew` - Create a new list node
* `ft_lstadd_front` - Add node at the beginning of list
* `ft_lstsize` - Count elements of a list
* `ft_lstlast` - Return the last node of list
* `ft_lstadd_back` - Add node at the end of list
* `ft_lstdelone` - Free node content and node itself
* `ft_lstclear` - Delete and free entire list
* `ft_lstiter` - Apply function to all nodes in list
* `ft_lstmap` - Apply function to list and generate new list

## Compilation

Build the library using the Makefile:

```bash
make        # Compile mandatory functions
make bonus  # Compile mandatory and bonus functions
make clean  # Delete object files
make fclean # Delete object files and libft.a
make re     # Recompile the library
```

This generates `libft.a` in the root directory.

## Usage

Include the header in your C code:

```c
#include "libft.h"
```

Compile your program linking `libft.a`:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```