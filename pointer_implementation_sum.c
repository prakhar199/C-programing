#include <stdio.h>

main()
{
    int x[6];
    int sum=0;

    printf("Enter the 6 elements for an array:\n");
    for(int i=0; i<6 ;i++)
    {
        scanf("%d", x+i);       //&x[i] ....  x+i .....    *(x+i)......  &x[i]

        sum=sum+ *x+i;
    }
    printf("sum= %d\n", sum);
    for (int i =0; i<6;i++)
    {

        printf("Address: %p",x+i);
        printf("  value: %d\n",x[i]);
    }
}
