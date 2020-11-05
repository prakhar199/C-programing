#include <stdio.h>

main()
{
    double num;
    printf("Enter the number:");
    scanf("%lf", &num);

    if(num==0.0)
    {
        printf("You have entered 0");
            }
    else if(num<0.0)
    {
       printf("You have entered a negative number");
    }
    else if(num >0.0)
    {
        printf("You have entered a positive number");
    }
}
