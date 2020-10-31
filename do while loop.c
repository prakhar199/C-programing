//WAP to find the sum of numbers(max are 10 )
//if the user enters a negative number , the loop terminates

#include <stdio.h>
void main()
{

    int i;

    double number;
    double sum=0;

    int c=0;

    for (i=1; i<=10; i++)
    {

        printf("Enter a number\n");
        scanf("%lf", &number);

        if(number <0.0)
        {
            c++;
            printf("the entered number is negative. So please get lost!\n");
            break;
        }

        sum=sum+number;
    }
    if(c==0)
    {
      printf("Sum= %lf", sum);
    }
}
