#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BARVARD_WINNER_CODE 1
#define BAXFORD_WINNER_CODE 2


int ranged_random(min, max) {
    return rand() % (max + 1 - min) + min;
}

int min(int number1, int number2) {
    return number1 > number2 ? number2 : number1;
}

int max(int number1, int number2) {
    return number1 > number2 ? number1 : number2;
}


int main() {
//    getting input
    int barvard_win_possibility, winner_code;
    scanf("%d", &barvard_win_possibility);


//    determining the winner
    srand(time(0));
    int number = ranged_random(0, 100);

    if (number <= barvard_win_possibility) {
        winner_code = BARVARD_WINNER_CODE;  // barvard is the winner

    } else {
        winner_code = BAXFORD_WINNER_CODE; // baxford is the winner
    }

//    determining teams goal count
    int first_team_goals_count = ranged_random(0, 39);
    int second_team_goals_count = ranged_random(0, 39);

//    we must have a winner so there must not be equal goals count for the teams.
    while (first_team_goals_count == second_team_goals_count) {
        int first_team_goals_count = ranged_random(0, 39);
        int second_team_goals_count = ranged_random(0, 39);
    }

//    giving appropriate goals count to each team
    int barod_goals_count, baxford_goals_count;
    if (winner_code == BARVARD_WINNER_CODE) {
        barod_goals_count = max(first_team_goals_count, second_team_goals_count);
        baxford_goals_count = min(first_team_goals_count, second_team_goals_count);
    } else {
        barod_goals_count = min(first_team_goals_count, second_team_goals_count);
        baxford_goals_count = max(first_team_goals_count, second_team_goals_count);
    }

    printf(" (Barvard(%d) - Boxford(%d)\n", barod_goals_count, baxford_goals_count);

    return 0;
}
