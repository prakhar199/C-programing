//An automorphic number is a number than is contained in the square of the number itself
// for example 25 ...sqaure of 25 is 625....
//WAP to find out if the input is a automorphic or not


#include <stdio.h>
#include <math.h>
main()
{
    int n;
    printf("Kindly input the number\n");
    scanf("%d", &n);

    int c=checkAutomorphic(n);

    if(c==1)
    {
        printf("Automorphic number");
    }
    else{
       printf("NON Automorphic number");
    }


}

int checkAutomorphic(int n)
{

    int c=0,
    int r_number,
    int r_square;
    int square=n*n;

    while(n!=0)
    {
        r_number=n%10;
        r_square=square%10;

        if(r_number==r_square);
        {
            return 1;
        }
        if(r_number != r_square)
        {
            return 0;
        }
        r_number=r_number/10;
        r_square-r_square/10;
    }
}


