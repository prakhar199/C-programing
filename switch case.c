//Program to create a simple tiny calculator


#include <stdio.h>

main()
{
    char operator;

    double n1, n2,sum,diff;

    printf("Enter the operator ( +,-,*,/,%): ");

    scanf("%c", &operator);       //+  //a,b //a+b

    printf("Enter the two operand:");

    scanf("%lf %lf", &n1, &n2);

    switch(operator)
    {
    case '+':
        sum=n1+n2;
        printf("The sum of the numbers are: %lf",sum);
        break;

    case '-':
         diff=n1-n2;
         printf("The diff of the numbers are: %lf",sum);
         break;

    default:
         printf("Error! operator is invalid");
         //break;
    }

}
