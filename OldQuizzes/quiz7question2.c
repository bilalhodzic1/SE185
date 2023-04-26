//
//  quiz7question2.c
//  
//
//  Created by Bilal Hodzic on 10/26/21.
//

#include <stdio.h>
int main(){
    int a = 15;
    int *ptrA;
    ptrA = &a;
    a /= 3;
    *ptrA = a;
    ++*ptrA;
    a = *ptrA;
    if (*ptrA == a){
        printf("ptrA = %d\n" , *ptrA);
        printf("a = %d\n" , a);
        printf("Therefore, ptrA = a = %d\n" , *ptrA);
    }
    return 0;
}
