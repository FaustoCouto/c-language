#include <stdio.h>

/* count characters in input; 1st version */
// void main()
// {
//     long nc;

//     nc = 0;

//     while (getchar() != EOF)
//     {
//         ++nc;
//         printf("%ld", nc);
//     }
// }

/*count characters in input; 2st version*/
void main() {
    double nc;
    for (nc = 0; nc < getchar() != EOF; nc++)
    ;
    
    printf("%.0f\n", nc);
}