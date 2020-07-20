/*
 * Matthew Reid, July 20, 2020
 * Solves coordinate puzzle from https://www.geocaching.com/geocache/GC6J4RP
*/

#include <stdio.h>
 
void main (void)
{
	/* initialize integers for each digit */
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;
	int j = 0;
	
	/* initialize integers for x and temp values */
	int x = 47; /* Find way to change this to 0 (less cheaty)?*/
	int square = 0;
	int cube = 0;
	
	/* While x is less than the largest possible number of 9*/
	while (x<100) /* Find way to change this to checking for a five digit square or seven digit cube (less cheaty)?*/
	{
		/* Squares current value of x and sets each digit to it's letter */
		square = x*x;
		d = square % 10;
		square /= 10;
		c = square % 10;
		square /= 10;
		b = square % 10;
		square /= 10;
		a = square % 10;
		
		/* If every letter from square holds a different single digit (0-9)*/
		if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			/* Cubes the current value of x and sets each digit to it's letter */
			cube = x*x*x;
			j = cube % 10;
			cube /= 10;
			i = cube % 10;
			cube /= 10;
			h = cube % 10;
			cube /= 10;
			g = cube % 10;
			cube /= 10;
			f = cube % 10;
			cube /= 10;
			e = cube % 10;
			cube /= 10;
			
			/* If every letter from square and cube holds a different single digit (0-9)*/
			if (a!=j && a!=i && a!=h && a!=g && a!=f && a!=e && b!=j 
			&& b!=i && b!=h && b!=g && b!=f && b!=e && c!=j && c!=i 
			&& c!=h && c!=g && c!=f && c!=e && d!=j && d!=i && d!=h 
			&& d!=g && d!=f && d!=e && j!=i && j!=h && j!=g && j!=f 
			&& j!=e && i!=h && i!=g && i!=f && i!=e && h!=g && h!=f 
			&& h!=e && g!=f && g!=e && f!=e)
			{
				/* Print succesful result*/
				printf("For x = %d, \n a = %d \n b = %d \n c = %d \n d = %d \n e = %d \n f = %d \n g = %d \n h = %d \n i = %d \n j = %d \n",
				x,a,b,c,d,e,f,g,h,i,j);
			}
		}
		
		x++;
	}
}

