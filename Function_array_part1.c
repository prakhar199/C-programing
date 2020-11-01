//WAP in C to assign different number in a Single dimension array and display the greatest number of the elements using the funstions.

#include <stdio.h>
main()
{
    int n;
    int m[n];
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    input(n, m[n]);

}


int input(int n, int m[n])
{
    for (int i=0 ; i<n; i++)
    {
      printf("Enter an element for an array : ");
      scanf("%d",&m[i]);
}

    greatest(n,m[n]);    //greatest(m[n],n)

}

void greatest(int n,int m[n])
{
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
