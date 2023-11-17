#include "reverse.h"
#include <string.h>

void reverse(const char *message, char *result)
{
    // Loop to reverse the message
    for (int i = strlen(message) - 1, j = 0; i >= 0; i--, j++)
    {
        // Concatenate characters in reverse order
        result[j] = message[i];
        result[j + 1] = '\0'; // Null-terminate the result string
    }
}
