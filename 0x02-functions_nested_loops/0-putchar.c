#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *sh="_putchar";
	while(*sh)
	{
	putchar(*sh);
	sh++;
	}
	putchar('\n');
	return (0);
}
