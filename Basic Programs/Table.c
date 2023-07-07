#include <stdio.h>
#include <math.h>
void main()
{
    int row, col, limit, res;    // variable declaration
    printf("\nEnter the limit"); // input from user
    scanf("%d", &limit);

    // Nested fo loop
    for (row = 1; row <= 10; row++)
    {
        for (col = 1; col <= limit; col++)
        {
            res = row * col;
            printf("%4d", res);
        }
        printf("\n");
    }
}
