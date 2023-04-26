#include <stdio.h>
#include <math.h>
int main(){
	int int1 = 6427 +1725;
	printf("6427 + 1725 = %d\n" , int1);
	int int2 = (6971 * 3925) - 95;
	printf("(6971 * 3925) - 95 = %d\n" , int2);
	double double1 = 79+12/5;
	printf("79 + 12 / 5 = %.2lf\n" , double1);
	double double2 = 3640.0/107.9;
	printf("3640.0 / 107.9 = %.2lf\n" , double2);
	int int3 = (22/3) * 3;
	printf("(22 / 3) * 3 = %d\n" , int3);
	int int4 = 22 / (3*3);
	printf("22 / (3*3) = %d\n" , int3);
	double double3 = 22/ (3*3);
	printf("22 / (3 * 3) = %.2lf\n" , double3);
	double double4 = 22 / 3 *3;
	printf("22 / 3 * 3 = %.2lf\n" , double4);
	double double5 = (22.0/3) * 3.0;
	printf("(22.0 / 3) * 3.0 = %.2lf\n" , double5);
	int int5 = 22.0 / (3 * 3.0);
	printf("22.0 / (3 * 3.0) = %d\n" , int5);
	double double6 = 22.0/3.0*3.0;
	printf("22.0 / 3.0 * 3.0 = %.2lf\n" , double6);
	
	double radius = 23.567 / 2 / M_PI;
	double area = M_PI * pow(radius , 2);
	printf("A circle with a circumference of 23.567 would have an area of %.3lf\n" , area);
	
	double meters = 14;
	double feet = meters / .3048;
	printf("14 meters  = %.2lf feet\n" , feet);
	
	double farenheit = 76;
	double celcius = (farenheit - 32) / 1.8;
	printf("76 farenheit = %.2lf celcius\n" , celcius);
	
	return 0;
}