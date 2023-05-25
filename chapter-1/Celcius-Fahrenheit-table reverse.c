#include <stdio.h>

int main() {
    int celcius, fahr, lower, upper, step;

    upper = 300;
    lower = 0;
    step = 20;
    celcius = upper;

    printf("\nCelsius-Fahrenheit table reverse\n");

    for (celcius; celcius >= lower; celcius = celcius - step)
    {
        printf("%3d  %3d\n", celcius, (celcius * 9/5) + 32);
    }
}