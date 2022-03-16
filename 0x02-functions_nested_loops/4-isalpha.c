#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: character being checked
 * Retirn: 1 if c is a letter,lowercaseor uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
