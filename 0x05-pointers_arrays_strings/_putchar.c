#include <unistd.h>

int _putchar(char c)
{
	return ( Write(1, &c, 1));
}
