#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {
    srand(time(NULL));

    printf("*** - حجر - ورق - مقص -***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    


    switch(userChoice){
        case 1:
            printf("🪨!انت اخترت حجر\n");
            break;

        case 2:
            printf("📰!انت اخترت ورق\n");
            break;

        case 3:
            printf("✂️!انت اخترت مقص\n");
            break;
    }



    switch(computerChoice){
        case 1:
            printf("🪨!الجهاز اختار حجر\n");
            break;

        case 2:
            printf("📰!الجهاز اختار ورق\n");
            break;

        case 3:
            printf("✂️!الجهاز اختار مقص\n");
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


    printf("1. حجر🪨\n");
    printf("2. ورق📰\n");
    printf("3. مقص✂️\n");
    printf("ادخل خيارك :");
    scanf("%d", &choice);

    }while(choice < 1 || choice > 3);

    
    return choice;


}

void checkWinner(int userChoice, int computerChoice){

    if(userChoice == computerChoice){
        printf("============= !تعادل =============\n");
    }

//------------------------------------------------------

    else if (userChoice == 1 && computerChoice == 3){
        printf("============= !انت فزت =============\n");
    }

//------------------------------------------------------

    else if (userChoice == 2 && computerChoice == 1){
        printf("============= !انت فزت =============\n");
    }

//------------------------------------------------------

    else if (userChoice == 3 && computerChoice == 2){
        printf("============= !انت فزت =============\n");
    }
    else{
        printf("============= !انت خسرت =============\n");
    }

//------------------------------------------------------
}






