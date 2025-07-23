#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getUserChoice2();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {


    srand(time(NULL));

    printf("*** - Rock - Paper - Scissors - ***\n");

    int userChoice = getUserChoice();
    int userChoice2 = getUserChoice2();

    


    switch(userChoice){
        case 1:
            printf("Player<1> Chose ROCK!🪨\n");
            break;

        case 2:
            printf("Player<1> Chose PAPER!📰\n");
            break;

        case 3:
            printf("Player<1> Chose SCISSORS!✂️\n");
            break;
    }



    switch(userChoice2){
        case 1:
            printf("Player<2> Chose ROCK!🪨\n");
            break;

        case 2:
            printf("Player<2> Chose PAPER!📰\n");
            break;

        case 3:
            printf("Player<2> Chose SCISSORS!✂️\n");
            break;
    }

    checkWinner(userChoice, userChoice2);

    return 0;
}



int getUserChoice2(){


    int choice2 = 0;


    do{


    printf("1. ROCK🪨\n");
    printf("2. PAPER📰\n");
    printf("3. SCISSORS✂️\n");
    printf("Enter You're Choice :");
    scanf("%d", &choice2);

    }while(choice2 < 1 || choice2 > 3);

    system("clear");

    return choice2;


}



int getUserChoice(){

    int choice = 0;


    do{


    printf("1. ROCK🪨\n");
    printf("2. PAPER📰\n");
    printf("3. SCISSORS✂️\n");
    printf("Enter You're Choice :");
    scanf("%d", &choice);

    }while(choice < 1 || choice > 3);


    system("clear");

    return choice;


}

void checkWinner(int userChoice, int userChoice2){

    if(userChoice == userChoice2){
        printf("=============Draw!=============\n");
    }

//------------------------------------------------------

    else if (userChoice == 1 && userChoice2 == 3){
        printf("============= Player<1> Win!=============\n");
    }

//------------------------------------------------------

    else if (userChoice == 2 && userChoice2 == 1){
        printf("============= Player<1> Win!=============\n");
    }

//------------------------------------------------------

    else if (userChoice == 3 && userChoice2 == 2){
        printf("============= Player<1> Win!=============\n");
    }
    else{
        printf("============= Player<2> Win!=============\n");
    }

//------------------------------------------------------
}






