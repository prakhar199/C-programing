#include <stdio.h>

main()
{
    int n1;
    int c=0;
    printf("Enter one positive integers");

    scanf("%d", &n1);

    for(int i=1; i<=n1;i++)
    {
     if((n1%i)==0)
     {
         c++;
     }
    }

    if(c==2)
    {
        printf("The given number is prime");
    }
}
