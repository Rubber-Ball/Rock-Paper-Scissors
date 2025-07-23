#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getUserChoice1();
int getUserChoice2();
void checkWinner(int userChoice1, int userChoice2);

int main() {
    srand(time(NULL));

    printf("*** - حجر - ورق - مقص - ***\n");

    int userChoice1 = getUserChoice1();
    int userChoice2 = getUserChoice2();

    switch(userChoice1){
        case 1:
            printf("🪨!اللاعب <1> اختار حجر\n");
            break;

        case 2:
            printf("📰!اللاعب <1> اختار ورق\n");
            break;

        case 3:
            printf("✂️!اللاعب <1> اختار مقص\n");
            break;
    }

    switch(userChoice2){
        case 1:
            printf("🪨!اللاعب <2> اختار حجر\n");
            break;

        case 2:
            printf("📰!اللاعب <2> اختار ورق\n");
            break;

        case 3:
            printf("✂️!اللاعب <2> اختار مقص\n");
            break;
    }

    checkWinner(userChoice1, userChoice2);

    return 0;
}

int getUserChoice1(){
    int choice = 0;

    do {
        printf("1. حجر🪨\n");
        printf("2. ورق📰\n");
        printf("3. مقص✂️\n");
        printf("ادخل خيارك كلاعب <1>: ");
        scanf("%d", &choice);
    } while(choice < 1 || choice > 3);

    system("clear");

    return choice;
}

int getUserChoice2(){
    int choice2 = 0;

    do {
        printf("1. حجر🪨\n");
        printf("2. ورق📰\n");
        printf("3. مقص✂️\n");
        printf("<ادخل خيارك كلاعب <2: ");
        scanf("%d", &choice2);
    } while(choice2 < 1 || choice2 > 3);

    system("clear");

    return choice2;
}

void checkWinner(int userChoice1, int userChoice2){

    if(userChoice1 == userChoice2){
        printf("============= !تعادل =============\n");
    }
    else if (userChoice1 == 1 && userChoice2 == 3){
        printf("============= !اللاعب <1> فاز =============\n");
    }
    else if (userChoice1 == 2 && userChoice2 == 1){
        printf("============= !اللاعب <1> فاز =============\n");
    }
    else if (userChoice1 == 3 && userChoice2 == 2){
        printf("============= !اللاعب <1> فاز =============\n");
    }
    else{
        printf("============= !اللاعب <2> فاز =============\n");
    }
}
