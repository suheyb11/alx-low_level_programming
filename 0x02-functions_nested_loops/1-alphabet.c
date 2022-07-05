#include <stdlib.h>
#include <stdio.h>
void print_alphabet(void)
{
	for(int i='a';i<='z';i++)
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
