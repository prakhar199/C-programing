//WAP to Find a Strong number

//Number can be said as a Strong number when the sum of the factorial of the individual digit is equal to the number.


//for example 145 is a strong number because   1 4 5 do the (sum of each digit factors == number itself)

#include <stdio.h>

main()
{
    int n;
    int sum=0;
    printf("Enter the number\n");

    scanf("%d", &n);

    int k;

    k=n;

    int r;

    while(n!=0)
    {
        r=n%10;   //145...5  ...14%10....4....1

        int fa;
        fa=fact(r);

        n=n/10; //14 n/10...14/10...1 .....0

        sum=sum+fa;


    }

    if(k==sum)
    {
        printf("Number is strong\n");
    }

    if(k!=sum)
    {
        printf("number is not a strong\n");
    }



}


int fact(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
