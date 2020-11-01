#include <stdio.h>

main()
{
    int x[6];

    int sum=0;
    int *pc;

    printf("Enter the 6 elements for an array:\n");
    for(int i=0; i<6 ;i++)
    {

        pc=&x[i];
        scanf("%d",x+i);       //&x[i] ....  x+i .....    *(x+i)......

        sum=sum+ *x+i;  //x[n]   //printf(x[n])...(x+n)
    }
    printf("sum= %d", sum);

}
