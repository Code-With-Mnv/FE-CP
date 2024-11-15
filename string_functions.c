#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "Hello";
    char str2[50] = "Worldd";
    char str3[50];

    printf("\nLength of str1: %lu\n", strlen(str1));

    strcpy(str3, str1);
    printf("\nstr3 after copying str1: %s\n", str3);

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("\nstr1 and str2 are equal.\n");

    else if (result > 0)
        printf("\nstr1 is greater than str2.\n");

    else
        printf("\nstr1 is smaller than str2.\n");

    strcat(str2, str1);
    printf("\n%s\n", str2);

    return 0;
}