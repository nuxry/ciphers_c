#include "caesar.h"
#include <string.h>

void caesar(const char *input, int shift, char *output)
{
    for (int i = 0; input[i] != '\0'; ++i)
    {
        char currentChar = input[i];

        if (currentChar >= 'A' && currentChar <= 'Z')
        {

            output[i] = ((currentChar - 'A' + shift) % 26) + 'A';
        }

        else if (currentChar >= 'a' && currentChar <= 'z')
        {

            output[i] = ((currentChar - 'a' + shift) % 26) + 'a';
        }

        else
        {
            output[i] = currentChar;
        }
    }

    // Null-terminate the output string
    output[strlen(input)] = '\0';
}