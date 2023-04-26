/*----------------------------------------------------------------------------
-		         SE 185: Midterm Project   	               -
- List the names of all team members, their roles, and their participation
1- Bilal - Role: Assisted in entire creation of code  - Participation: 50%
(Use this line to describe your contribution to the project)
2- Tristan - Role: Assisted in entire creation of code  - Participation: 50%
(Use this line to describe your contribution to the project)
3-
4-
5-																                                     -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									                                   -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
/*----------------------------------------------------------------------------
-	                            Functions Prototypes                                   -
-----------------------------------------------------------------------------*/
int quizSelector(int userInt);
double averageScore(int totalPoints, int attempts);
/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/

// Compile with gcc midtermProject.c -o proj

/*----------------------------------------------------------------------------
-								Implementation								                               -
-----------------------------------------------------------------------------*/
int main()
{
    printf("Hello welcome to the quiz taker.\n");
    printf("-----Quiz 1-----\n-----Quiz 2-----\n-----Quiz 3-----\n");
    char yesno = 'y';
    while (yesno == 'y'){
    int userNum = 0;
    printf("Enter a number between 1 and 9 to determine what quiz you will take: \n");
        while(userNum < 1 || userNum > 9){
    scanf(" %d" , &userNum);
        }
    int quizNum = quizSelector(userNum);
    if (quizNum == 1){
        int correctAnswers = 0;
        int totalPoints = 0;
        int attempts = 1;
        char tOrF;
        char multipleChoice;
        char shortAnswer[20];
        
        while (correctAnswers < 3){
            printf("Quiz 1 was selected!\n");
            printf("Question 1: \ndouble temperature; is a correct way of declaring a variable (T/F): \n");
            scanf(" %c" , &tOrF);
            tOrF = tolower(tOrF);
            if (tOrF == 't'){
                printf("That is correct!\n");
                correctAnswers += 1;
                totalPoints += 5;
            }else{
                printf("Incorrect!\n");
            }
            
            printf("Question 2: \nWhich is the correct character to end a statement: \nA. ;\nB. .\nC. ]\nD. }\n");
            scanf(" %c" , &multipleChoice);
            multipleChoice = tolower(multipleChoice);
            if (multipleChoice == 'a'){
                printf("That is correct!\n");
                correctAnswers += 1;
                totalPoints += 5;
            }else {
                printf("Incorrect!\n");
            }
            
            printf("Question 3: \nFill in the blank:\nA ______ statement outputs text to the console.\n");
            scanf(" %s" , shortAnswer);
            for (int i = 0; i < strlen(shortAnswer); i++){
                shortAnswer[i] = tolower(shortAnswer[i]);
            }
            if (strcmp(shortAnswer , "printf") == 0){
                printf("That is correct!\n");
                correctAnswers += 1;
                totalPoints += 5;
            }else {
                printf("Incorrect!\n");
            }
            
            if (correctAnswers < 3){
                printf("You did not answer every question on this quiz correct. The quiz will now restart. ");
                correctAnswers = 0;
                attempts += 1;
            }else {
                printf("You passed the quiz\n");
                double average = averageScore(totalPoints , attempts);
                printf("Your average score across all attempts was %.1lf points!\n" , average);
            }
        }
    }else if (quizNum == 2){
        int correctAnswers = 0;
        int totalPoints = 0;
        int attempts = 1;
        char tOrF;
        char multipleChoice;
        char shortAnswer[20];
        
        while (correctAnswers < 3){
            printf("Quiz 2 was selected!\n");
            printf("Question 1: \nThe main function must be declared last (T/F): \n");
            scanf(" %c" , &tOrF);
            tOrF = tolower(tOrF);
            if (tOrF == 't'){
                printf("That is correct!\n");
                correctAnswers += 1;
                totalPoints += 5;
            }else{
                printf("Incorrect!\n");
            }
            
            printf("Question 2: \nWhich character is used to store inputs when using scan statements: \nA. &\nB. !\nC. =\nD. -\n");
            scanf(" %c" , &multipleChoice);
            multipleChoice = tolower(multipleChoice);
            if (multipleChoice == 'a'){
                printf("That is correct!\n");
                correctAnswers += 1;
                totalPoints += 5;
            }else {
                printf("Incorrect!\n");
            }
            
            printf("Question 3: \nFill in the blank:\nA ______ requires parameters in order to work.\n");
            scanf(" %s" , shortAnswer);
            for (int i = 0; i < strlen(shortAnswer); i++){
                shortAnswer[i] = tolower(shortAnswer[i]);
            }
            if (strcmp(shortAnswer , "function") == 0){
                printf("That is correct!\n");
                correctAnswers += 1;
                totalPoints += 5;
            }else {
                printf("Incorrect!\n");
            }
            
            if (correctAnswers < 3){
                printf("You did not answer every question on this quiz correct. The quiz will now restart. ");
                correctAnswers = 0;
                attempts += 1;
            }else {
                printf("You passed the quiz\n");
                double average = averageScore(totalPoints , attempts);
                printf("Your average score across all attempts was %.1lf points!\n" , average);
            }
        }
    }else{
        int correctAnswers = 0;
        int totalPoints = 0;
        int attempts = 1;
        char tOrF;
        char multipleChoice;
        char shortAnswer[20];
        
        while (correctAnswers < 3){
            printf("Quiz 3 was selected!\n");
            printf("Question 1: \nPrototypes are required when including functions into code (T/F): \n");
            scanf(" %c" , &tOrF);
            tOrF = tolower(tOrF);
            if (tOrF == 't'){
                printf("That is correct!\n");
                correctAnswers += 1;
                totalPoints += 5;
            }else{
                printf("Incorrect!\n");
            }
            
            printf("Question 2: \nWhat is the 'and' operator: \nA. &\nB. &&\nC. ==\nD. +=\n");
            scanf(" %c" , &multipleChoice);
            multipleChoice = tolower(multipleChoice);
            if (multipleChoice == 'b'){
                printf("That is correct!\n");
                correctAnswers += 1;
                totalPoints += 5;
            }else {
                printf("Incorrect!\n");
            }
            
            printf("Question 3: \nFill in the blank:\nIn the character string panda[50] there are a max of: ______ characters allowed in the string.\n");
            scanf(" %s" , shortAnswer);
            for (int i = 0; i < strlen(shortAnswer); i++){
                shortAnswer[i] = tolower(shortAnswer[i]);
            }
            if (strcmp(shortAnswer , "50") == 0){
                printf("That is correct!\n");
                correctAnswers += 1;
                totalPoints += 5;
            }else {
                printf("Incorrect!\n");
            }
            
            if (correctAnswers < 3){
                printf("You did not answer every question on this quiz correct. The quiz will now restart. ");
                correctAnswers = 0;
                attempts += 1;
            }else {
                printf("You passed the quiz\n");
                double average = averageScore(totalPoints , attempts);
                printf("Your average score across all attempts was %.1lf points!\n" , average);
            }
        }
    }
        printf("Would you like to take another quiz (y/n)?\n");
        yesno = tolower(yesno);
        scanf(" %c" , &yesno);
    }

    return 0;
}

/* Put your functions here, and be sure to put prototypes above. */


int quizSelector(int userInt){
    srand((int)time(0));
    int range1 = (rand() % 9) + 1;
    int range2 = (rand() % 9) + 1;
    while (range1 == range2){
        range1 = (rand() % 9) + 1;
    }
    if (range1 > range2){
        int temp = range1;
        range1 = range2;
        range2 = temp;
    }
    if (userInt <= range1){
        return 1;
    }else if ( userInt > range1 && userInt <= range2){
        return 2;
    }else{
        return 3;
    }
    
    
}
double averageScore(int totalPoints, int attempts){
    return ((double)totalPoints / (double)attempts);
}
