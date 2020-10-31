//WAP to find prime numbers between two integers

#include <stdio.h>
main()
{
    int n1;
    int n2;
    printf("Enter two positive integers:");      //1 to 10  ...1 and 10 in our loop

    scanf("%d %d", &n1, &n2);

    for(int i=n1+1; i< n2; i++)
    {
       int prime= check_prime_number(i);//check if number is prime or not

       if(prime==1)
       {
           printf("The number %d is prime\n", i);
       }
       if(prime==0)
       {
           printf("The number %d is not prime\n", i);

       }

    }

}


int check_prime_number(int n)
{
    int c=0;
    for(int i=1; i<=n;i++)
    {
     if((n%i)==0)
     {
         c++;
     }
    }

    if(c==2)
    {
        //printf("The given number is prime");
        return 1;
    }

    if(c<2)
    {
        return 0;
    }

}

