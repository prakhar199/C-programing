//WAP to find the sum of numbers(max are 10 )
//if the user enters a negative number , the loop terminates and its is not added to the result i.e sum


#include <stdio.h>

double main()
{
    double number,sum;

    double c=0.0;

    for(int i =1 ; i <=10; i++)
    {
        printf("Enter the number %d: ", i);
        scanf("%lf", &number);

        if(number<0.0)
        {
            printf("the entered number is negative.\n");
            continue;
        }

        sum=sum+number;  //sum=sum+number //sum+=number

    }

    printf("sum = %lf", sum);
    return 0;
}
