#include  "main.h"
/*
 * print_alphabet_x10
 * return
 */
void print_alphabet_x10(void)
{
	int i;
	int co=0;
	while(co<10)
	{
		for(i='a';i<'z';i++)
		{
			_putchar(i);
		}
		co++;
		_putchar('\n');
	}
	
}
int main(void)
{
	    print_alphabet_x10();
	        return (0);
}
