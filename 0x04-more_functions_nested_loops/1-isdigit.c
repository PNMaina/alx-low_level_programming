#include "main.h"

#include <stdio.h>



/**
 *
 * _ isdigit - check if number are 0 - 9
 * @c: char to check
 * Return: 0 or 1
 */

int _isdigit(int c)
{

	    char c;



	        c = '0';

		    printf("%c: %d\n", c, _isdigit(c));

		        c = 'a';

			    printf("%c: %d\n", c, _isdigit(c));

			        return (0);

} 
