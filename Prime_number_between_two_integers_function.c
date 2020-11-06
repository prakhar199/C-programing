#include <stdio.h>

main()
{
    int n1,n2, i, flag;

    printf("Enter the two positive integers:");
    scanf("%d %d", &n1,&n2);

    printf("prime number between %d %d are:", n1,n2);

    for(i=n1+1; i<n2; i++)
    {
        flag=check_prime_number(i);

        if(flag==2)
       {
      printf("%d ", i);
       }
    }
}


int check_prime_number(int n)
{
    int flag=0;
    for (int j=1; j<=n; j++)
    {
        if(n%j==0)
        {
            flag++;
        }
    }
    return flag;
}
