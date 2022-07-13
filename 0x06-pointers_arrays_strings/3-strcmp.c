#include "main.h"
#include <string.h>

/**
 * _strcmp - > is funtion that comp
 * @s1: is one prm
 * @s2: is seconf prm
 * Return: is voud not do
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
    
      /* ----------------------------------
   	 '\0' marks the end of the string !
   	 ---------------------------------- */
      while ( s2[i] != '\0' && s1[i] != 0 )
      {
   	 if ( s1[i] != s2[i] )          // If s1 and s2 differ in char i
   	    break;                      // exit while loop !
    
   	 i++;
      }
    
      /* ----------------------------------------------------------------
   	 If we reach here, then:
           1. one or both of s1 and s2 are exhausted !
	   2. character position i in s1 and s2 are different
   	 ---------------------------------------------------------------- */
    
      return s1[i] - s2[i]; 
}
