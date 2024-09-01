#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int update_pos_if_ladder_snake(int player_position) {
  int ladders[16][2] = {{4, 14},  {9, 31},  {20, 38}, {28, 84},
                        {40, 59}, {51, 67}, {63, 81}, {71, 91},
                        {17, 7},  {54, 34}, {62, 19}, {64, 60},
                        {87, 24}, {93, 73}, {95, 75}, {99, 2}};

  for (int i = 0; i < 16; i++) {
    if (player_position == ladders[i][0]) {
      return ladders[i][1];
    }
  }

  return player_position;
}

int main() {

  int no_of_players = 1;
  char trash;
  printf("Lets playy snakes and ladderss. (i hope yk the rules lol). \n");
  printf("Lets start the game! \n");
  /* printf("how many players are there?? \n");
  scanf("%d", &no_of_players); */

  int *player_position_arr = calloc(no_of_players, sizeof(int));

  printf("\nokayy, lets start the game. \n");

  printf("you are currently at: %d\n", player_position_arr[0]);

  printf("you are currently at: %d\n", player_position_arr[0]);

  while (player_position_arr[0] != 100 || player_position_arr[0] < 100) {
    printf("\nroll the dice by pressing enter\n");

    scanf("%c", &trash);
    srand(time(NULL));
    int dice = (rand() % 6) + 1;
    printf("dice value: %d\n", dice);

    int player_position = player_position_arr[0] + dice;
    if (player_position > 100) {
      player_position = player_position_arr[0];
    }

    int updated_player_position = update_pos_if_ladder_snake(player_position);
    player_position_arr[0] = updated_player_position;

    if (updated_player_position > player_position) {
      printf("lets goo, you got up a ladder! \n");
    } else if (updated_player_position < player_position) {
      printf("you got eaten by a snake :( \n");
    }

    printf("your position is at: %d\n", updated_player_position);

    if (updated_player_position == 100) {
      printf("congratss you won!!");
    }

  }

 return 0;

}
