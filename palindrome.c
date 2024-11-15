#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int str_len, match = 1;

    printf("Enter a string: ");
    scanf("%s", &str);

    while (str[str_len] != '\0')
    {
        str_len++;
    }

    for (int i = 0, j = str_len - 1; i < str_len, j >= 0; i++, j--)
    {
        if (str[j] != str[i])
        {
            match = 0;
            break;
        }
    }

    if (match)
    {
        printf("The string is a palindrome.");
    }
    else
    {
        printf("The string is not a palindrome.");
    }

    return 0;
}