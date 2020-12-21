/*
 * A program which removes trailing whitespace. 
 */

#include <stdio.h>

#define MAX_STR 1000

int main()
{
    int c, i = 0;

    char str[MAX_STR]; // The array to hold a line of input

    while ((c = getchar()) != EOF) // Until the file ends
    {
        str[i] = c;
        if (c == 0x0A)
        {
            int j = 0;
            printf("newline\n");
            while (str[j] != 0x0A)
            {
                printf("not newline\n");

                int index = 0;

                if (str[j] != 0x09 && str[j] != 0x20)
                {
                    index = j;
                    printf("%d", index);
                }
                
                j++;
            }
        }
        
        i++;
    }
    printf("%s\n", str);
    return 0;
}