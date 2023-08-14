#include <stdio.h>
#include <string.h>

int main()
{
    int j, k;
    char *z = "Hello";

    k = strlen(z);
    printf("%d", k);

    // Cannot modify a string literal

    printf("%c", *z);

    for (j = 0; j <= k; j++)
    {
        printf("%s", z);
        z++;
    }

    printf("\n");
    return 0;
}

