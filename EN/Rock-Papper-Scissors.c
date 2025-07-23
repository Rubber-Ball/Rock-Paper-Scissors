#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {
    srand(time(NULL));

    printf("*** - Rock - Paper - Scissors - ***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    


    switch(userChoice){
        case 1:
            printf("You Chose ROCK!🪨\n");
            break;

        case 2:
            printf("You Chose PAPER!📰\n");
            break;

        case 3:
            printf("You Chose SCISSORS!✂️\n");
            break;
    }



    switch(computerChoice){
        case 1:
            printf("Computer Chose ROCK!🪨\n");
            break;

        case 2:
            printf("Computer Chose PAPER!📰\n");
            break;

        case 3:
            printf("Computer Chose SCISSORS!✂️\n");
            break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}


int getComputerChoice(){
    return (rand() % 3) + 1;
}



int getUserChoice(){


    int choice = 0;


    do{


    printf("1. ROCK🪨\n");
    printf("2. PAPER📰\n");
    printf("3. SCISSORS✂️\n");
    printf("Enter Youre Choice :");
    scanf("%d", &choice);

    }while(choice < 1 || choice > 3);

    
    return choice;


}

void checkWinner(int userChoice, int computerChoice){

    if(userChoice == computerChoice){
        printf("=============Draw!=============\n");
    }

//------------------------------------------------------

    else if (userChoice == 1 && computerChoice == 3){
        printf("=============You Win!=============\n");
    }

//------------------------------------------------------

    else if (userChoice == 2 && computerChoice == 1){
        printf("=============You Win!=============\n");
    }

//------------------------------------------------------

    else if (userChoice == 3 && computerChoice == 2){
        printf("=============You Win!=============\n");
    }
    else{
        printf("=============You LOSE!=============\n");
    }

//------------------------------------------------------
}






