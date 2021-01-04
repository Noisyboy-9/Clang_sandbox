#include <stdio.h>

int string_compare(const char *string1, const char *string2);
int string_length(const char *string);
int main()
{
    char string1[1024] = "this string is bigger";
    char string2[1024] = "this string";

    printf("%d", string_compare(string1, string2));
    return 0;
}
int string_length(const char *string)
{
    int length = 0;
    int i = 0;
    while (string[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int string_compare(const char *string1, const char *string2)
{
    int str1_length = string_length(string1);
    int str2_length = string_length(string2);
    if (str1_length != str2_length)
    {
        return string_length(string1) - string_length(string2);
    }

    for (int i = 0; i < str1_length; i++)
    {
        if (string1[i] != string2[i])
        {
            return string1[i] - string2[i];
        }
    }

    return 0;
}