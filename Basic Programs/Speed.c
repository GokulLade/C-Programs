#include <stdio.h>

void main()
{
    int spd;    // Variable Decleraction
    
    printf("Enter the speed 40 60 80");    //Input from user
    scanf("%d", &spd);

    switch (spd)
    {
    case 40:
        printf("too slow");
        break;

    case 60:
        printf("too fast");
        break;

    case 80:
        printf("very fast");
        break;

    default:
        printf("Invalid Speed");
    }
}
