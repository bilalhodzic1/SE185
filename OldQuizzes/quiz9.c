//
//  quiz9.c
//  
//
//  Created by Bilal Hodzic on 11/15/21.
//

#include <stdio.h>
int main(){
    FILE* studentInfo = NULL;
    studentInfo = fopen("student_data.txt", "w");
    double score;
    char name[50];
    char student1Name[50], student2Name[50], student3Name[50], student4Name[50];
    double fileScore;
    double student1Avg, student2Avg, student3Avg, student4Avg;
    for (int i = 0; i < 4; i++){
        printf("Enter student %d's name: \n" , i+1);
        scanf(" %s", name);
        fprintf(studentInfo, "%s\n" , name);
        for (int j = 0; j<3; j++){
            printf("Enter score %d:\n", j+1);
            scanf(" %lf", &score);
            fprintf(studentInfo, "%lf\n", score);
        }
    }
    fclose(studentInfo);
    studentInfo = fopen("student_data.txt", "r");
    fscanf(studentInfo, " %s", student1Name);
    printf("%s's exam scores ", student1Name);
    for(int i = 0; i < 3; i++){
        fscanf(studentInfo, " %lf", &fileScore);
        printf("%lf, ", fileScore);
        student1Avg += fileScore;
    }
    printf("\n");
    fscanf(studentInfo, " %s", student2Name);
    printf("%s's exam scores ", student2Name);
    for(int i = 0; i < 3; i++){
        fscanf(studentInfo, " %lf", &fileScore);
        printf("%lf, ", fileScore);
        student2Avg += fileScore;
    }
    printf("\n");
    fscanf(studentInfo, " %s", student3Name);
    printf("%s's exam scores ", student3Name);
    for(int i = 0; i < 3; i++){
        fscanf(studentInfo, " %lf", &fileScore);
        printf("%lf, ", fileScore);
        student3Avg += fileScore;
    }
    printf("\n");
    fscanf(studentInfo, " %s", student4Name);
    printf("%s's exam scores ", student4Name);
    for(int i = 0; i < 3; i++){
        fscanf(studentInfo, " %lf", &fileScore);
        printf("%lf, ", fileScore);
        student4Avg += fileScore;
    }
    printf("\n");
    printf("%s's exam score average was %.2lf\n" ,student1Name, student1Avg / 3.0);
    printf("%s's exam score average was %.2lf\n" ,student2Name, student2Avg / 3.0);
    printf("%s's exam score average was %.2lf\n" ,student3Name, student3Avg / 3.0);
    printf("%s's exam score average was %.2lf\n" ,student4Name, student4Avg / 3.0);
    fclose(studentInfo);
    return 0;
}
