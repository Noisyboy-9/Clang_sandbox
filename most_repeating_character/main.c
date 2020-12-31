#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ASCII_CHARACTER_COUNT 128
#define MAX_STRING_LENGTH 1000

char most_occurrencing_char(char string[]);
int get_biggest_value(int size, int array[size]);

int main()
{
    char string[MAX_STRING_LENGTH];
    fgets(string, MAX_STRING_LENGTH, stdin);

    printf("the most repeated character in |%s| is |%c|", string, most_occurrencing_char(string));
    return 0;
}

char most_occurrencing_char(char string[])
{
    int characters_repeat_count[ASCII_CHARACTER_COUNT] = {0};
    int length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        int character_code = (int)string[i];
        characters_repeat_count[character_code]++;
    }
    return get_biggest_value(ASCII_CHARACTER_COUNT, characters_repeat_count);
}

int get_biggest_value(int size, int array[size])
{
    int max_value = array[0];
    int max_index = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max_value)
        {
            max_value = array[i];
            max_index = i;
        }
    }

    return max_index;
}