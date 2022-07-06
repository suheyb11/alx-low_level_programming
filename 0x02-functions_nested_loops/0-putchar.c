#include "main.h"
int main(void)
{
	char sh[]="_putchar";
	int i=0;
	while(sh[i] != '\0')
	{
		_putchar(sh[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
