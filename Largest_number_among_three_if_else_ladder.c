//using if..else if ladder statement
#include <stdio.h>

main()
{
    double n1,n2,n3;
    printf("Enter three different numbers:");
    scanf("%lf %lf %lf", &n1, &n2,&n3);

    //if n1 is greater than both n2 and n3, n1 is largest
    if(n1>n2 && n1>n3)
    {
        printf("%.2lf is the largest number",n1);
    }
    else if(n2>n1 && n2>n3)
    {
        printf("%.2lf is the largest number",n2);
    }
    else if(n3>n2 && n3>n1)
    {

        printf("%.2lf is the largest number",n3);
    }
}
