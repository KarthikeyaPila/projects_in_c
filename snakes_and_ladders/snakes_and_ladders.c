#include <stdio.h>
/* #include <windows.h> */
#include <time.h>
#include <stdlib.h>

/* int update_pos_if_ladder_snake(int player_position, int dice)
{
    player_position = player_position + dice;
    // check_ladder;
    int ladders[16][2] = {
        {4, 14},
        {9, 31},
        {20, 38},
        {28, 84},
        {40, 59},
        {51, 67},
        {63, 81},
        {71, 91},
        {17, 7},
        {54, 34},
        {62, 19},
        {64, 60},
        {87, 24},
        {93, 73},
        {95, 75},
        {99, 2}};

    for (int j = 0; j < 8; j++)
    {
        if (player_position == ladders[j][0])
        {
            if(j<9){printf("lets goo, you got up a ladder! \n");}
            if(j>8){printf("you got eaten by a snake :( \n");}
            player_position = ladders[j][1];
        }

    }
} 
*/

int main()
{

    int no_of_players = 1;
    int trash;
    printf("Lets playy snakes and ladderss. (i hope yk the rules lol). \n");
    printf("Lets start the game! \n");
    /* printf("how many players are there?? \n");
    scanf("%d", &no_of_players); */

    int *player_position_arr = calloc(no_of_players, sizeof(int));

    printf("\nokayy, lets start the game. \n");

    printf("you are currently at: %d\n", player_position_arr[0]);

    printf("you are currently at: %d\n", player_position_arr[0]);

    while (player_position_arr[0] != 100 || player_position_arr[0] < 100)
    {
        printf("\nroll the dice by pressing enter\n");
        scanf("%c", &trash);
        srand(time(NULL));
        int dice = (rand() % 6) + 1;
        printf("dice value: %d\n", dice);
        {
            {
                player_position_arr[0] = player_position_arr[0] + dice;
                // check_ladder;
                int ladders[16][2] = {
                    {4, 14},
                    {9, 31},
                    {20, 38},
                    {28, 84},
                    {40, 59},
                    {51, 67},
                    {63, 81},
                    {71, 91},
                    {17, 7},
                    {54, 34},
                    {62, 19},
                    {64, 60},
                    {87, 24},
                    {93, 73},
                    {95, 75},
                    {99, 2}};

                for (int j = 0; j < 16; j++)
                {
                    if (player_position_arr[0] == ladders[j][0])
                    {
                        if (j < 9)
                        {
                            printf("lets goo, you got up a ladder! \n");
                        }
                        if (j > 8)
                        {
                            printf("you got eaten by a snake :( \n");
                        }
                        player_position_arr[0] = ladders[j][1];
                    }
                }
                printf("your position is at: %d\n", player_position_arr[0]);
            }
            if (player_position_arr[0] == 100)
            {
                printf("congratss you won!!");
            }
        }
    }
}
