# libmy.a - A Static Library for Common C Functions

This repository contains a custom static library called `libmy.a`, which includes commonly used C functions. The library is meant to be used in various C projects requiring these functions.

## Functions Included

The following functions are included in the `libmy.a` static library:

- int _putchar(char c);
- int _islower(int c);
- int _isalpha(int c);
- int _abs(int n);
- int _isupper(int c);
- int _isdigit(int c);
- int _strlen(char *s);
- void _puts(char *s);
- char *_strcpy(char *dest, char *src);
- int _atoi(char *s);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- char *_strncpy(char *dest, char *src, int n);
- int _strcmp(char *s1, char *s2);
- char *_memset(char *s, char b, unsigned int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strchr(char *s, char c);
- unsigned int _strspn(char *s, char *accept);
- char *_strpbrk(char *s, char *accept);
- char *_strstr(char *haystack, char *needle);

## Usage

To use the `libmy.a` static library in your C projects, follow these steps:

1. Clone this repository or download the `libmy.a` file.
2. Include the `main.h` header file in your source files using the functions.
3. When compiling your C project, link the `libmy.a` library. For example:

```bash
gcc main.c -L/path/to/libmy.a -lmy -o program_name

