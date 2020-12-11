#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int range_random(int min, int max) {
    return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

double degree_to_radians(int degree) {
    return (degree * M_PI) / 180;
}

double radians_to_degree(double radians) {
    return (radians * 180) / M_PI;
}

int main() {
    int side1, side2;
    double angle1_in_radians, angle2_in_radians, angle3_in_radians;
    double angle1_in_degree, angle2_in_degree, angle3_in_degree;

    srand(time(0));

    side1 = range_random(5, 25);
    side2 = range_random(5, 25);

    angle3_in_radians = degree_to_radians(range_random(0, 90)); // angle 3 is in radians

    double side3 = sqrt(pow(side1, 2) + pow(side2, 2) - 2 * side1 * side2 * cos(angle3_in_radians));

//    determining other angles
    angle1_in_radians = asin(side1 * sin(angle3_in_radians) / side3);
    angle2_in_radians = asin((side2 * sin(angle3_in_radians)) / side3);

//    converting radian angles to degress
    angle1_in_degree = radians_to_degree(angle1_in_radians);
    angle2_in_degree = radians_to_degree(angle2_in_radians);
    angle3_in_degree = radians_to_degree(angle3_in_radians);


//    determining the smallest angle
    double smallest_angle;
    if (angle1_in_degree > angle2_in_degree) {
        if (angle2_in_degree > angle3_in_degree) {
            smallest_angle = angle3_in_degree;
        } else {
            smallest_angle = angle2_in_degree;
        }
    } else {
        if (angle3_in_degree > angle1_in_degree) {
            smallest_angle = angle1_in_degree;
        } else {
            smallest_angle = angle3_in_degree;
        }
    }

    printf("the third side of triangle is: %.5lf\n", side3);
    printf("[bonus] The angles in degrees are : %.5lf, %.5lf, %.5lf\n", angle1_in_degree, angle2_in_degree,
           angle3_in_degree);
    printf("[bonus]The smallest angle is : %0.5lf\n", smallest_angle);

    return 0;
}
