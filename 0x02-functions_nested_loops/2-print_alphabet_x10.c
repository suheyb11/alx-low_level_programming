#include <stdlib.h>
#include <stdio.h>
void print_alphabet_x10(void)
{
	int i;
	int co=0;
	while(co<10)
	{
		for(i='a';i<'z';i++)
		{
		putchar(i);
		}
	        co++;
		putchar('\n');
	}
	
}
int main(void)
{
	    print_alphabet_x10();
	        return (0);
}
