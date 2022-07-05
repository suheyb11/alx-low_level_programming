#include <stdlib.h>
#include <stdio.h>
#include "main.h"
void print_alphabet(void)
{
	int i;
	for(i='a';i<='z';i++)
	{
	putchar(i);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return(0);
}
