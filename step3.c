/*
 * A program which removes trailing whitespace
 */

#include <stdio.h>
#include <string.h>

#define MAX_STR 1000

int main()
{
    char str[MAX_STR]; // The array to hold a line of input
    int i;

    while (gets(str) != NULL) // Deprecated, try to replace with fgets()
    {
        int i = strlen(str) - 1; // Start index from the end of the string

        while (i >- 1)
        {
            if (str[i] == 0x09 || str[i] == 0x20) // If tab or space is encountered
            {
                i--;
            }
            else
            {
                break;
            }
        }
        
        str[i+1] = 0x0A; // Insert newline at the end of the string
        str[i+2] = 0x00; // Null after

        printf("%s", str);
    }

    return 0;
}