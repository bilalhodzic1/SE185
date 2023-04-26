//
//  Quiz7Question1.c
//  
//
//  Created by Bilal Hodzic on 10/26/21.
//

#include <stdio.h>
int main(){
    int num = 5;
    int *myPtr = &num;
    printf("Num is stored at %p\n" , &num);
    printf("MyPtr is stoed at %p\n" , &myPtr);
    printf("Num holds the value %d\n" , num);
    printf("myPtr holds the value %p\n" , myPtr);
    printf("myPtr points to the value %d\n" , *myPtr);
    return 0;
}
