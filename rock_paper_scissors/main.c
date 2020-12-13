#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>


#define GAME_OPTION_ROCK 1

#define GAME_OPTION_PAPER 2

#define GAME_OPTION_SCISSORS 3

int range_random(int min, int max) {
    return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

int main() {
    int user_hand, computer_hand;
    printf("welcome to rock paper scissors game: \n");

//  getting human hand
    printf("please enter your choice (1 = rock, 2 = paper, 3 = scissors):");
    scanf("%d", &user_hand);
    if (user_hand != GAME_OPTION_ROCK && user_hand != GAME_OPTION_PAPER && user_hand != GAME_OPTION_SCISSORS) {
        printf("invalid input data");
        return 1;
    }

//    getting random computer hand
    srand(time(0));
    computer_hand = range_random(1, 3);

//    finding the winner
    if (user_hand == GAME_OPTION_ROCK) {
        if (computer_hand == GAME_OPTION_SCISSORS) {
            printf("You are the winner");
            return 0;
        }

        if (computer_hand == GAME_OPTION_PAPER) {
            printf("shot! computer is the winner");
            return 0;
        }
    }


    if (user_hand == GAME_OPTION_PAPER) {
        if (computer_hand == GAME_OPTION_SCISSORS) {
            printf("shot! computer is the winner");
            return 0;
        }

        if (computer_hand == GAME_OPTION_ROCK) {
            printf("You are the winner");
            return 0;
        }
    }

    if (user_hand == GAME_OPTION_SCISSORS) {
        if (computer_hand == GAME_OPTION_ROCK) {
            printf("You are the winner");
            return 0;
        }

        if (computer_hand == GAME_OPTION_PAPER) {
            printf("shot computer is the winner");
            return 0;
        }
    }
}
