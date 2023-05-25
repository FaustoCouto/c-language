#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main() {
    int celcius, fahr;
    
    celcius = LOWER;

    printf("\nCelsius-Fahrenheit table\n");

    while (celcius <= UPPER)
    {
        fahr = (celcius * 9/5) + 32; /* (0°C × 9/5) + 32 = 32°F */
        
        printf("%3d  %3d\n", celcius, fahr);

        celcius = celcius + STEP;
    }
}