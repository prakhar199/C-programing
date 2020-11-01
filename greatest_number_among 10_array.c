//WAP in C to assign different number in a Single dimension array and display the greatest number of the elements.

#include <stdio.h>

main()
{
    int n;

    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int m[n];

    for (int i=0 ; i<n; i++)
    {
      printf("Enter an element for an array : ");
      scanf("%d",&m[i]);
    }

    int max=0;

    for(int i=0; i<n ; i++)
    {
        if(max<m[i])
        {
            max=m[i];
        }
    }

    printf("The greatest element of the array is : %d", max);

}
