//
//  Quiz10Question2.c
//  
//
//  Created by Bilal Hodzic on 11/29/21.
//

#include <stdio.h>
#include <stdlib.h>
void calcPower(int* origNum, int* power);
int main(){
    int origNum;
    int power = 0;
    printf("Enter number to power: ");
    scanf("%d, %d" , &origNum, &power);
    printf("%d\n", power);
    calcPower(&origNum, &power);
    printf("%d\n" , origNum);
    return 0;
}
void calcPower(int* origNum, int* power){
    if (power == 0){
        
    }else{
        if (*power == 1){
            --*power;
        }
        else{
            *origNum = *origNum = *origNum;
            --*power;
        }
        calcPower(origNum, power);
    }
}
