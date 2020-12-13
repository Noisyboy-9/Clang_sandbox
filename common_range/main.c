#include <stdio.h>


int max(int range1_end, int range2_end);

int min(int range1_start, int range2_start);

int main() {
    int range1_start, range1_end;
    int range2_start, range2_end;
    int range3_start, range3_end;

    int overlap_of_1_and_2_start, overlap_of_1_and_2_end;
    int result_start, result_end;

    printf("please enter first range:");
    scanf("%d,%d", &range1_start, &range1_end);

    printf("please enter second range:");
    scanf("%d,%d", &range2_start, &range2_end);

    printf("please enter third range:");
    scanf("%d,%d", &range3_start, &range3_end);

// find overlap in range1 and range2
    double total_range = max(range1_end, range2_end) - min(range1_start, range2_end);
    double sumOfRanges = (range1_end - range1_start) + (range2_end - range2_start);
    if (sumOfRanges > total_range) {
//        they have overlap
        overlap_of_1_and_2_start = max(range1_start, range2_start);
        overlap_of_1_and_2_end = min(range1_end, range2_end);
    } else {
//        no overlap , so the final result is always no overlap
        printf("Given ranges have no overlap");
        return 0;
    }

//    finding final result
    total_range = max(overlap_of_1_and_2_end, range3_end) - min(overlap_of_1_and_2_start, range3_start);
    sumOfRanges = (overlap_of_1_and_2_end - overlap_of_1_and_2_start) + (range3_end - range3_start);
    if (sumOfRanges > total_range) {
        result_start = max(overlap_of_1_and_2_start, range3_start);
        result_end = min(overlap_of_1_and_2_end, range3_end);
    } else {
        printf("Given ranges have no overlap");
        return 0;
    }

    printf("The overlapping range is : (%d, %d)", result_start, result_end);
    return 0;
}

int min(int range1_start, int range2_start) {
    return range1_start > range2_start ? range2_start : range1_start;
}

int max(int range1_end, int range2_end) {
    return range1_end > range2_end ? range1_end : range2_end;
}
