#include <stdio.h>
void main()
{

    int i;

    double number;
    double sum=0;

    int c=0;

    for (i=1; i<=10; i++)
    {

        printf("Enter a number %d:", i);
        scanf("%lf", &number);

        if(number <0.0)
        {

            printf("the entered number is negative.");
            break;
        }

        sum=sum+number;
    }

      printf("Sum= %lf", sum);

}
