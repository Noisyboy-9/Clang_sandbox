#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 1024
#define MAX_WORD_LENGTH 50

char *find_and_replace_word(const char *string, const char *find, const char *replace)
{
    char *result;
    int i, count = 0;
    int new_word_length = strlen(replace);
    int old_word_length = strlen(find);

    // Counting the number of times old word occur in the string for the allocation size determination
    for (i = 0; string[i] != '\0'; i++)
    {
        if (strstr(&string[i], find) == &string[i])
        {
            count++;

            // Jumping to index after the old word.
            i += old_word_length - 1;
        }
    }

    // Making new string with enough length
    int allocation_size = i + count * (new_word_length - old_word_length) + 1;
    result = (char *)malloc(allocation_size);

    i = 0;
    while (*string)
    {
        if (strstr(string, find) == string)
        {
            strcpy(&result[i], replace);
            i += new_word_length;
            string += old_word_length;
        }
        else
        {
            result[i++] = *string++;
        }
    }

    result[i] = '\0';
    return result;
}

int main()
{
    char string[MAX_STRING_LENGTH];
    printf("please input string[max-length: 1024]: ");
    gets(string);
    fflush(stdin);

    char find[MAX_WORD_LENGTH];
    printf("please input find word[max-length: 50]: ");
    gets(find);
    fflush(stdin);

    char replace[MAX_WORD_LENGTH];
    printf("please input replace word[max-length: 50]: ");
    gets(replace);
    fflush(stdin);

    char *result = find_and_replace_word(string, find, replace);
    puts(result);
    return 0;
}
