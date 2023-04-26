//
//  Quiz6.c
//  
//
//  Created by Bilal Hodzic and Tristan Sayasit on 10/18/21.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int letterCount(char* p);
int main() {
    
    char first_name[50], last_name[50];
    char *full_name = NULL;
    int num_letters = 0;
    
    printf("What's your first name?\n");
    scanf("%s", first_name);
    printf("What's your last name?\n");
    scanf("%s", last_name);
    
    full_name = (char*)malloc((strlen(first_name) + strlen(last_name) + 1) * sizeof(char));
    
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    printf("First name: %s\n", first_name);
    printf("Last name: %s\n", last_name);
    printf("Full name: %s\n", full_name);
    num_letters = letterCount(full_name);
    printf("Num Letters: %d\n", num_letters);
    
    free(full_name);
}
int letterCount(char* p){
    int num_letters = 0;
    while(*p != '\0') {
        if (*p == ' ' || *p == '\0') {
            
        }else {
            num_letters++;
        }
        *p++;
    }
    return num_letters;
}
