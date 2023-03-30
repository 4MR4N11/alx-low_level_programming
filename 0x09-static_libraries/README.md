# 0x09. C - Static libraries

This project is about creating static libraries.

## Files

- [libmy.a](./libmy.a): Static library containing all the functions listed below:

	- [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.
	- [0-isupper.c](./0-isupper.c): C function that checks for uppercase character.
	- [0-memset.c](./0-memset.c): C function that fills memory with a constant byte.
	- [0-strcat.c](./0-strcat.c): C function that concatenates two strings.
	- [1-isdigit.c](./1-isdigit.c): C function that checks for a digit (`0` through `9`).
	- [1-memcpy.c](./1-memcpy.c): C function that copies memory area.
	- [1-strncat.c](./1-strncat.c): C function that concatenates two strings.
	- [2-strchr.c](./2-strchr.c): C function that locates a character in a string.
	- [2-strlen.c](./2-strlen.c): C function that returns the length of a string.
	- [3-islower.c](./3-islower.c): C function that checks for lowercase character.
	- [3-puts.c](./3-puts.c): C function that prints a string, followed by a new line, to `stdout`.
	- [3-strspn.c](./3-strspn.c): C function that gets the length of a prefix substring.
	- [4-isalpha.c](./4-isalpha.c): C function that checks for an alphabetic character.
	- [4-strpbrk.c](./4-strpbrk.c): C function that searches a string for any of a set of bytes.
	- [5-strstr.c](./5-strstr.c): C function that locates a substring.
	- [6-abs.c](./6-abs.c): C function that computes the absolute value of an integer.
	- [9-strcpy.c](./9-strcpy.c): C function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
	- [100-atoi.c](./100-atoi.c): C function that converts a string to an integer.

- [main.h](./main.h): Header file containing all the function prototypes listed above.

- [create_static_lib.sh](./create_static_lib.sh): Bash script that creates a static library called `liball.a` from all the `.c` files that are in the current directory.

