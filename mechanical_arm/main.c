#include <stdio.h>
#include <math.h>


int main() {
    int arm1, arm2;
    double arm3;
    double current_angle, max_angle;

//    getting input
    scanf("%d %d %lf %lf", &arm1, &arm2, &current_angle, &max_angle);

    if (current_angle > max_angle) {
        printf("Theta is bigger than theta max!");
        return 0;
    }


//    calculating third arm using cos theorem
    arm3 = sqrt(
            pow(arm1, 2) +
            pow(arm2, 2) -
            2 * arm1 * arm2 * cos(current_angle)
    );

    printf("%.2lf", arm3);
    return 0;
}
