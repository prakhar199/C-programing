#include <stdio.h>

main()
{
    int number1,number2,sum;

    printf("Enter two integer:");

    scanf("%d %d", &number1,&number2);

    //calculating

    sum=number1+number2;

    printf("%d+%d=%d", number1 , number2, sum);    //2 3
}
