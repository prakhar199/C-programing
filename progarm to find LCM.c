#include <stdio.h>
main()
{
    int n1,n2,i,hcf,lcm;

    printf("Enter the two integers");

    scanf("%d %d" , &n1,&n2);

    for(int i=1; i<=n1 && i<=n2; i++)
    {
        if((n1%i)==0 && (n2%i)==0)
        {
         hcf=i;
        }
    }

    //  HCF x LCM = 1st number X 2nd number
    // LCM= 1st number x 2number /HCF

    lcm=(n1*n2)/hcf;

    printf("LCM OF THE NUMBERS %d %d is %d\n", n1,n2,lcm);
    printf("HCF OF THE NUMBERS %d %d is %d\n", n1,n2,hcf);

}
