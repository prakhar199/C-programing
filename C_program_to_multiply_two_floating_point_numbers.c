#include <stdio.h>

main()
{
    double a,b,product;

    printf("Enter two numbers:");

    scanf("%lf %lf", &a, &b);

    //calculating the products

    product=a*b;

    //result up to 2 decimal point is displayed using %.2lf

    printf("Product = %.3lf", product);
}
