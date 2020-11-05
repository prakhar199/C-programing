#include <stdio.h>

main()
{
    int dividend, divisor, quotient, remainder;

    printf("Enter the dividend:");
    scanf("%d", &dividend);

    printf("Enter the divisor");
    scanf("%d", &divisor);

    //compute quotient

    quotient= dividend/divisor;

    //compute the remainder

    remainder= dividend%divisor;

    printf("Qotient = %d\n", quotient);
    printf("Remainder = %d\n",remainder);
}
