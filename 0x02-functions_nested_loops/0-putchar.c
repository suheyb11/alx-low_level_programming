#include "main.h"
int main(void)
{
	char sh[]="_putchar";
	int i=0;
	while(sh[i] != '\0')
	{
	putchar( sh[i]);
	i++;
	}
	putchar(10);
	return (0);
}
