#include <stdio.h>

void main() {
    int c, blankQtt;

    blankQtt = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++blankQtt;
        } else {

            if (blankQtt > 0)
            {
                putchar(' ');
                blankQtt = 0;
            }
            
            putchar(c);
        }
    }
}