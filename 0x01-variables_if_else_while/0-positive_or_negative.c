#include <stdlib.h>
#include <stdio.h>

#include <time.h>

/* more headers goes there */
	/**
	 *
	 * 	 * This is the preferred style for multi-line
	 *
	 * 	 	 * comments in C source code.
	 *
	 * 	 	 	 * Please use it consistently.
	 *
	 * 	 	 	 	 *
	 *
	 * 	 	 	 	 	 * Description:  A column of asterisks on the left side,
	 *
	 * 	 	 	 	 	 	 * with beginning and ending al
*/


/* betty style doc for function main goes there */

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	       	printf("%d is negative\n ",n);
	}
	else if ( n > 0)
	{
		printf("%d is positive \n",n);
	}
	else if ( n == 0 )
	{
		printf("%d is zero \n",n);
	}
	
	return (0);
}
