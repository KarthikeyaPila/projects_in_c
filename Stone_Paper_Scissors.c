#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random , outcome , tm_sec = 1000 , i;
    int input;
    printf("lets playy stone paper scissors!! \n");
    Sleep(tm_sec);
    printf("lets start the gamee! \n");
    Sleep(tm_sec);
    printf("choose one from:\n0 for stone\n1 for paper\n2 for scissor. \n");
    scanf("%d" , &input);

    input == 0 ? (printf("you chose stone. \n")) : input == 1? (printf("you chose paper.\n")) : input == 2 ? printf("you chose scissors. \n") : printf("enter a valid number.\n");
    Sleep(tm_sec);
    srand(time(NULL));
    random = rand()%3;
    Sleep(tm_sec);

    if(random == 2 ){
        printf("the computer chose scissors.\n");
    }

    else if (random == 1 ){
        printf("the computer chose paper. \n");
    }

    else if(random == 0 ){
        printf("the computer chose stone.\n");
    }

    input == random ? printf("This is a tie.\n") :

    Sleep(tm_sec);
    (input == 0 && random == 2) || (input == 1 && random == 0) || (input == 2 && random == 1) ? printf("You won!\n") : printf("You lost.\n");
    
    printf("thanks for playing. ");

    return 0;
}
