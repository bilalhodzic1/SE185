/*----------------------------------------------------------------------------
-		        SE 185: Lab 02 - Solving Simple Problems in C	    	 	 -
-	Name: Bilal Hodzic																	 -
- 	Section:		4														 -
-	NetID:			544397870													     -
-	Date:				9/8/2021													 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    /* Put your code after this line */
    printf("Bilal Hodzic\n");
    printf("SE185\n");
    printf("9/8/2021\n");
	int x, y, z;
	printf("Enter a width: ");
	scanf("%d", &x);
	printf("Enter a height: ");
	scanf("%d", &y);
	printf("Enter a depth: ");
	scanf("%d" , &z);
	printf("A %d by %d by %d rectangular prism's volume is %d\n", x , y , z, x*y*z);
    return 0;
}
