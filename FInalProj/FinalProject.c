//SE 185: Final Project//
/////////////////////////
/* 
Team 07 (please insert your team number instead of xx)
Team member 1: Nathan Turnis | 25% - Main Function
Team member 2: Bilal Hodzic | 25% - High Score Table
Team member 3: Tristan Sayasit | 25% - Scoring & Checking user input
Team member 4: Lucas Russell | 25% - Draw Shapes Function
*/

////////////////////
#include<stdio.h>//
//add more here////
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h> //for sleep() function

//////////////////////
//Struct Definition//
////////////////////


/////////////////////////////////////
//User Defined Functions Prototype//
//List prototypes here and define//
//them below the main function////
/////////////////////////////////

void totalScore(int array[], int roundNum, int* score, int* gamecheck);
void printHighscores();
void addHighScore(int score);
int drawShapes();

int main(){
	
	srand(time(NULL));
	
    char startGame = 'Z';
    int gameCheck = 1;
    int roundNum = 1;
    int score = 0;

    int array[99];

    printf("\nWelcome to the Memory Game!\n");
    printf("\nIn the game various shapes will appear with a box around it. \nYou must remember the shapes that are boxed and repeat the order.");
    printf("\nUse w for up, s for down, d for right, a for left.\n\n");

    printHighscores();

    printf("\n\nTo start the game, press 'g'.\n");
	
    while (startGame != 'g') {
        scanf(" %c", &startGame); //wait for user to press g to start the game
    } 
	
    for (int i = 3; i > 0; i--) {
        printf("\n%d...", i);
        sleep(1); //sleep the program for 1 second
    }

    while (gameCheck == 1) {
        printf("\n");

        if (roundNum > 99) {
            gameCheck = 3;
            break;
        }

        for (int i = 0; i < roundNum; i++) { //call drawShapes roundNum times
            array[i] = drawShapes(); //stores the correct number into an array
            sleep(2);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        }

        totalScore(array, roundNum, &score, &gameCheck); //asks user for input. uses the array from earlier to check if the user is correct

        if (gameCheck == 2) {
            break;
        }

        printf("\n\nGood job, get ready for the next round.");
        for (int i = 3; i > 0; i--) {
            printf("\n%d...", i);
            sleep(1); //sleep the program for 1 second
        }

        roundNum++;

    }

    if (gameCheck == 2) {
        printf("\n\nYou lose! You made it to round %d.", roundNum);
        printf("\nYour final score was %d.\n\n", score);
        addHighScore(score);
        printHighscores();
    }
    else if (gameCheck == 3) {
        printf("\n\nYou made it to the max number of rounds!");
        printf("\nYour final score was %d.\n\n", score);
        addHighScore(score);
        printHighscores();
    } 
	
	return 0;
}

///////////////////////////////////////
//User Defined Functions' Definition//
/////////////////////////////////////

void totalScore(int array[], int roundNum, int* score, int* gamecheck) {
    int checkInt;
    char userInput;
    int k = 1;
    char correctAnswer;

    printf("\nRound: %d", roundNum);
    printf("\nScore: %d", *score);
    printf("\nWhat was the order? (w, a, s, d)\n");

    for (int i = 0; i < roundNum; i++) {
        printf("\n%d time: ", k);
        scanf(" %c", &userInput);
        if (userInput == 'w') {
            checkInt = 1;
        }
        else if (userInput == 'a') {
            checkInt = 2;
        }
        else if (userInput == 's') {
            checkInt = 4;
        }
        else if (userInput == 'd') {
            checkInt = 3;
        }
        else { //if the user doesn't enter w, a, s, or d, ask again.
            printf("Invalid input!");
            i--;
            continue;
        }
        if (checkInt == array[i]) { //if the user input is the same as the correct number in the array, increase score.
            ++* score;
            printf("Score: %d\n", *score);
        }
        else {
            if (array[i] == 1) {
                correctAnswer = 'w';
            }
            else if (array[i] == 2) {
                correctAnswer = 'a';
            }
            else if (array[i] == 3) {
                correctAnswer = 'd';
            }
            else if (array[i] == 4) {
                correctAnswer = 's';
            }
            printf("Nope the correct answer was %c.", correctAnswer);
            *gamecheck = 2;
            break;
        }

        k++;
    }

    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
}

void addHighScore(int score) {
    //Add new high score to file
    FILE* highscores = fopen("highscores.txt", "a");
    printf("Enter 3 letter name: ");
    gamecheck
    scanf(" %s", name);
    fprintf(highscores, "%d\n", score);
    fprintf(highscores, "%s\n", name);
    fclose(highscores);
}
void printHighscores() {
    FILE* highscores = fopen("highscores.txt", "r");
    int scoresAmount = 0;
    int counter = 1;
    //Finds total number of high scores
    while (!feof(highscores)) {
        if (counter % 2 != 0) {
            int junk;
            fscanf(highscores, " %d", &junk);
            counter++;
        }
        else {
            char junk2[3];
            fscanf(highscores, " %s", junk2);
            counter++;
        }
        scoresAmount++;
    }
    int scoresArray[scoresAmount / 2];
    fclose(highscores);
    highscores = fopen("highscores.txt", "r");
    int scoreCount = 0;
    int nameCount = 0;
    counter = 1;
    //Writes high scores to array
    while (!feof(highscores)) {
        if (counter % 2 != 0) {
            fscanf(highscores, " %d", &scoresArray[scoreCount]);
            scoreCount++;
            counter++;
        }
        else {
            char junk2[3];
            fscanf(highscores, " %s", junk2);
            counter++;
        }
    }
    fclose(highscores);
    //Sorts array by highest
    int copyArray[scoresAmount / 2];
    for (int i = 0; i < scoresAmount / 2; i++) {
        copyArray[i] = scoresArray[i];
    }
    int top10index[10];
    for (int i = 0; i < scoresAmount / 2; i++) {
        for (int j = i + 1; j < scoresAmount / 2; j++)
        {
            if (copyArray[i] < copyArray[j])
            {
                int temp = copyArray[i];
                copyArray[i] = copyArray[j];
                copyArray[j] = temp;
            }
        }
    }
    int copyTop10[10];
    for (int i = 0; i < 10; i++) {
        copyTop10[i] = copyArray[i];
    }
    //Determines original positions of high scores
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < scoresAmount / 2; j++) {
            if (copyTop10[i] == scoresArray[j]) {
                top10index[i] = j;
            }
        }
    }
    //Reads file again to find names corresponding to positions
    printf("Place |  Score | Name\n");
    for (int i = 0; i < 10; i++) {
        int numwords = 0;
        int counter2 = 1;
        int indexNeeded = top10index[i];
        highscores = fopen("highscores.txt", "r");
        while (!feof(highscores)) {
            if (counter2 % 2 != 0) {
                int junk3;
                fscanf(highscores, " %d", &junk3);
                counter2++;
            }
            else {
                if (numwords == indexNeeded) {
                    char name[3];
                    fscanf(highscores, "%s", name);
                    printf("%d    |   %d   |  %s\n", i + 1, copyTop10[i], name);

                }
                else {
                    char junk4[3];
                    fscanf(highscores, "%s", junk4);
                }
                numwords++;
                counter2++;
            }
        }
    }
}

int drawShapes() { //draws shapes, and return a number for the correct shape (1 - w, 2 - a, 3 - d, 4 - s)

    int i;
    int side = 7;
    int rng = 0;

    rng = (rand() % 4) + 1;

    switch (rng) {
    case 1:
        printf("                      |       X       |                                 \n");
        printf("                      |      XXX      |                                 \n");
        printf("                      |     XXXXX     |                                 \n");
        printf("                      |    XXXXXXX    |                                 \n");
        printf("                                                                        \n");
        printf("                                                                        \n");
        printf("      X   X                                        V                    \n");
        printf("       X X                                        V V                   \n");
        printf("        X                                        V   V                  \n");
        printf("       X X                                        V V                   \n");
        printf("      X   X                                        V                    \n");

        for (i = 0; i < side; i++) {
            if (i == 0 || i == 6) {
                printf("                           HHHHHHH                                      \n");
            }
            else {
                printf("                           H     H                                      \n");
            }
        }
        break;
    case 2:
        printf("                              X                                         \n");
        printf("                             XXX                                        \n");
        printf("                            XXXXX                                       \n");
        printf("                           XXXXXXX                                      \n");
        printf("                                                                        \n");
        printf("                                                                        \n");
        printf("  |   X   X   |                                    V                    \n");
        printf("  |    X X    |                                   V V                   \n");
        printf("  |     X     |                                  V   V                  \n");
        printf("  |    X X    |                                   V V                   \n");
        printf("  |   X   X   |                                    V                    \n");

        for (i = 0; i < side; i++) {
            if (i == 0 || i == 6) {
                printf("                           HHHHHHH                                      \n");
            }
            else {
                printf("                           H     H                                      \n");
            }
        }
        break;
    case 3:
        printf("                              X                                         \n");
        printf("                             XXX                                        \n");
        printf("                            XXXXX                                       \n");
        printf("                           XXXXXXX                                      \n");
        printf("                                                                        \n");
        printf("                                                                        \n");
        printf("      X   X                                 |      V     |              \n");
        printf("       X X                                  |     V V    |              \n");
        printf("        X                                   |    V   V   |              \n");
        printf("       X X                                  |     V V    |              \n");
        printf("      X   X                                 |      V     |              \n");

        for (i = 0; i < side; i++) {
            if (i == 0 || i == 6) {
                printf("                           HHHHHHH                                      \n");
            }
            else {
                printf("                           H     H                                      \n");
            }
        }
        break;
    case 4:
        printf("                              X                                         \n");
        printf("                             XXX                                        \n");
        printf("                            XXXXX                                       \n");
        printf("                           XXXXXXX                                      \n");
        printf("                                                                        \n");
        printf("                                                                        \n");
        printf("      X   X                                        V                    \n");
        printf("       X X                                        V V                   \n");
        printf("        X                                        V   V                  \n");
        printf("       X X                                        V V                   \n");
        printf("      X   X                                        V                    \n");

        for (i = 0; i < side; i++) {
            if (i == 0 || i == 6) {
                printf("                        |  HHHHHHH |                                    \n");
            }
            else {
                printf("                        |  H     H |                                    \n");
            }
        }
        break;
    }
    return rng;

}
