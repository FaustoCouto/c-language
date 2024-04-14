#include <stdio.h>

void main() {
    int c, nl, letter;

    nl = letter = 0;


    while ((c = getchar()) != EOF)
    {

        if (nl == 0 && letter != 1)
        {
            printf("%d: ", ++nl);
            letter = 1;
        }
        
        if (c == ' ' || c == '\t') {
            ++nl;
            putchar('\n');
            printf("%d: ", nl);
        } else {
            putchar(c);
        }
    }
}