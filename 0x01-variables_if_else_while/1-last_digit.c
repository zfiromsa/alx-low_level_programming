#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
        int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if(n<0)
	{
	lastDigit=(lastDigit*(-1));
            if (lastDigit > 5)
	    {
	        printf("Last digit of %d is %d and is greater than 5 \n", n,lastDigit );
			return (0);
	    }
    	    else if (lastDigit == 0)
	    {
                printf("last digitn of %d is %d and is 0 \n ", n , lastDigit);
				return (0);
	    }
	    else
    	    {
	        printf("Last digit of %d is %d and is zero \n", n ,lastDigit);
			return (0);
	    }
	}
     else
	 {
		 if (lastDigit < 5)
	    {
	        printf("Last digit of %d is %d and is greater than 5 \n", n,lastDigit );
			return (0);
	    }
    	    else if (lastDigit == 0)
	    {
                printf("last digitn of %d is %d and is 0 \n ", n , lastDigit);
				return (0);
	    }
	    else
    	{
	        printf("Last digit of %d is %d and is zero \n", n ,lastDigit);
			return (0);
	    }
	 }
	 return (0);
}
