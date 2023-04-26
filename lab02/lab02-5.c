/*----------------------------------------------------------------------------
-		        SE 185: Lab 02 - Solving Simple Problems in C	    	 	 -
-	Name:																	 -
- 	Section:																 -
-	NetID:																     -
-	Date:																	 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>   // Google this header file to learn more! :)

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    double a, b, c;
    printf("Enter a value for a: ");
	scanf("%lf" , &a);
	printf("Enter a value for b: ");
	scanf("%lf" , &b);
	c = sqrt((pow(a , 2) + pow(b , 2)));
	printf("The value for c would be: %.2lf\n" , c);
    return 0;
}
