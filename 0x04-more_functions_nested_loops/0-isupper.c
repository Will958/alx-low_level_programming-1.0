#include "main.h"
/**
 * _isupper - tests whether a character in the  alphabet is uppercase.
 * @c: character to be checked.
 * Return: 1 if the character is uppercase.
 * 0 if the character is lowercase.
 */
char _isupper(char c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
