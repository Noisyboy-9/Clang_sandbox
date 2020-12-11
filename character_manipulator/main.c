#include <stdio.h>

int main() {
    int shift; // user inputs
    char character;

    printf("please enter a character:");
    scanf("%s", &character);

    printf("please input a number you want shift the character by:");
    scanf("%d", &shift);


    int small_character_code = (int) character + shift;

    int offset = 'A' - 'a';
    int big_character_code = small_character_code + offset;

    printf("your input character was : %c \n", character);
    printf("after shifting the small character is : %c with ASCII code of : %d \n", small_character_code,
           small_character_code);
    printf("the big from of shifted character is : %c with ASCII code of : %d \n", big_character_code,
           big_character_code);
}
