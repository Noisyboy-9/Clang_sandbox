#include <stdio.h>

int main() {
    printf("please enter number of seconds:");
    const long int raw_seconds;
    scanf("%ld", &raw_seconds);

    int days_count = raw_seconds / (24 * 3600);
    const int days_past_in_seconds = days_count * 24 * 3600;

    int hours_count = (raw_seconds - days_past_in_seconds) / 3600;
    const int hours_past_in_seconds = hours_count * 3600;

    int minutes_count = (raw_seconds - days_past_in_seconds - hours_past_in_seconds) / 60;
    const int minutes_past_in_seconds = minutes_count * 60;

    int seconds_count = (raw_seconds - days_past_in_seconds - hours_past_in_seconds - minutes_past_in_seconds);

    printf("number of days is : %d\n", days_count);
    printf("number of hours is : %d\n", hours_count);
    printf("number of minutes is : %d\n", minutes_count);
    printf("number of seconds is : %d\n", seconds_count);

    return 0;
}
