//
//  Quiz10Question1.c
//  
//
//  Created by Bilal Hodzic on 11/29/21.
//

#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE* numList = fopen("numbers.txt", "w");
    int evenNums[8];
    int curr;
    int count = 0;
    for (int i = 0; i < 8; i++){
        scanf(" %d" , &curr);
        fprintf(numList , "%d\n" , curr);
    }
    fclose(numList);
    numList = fopen("numbers.txt" , "r");
    for (int i = 0; i < 8; i++){
        fscanf(numList , " %d" , &curr);
        if (curr % 2 == 0){
            evenNums[count] = curr;
            count++;
        }
    }
    for(int i = 0; i < count; i++){
        printf("%d " , evenNums[i]);
    }
    printf("\n");
    fclose(numList);
    return 0;
}
