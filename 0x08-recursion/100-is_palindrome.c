#include "main.h"

int check_palindrome(char *s, int i, int str);
int _find_strlen(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_palindrome(s, 0, _find_strlen(s)));
}

/**
 * _find_strlen - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */

int _find_strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _find_strlen(s + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @str: length of the string
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int i, int str)
{
if (*(s + i) != *(s + str - 1))
return (0);
if (i >= str)
return (1);
return (check_palindrome(s, i + 1, str - 1));
}
