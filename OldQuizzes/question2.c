//
//  question2.c
//  
//
//  Created by Bilal Hodzic and jaden steffy on 10/4/21.
//

#include <stdio.h>
char gradeCalc(double average);
double gradeAverage(double sum);
int main(){
    double studentGrades[2][4];
    printf("Enter assignment grade for students 1 and 2\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            printf("Student-%d Assignment-%d grade: ", (i+1) , (j+1));
            scanf("%lf" , &studentGrades[i][j]);
        }
    }
    double sum1;
    for (int i = 0; i < 4; i++){
        sum1 += studentGrades[0][i];
    }
    double sum2;
    for (int i = 0; i < 4; i++){
        sum2 += studentGrades[1][i];
    }
    printf("Student 1 Avg: %.2lf%%\n", gradeAverage(sum1));
    printf("Student 1 Grade: %c\n", gradeCalc(gradeAverage(sum1)));
    printf("Student 2 Avg: %.2lf%%\n", gradeAverage(sum2));
    printf("Student 2 Grade: %c\n", gradeCalc(gradeAverage(sum2)));


    return 0;
}
double gradeAverage(double sum){
    return sum / 4.0;
}
char gradeCalc(double average){
    if (average >=85){
        return 'A';
    }
    else if (average >=75){
        return 'B';
    }else if(average >=60){
        return 'C';
    }else {
        return 'F';
    }
}
