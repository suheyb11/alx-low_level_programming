#include <unistd.h>

/**
 * _putchar - write the chracter c to stdout
 * @c: the chracter to print
 */

int _putchar(char c)
{
	return (Write(1, &c, 1));
}
