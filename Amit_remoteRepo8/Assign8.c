#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "they dont stop running";

    int len = strlen(str);

    for(len ; len > 0 ; len--){

        printf("%c" ,str[len -1]);

    }

    return 0;
}
