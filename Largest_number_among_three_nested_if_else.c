#include <stdio.h>

main()
{
double n1,n2,n3;

printf("Enter the three numbers: ");
scanf("%lf %lf %lf",&n1,&n2,&n3);

if(n1>n2)
{
    if(n1>n3)
    {
        printf("%.2lf is the largest", n1);
    }
}




if(n2>n1)
{
    if(n2>n3)
    {
        printf("%.2lf is the largest", n2);
    }
}


if(n3>n2)
{
    if(n3>n1)
    {
        printf("%.2lf is the largest", n3);
    }
}

}
