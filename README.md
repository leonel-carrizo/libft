# libft - 42 London

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Unix](https://img.shields.io/badge/Unix-3E4348?style=for-the-badge&logo=linux&logoColor=white)
![Bash](https://img.shields.io/badge/Bash-4EAA25?style=for-the-badge&logo=gnubash&logoColor=fff)
![Libft](https://img.shields.io/badge/Libft-Completed-00BABC?style=for-the-badge)

## Overview
This repository contains **libft**, a custom C library developed as part of the 42 London curriculum. Designed to be used in future 42 projects,
`libft` provides utility functions for string manipulation, memory management, pointers, and more. 
It serves as an introduction to C programming fundamentals and the structure of utility libraries in Linux environments.

## Function Index
Below is a list of the functions included in the `libft` library, divided into mandatory and bonus sections, with links to their source files and brief descriptions.

### Mandatory Functions
- [**ft_isalpha**](https://github.com/leonel-carrizo/libft/blob/main/ft_isalpha.c): Checks if a character is alphabetic.
- [**ft_isdigit**](https://github.com/leonel-carrizo/libft/blob/main/ft_isdigit.c): Checks if a character is a digit.
- [**ft_isalnum**](https://github.com/leonel-carrizo/libft/blob/main/ft_isalnum.c): Checks if a character is alphanumeric.
- [**ft_isascii**](https://github.com/leonel-carrizo/libft/blob/main/ft_isascii.c): Checks if a character is ASCII.
- [**ft_isprint**](https://github.com/leonel-carrizo/libft/blob/main/ft_isprint.c): Checks if a character is printable.
- [**ft_strlen**](https://github.com/leonel-carrizo/libft/blob/main/ft_strlen.c): Calculates the length of a string.
- [**ft_memset**](https://github.com/leonel-carrizo/libft/blob/main/ft_memset.c): Fills a memory block with a specific value.
- [**ft_bzero**](https://github.com/leonel-carrizo/libft/blob/main/ft_bzero.c): Fills a memory block with zeros.
- [**ft_memcpy**](https://github.com/leonel-carrizo/libft/blob/main/ft_memcpy.c): Copies a memory block to another.
- [**ft_memmove**](https://github.com/leonel-carrizo/libft/blob/main/ft_memmove.c): Copies a memory block, handling overlap.
- [**ft_strlcpy**](https://github.com/leonel-carrizo/libft/blob/main/ft_strlcpy.c): Copies a string with a size limit.
- [**ft_strlcat**](https://github.com/leonel-carrizo/libft/blob/main/ft_strlcat.c): Concatenates strings with a size limit.
- [**ft_toupper**](https://github.com/leonel-carrizo/libft/blob/main/ft_toupper.c): Converts a character to uppercase.
- [**ft_tolower**](https://github.com/leonel-carrizo/libft/blob/main/ft_tolower.c): Converts a character to lowercase.
- [**ft_strchr**](https://github.com/leonel-carrizo/libft/blob/main/ft_strchr.c): Finds the first occurrence of a character in a string.
- [**ft_strrchr**](https://github.com/leonel-carrizo/libft/blob/main/ft_strrchr.c): Finds the last occurrence of a character in a string.
- [**ft_strncmp**](https://github.com/leonel-carrizo/libft/blob/main/ft_strncmp.c): Compares a specific number of characters from two strings.
- [**ft_memchr**](https://github.com/leonel-carrizo/libft/blob/main/ft_memchr.c): Searches for a byte in a memory block.
- [**ft_memcmp**](https://github.com/leonel-carrizo/libft/blob/main/ft_memcmp.c): Compares two memory blocks.
- [**ft_strnstr**](https://github.com/leonel-carrizo/libft/blob/main/ft_strnstr.c): Searches for a substring in a string with a size limit.
- [**ft_atoi**](https://github.com/leonel-carrizo/libft/blob/main/ft_atoi.c): Converts a string to an integer.
- [**ft_calloc**](https://github.com/leonel-carrizo/libft/blob/main/ft_calloc.c): Allocates memory and initializes it to zero.
- [**ft_strdup**](https://github.com/leonel-carrizo/libft/blob/main/ft_strdup.c): Duplicates a string using dynamic memory.
- [**ft_substr**](https://github.com/leonel-carrizo/libft/blob/main/ft_substr.c): Extracts a substring from a string.
- [**ft_strjoin**](https://github.com/leonel-carrizo/libft/blob/main/ft_strjoin.c): Concatenates two strings into a new one.
- [**ft_strtrim**](https://github.com/leonel-carrizo/libft/blob/main/ft_strtrim.c): Trims specified characters from the start and end of a string.
- [**ft_split**](https://github.com/leonel-carrizo/libft/blob/main/ft_split.c): Splits a string into an array of substrings.
- [**ft_itoa**](https://github.com/leonel-carrizo/libft/blob/main/ft_itoa.c): Converts an integer to a string.
- [**ft_strmapi**](https://github.com/leonel-carrizo/libft/blob/main/ft_strmapi.c): Applies a function to each character of a string.
- [**ft_striteri**](https://github.com/leonel-carrizo/libft/blob/main/ft_striteri.c): Applies a function to each character of a string with its index.
- [**ft_putchar_fd**](https://github.com/leonel-carrizo/libft/blob/main/ft_putchar_fd.c): Writes a character to a file descriptor.
- [**ft_putstr_fd**](https://github.com/leonel-carrizo/libft/blob/main/ft_putstr_fd.c): Writes a string to a file descriptor.
- [**ft_putendl_fd**](https://github.com/leonel-carrizo/libft/blob/main/ft_putendl_fd.c): Writes a string followed by a newline to a file descriptor.
- [**ft_putnbr_fd**](https://github.com/leonel-carrizo/libft/blob/main/ft_putnbr_fd.c): Writes an integer to a file descriptor.

## Technologies
- **Primary Language**: C
- **Additional Skills**: Unix terminal, Bash scripting (Makefile)
- **Tools**: Git, GCC, Make
- **Environment**: Linux (42 London setup)

## Purpose
This repository showcases my implementation of the `libft` library, demonstrating my understanding of C programming fundamentals, including string manipulation, 
memory management, pointers, and linked lists. It serves as a reusable utility library for 42 London projects and a portfolio for future career opportunities in tech.

## How to Use
1. Clone the repository: `git clone https://github.com/leonel-carrizo/libft.git`
2. Navigate to the repository folder: `cd libft`
3. Compile the library using the Makefile:
   - For mandatory functions: `make`
   - For mandatory + bonus functions: `make bonus`
4. The compilation generates `libft.a`, which can be linked to other C projects using GCC, e.g., `gcc your_program.c -L. -lft -o your_program`
5. Include the header file in your code: `#include "libft.h"`

**Note**: Ensure you are in a Linux environment with GCC and Make installed. Refer to 42's project guidelines for specific usage.

## Testing
To verify the functionality of the `libft` library, you can use the [libftTester](https://github.com/Tripouille/libftTester) by Tripouille, a comprehensive test suite for the 42 London `libft` project. It checks mandatory and bonus functions, including memory leak detection with Valgrind on Linux.

**How to Use libftTester**:
1. Clone the tester repository: `git clone https://github.com/Tripouille/libftTester.git`
2. Update the `LIBFT_PATH` variable in the `libftTester` Makefile to point to your `libft` directory (e.g., `LIBFT_PATH = /path/to/your/libft`).
3. Run the tests:
   - Mandatory functions: `make m`
   - Bonus functions: `make b`
   - All functions: `make a`
   - Specific function: `make [function_name]` (e.g., `make ft_strlen`)
4. For Linux-based testing with Valgrind, use Docker commands:
   - Mandatory: `make dockerm`
   - Bonus: `make dockerb`
   - All: `make dockera`
   - Specific function: `make docker[function_name]` (e.g., `make dockerft_strlen`)

## Contact
- **GitHub**: [leonel-carrizo](https://github.com/leonel-carrizo)
- Feel free to explore the code and reach out for collaborations or questions!
