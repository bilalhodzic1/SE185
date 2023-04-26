//
//  question1.c
//  
//
//  Created by Bilal Hodzic and jaden steffy on 10/4/21.
//

#include <stdio.h>
int main(){
    double hwGrades[5];
    double exams[3];
    double averages[3];
    for (int i = 0; i < 5; i++){
        printf("Enter your grade (%%) for HW #0%d: " , (i+1));
        scanf("%lf" , &hwGrades[i]);
    }
    for (int i = 0; i < 3; i++){
        printf("Enter your grade (%%) for Exam #0%d: " , (i+1));
        scanf("%lf" , &exams[i]);
    }
    double sumHomeworks;
    double sumExams;
    for (int i = 0; i < 5; i++){
        sumHomeworks += hwGrades[i];
    }
    for(int i = 0; i < 3; i++){
        sumExams += exams[i];
    }
    averages[0] = sumHomeworks / 5;
    averages[1] = sumExams / 3;
    averages[2] = (.4 * averages[0]) + (.6 * averages[1]);
    printf("\nFinal Grade= %.2lf%%\n" , averages[2]);
    return 0;
}
