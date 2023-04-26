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

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    int integer_result;
    double decimal_result;

    integer_result = 77 / 5;
	// change format specificer to int
    printf("The value of 77/5 is %d, using integer math.\n", integer_result);

    integer_result = 2 + 3;
	//forgot to include variable to go with format specificer
    printf("The value of 2+3 is %d.\n" , 2+3);

    decimal_result = 1.0 / 22.0;
	// wrong format specificer change to double format specifier
    printf("The value 1.0/22.0 is %lf.\n", decimal_result);

    return 0;
}
