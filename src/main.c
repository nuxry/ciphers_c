#include <stdio.h>
#include "..\lib\caesar\caesar.h"



int main(int argc, char const *argv[])
{
    const char msg[] = "I love you";
    char opt[1000] = "";

    caesar(msg, 1, opt);

    printf("%s", opt);

    return 0;
}
