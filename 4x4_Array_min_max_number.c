//WAP in C to assign different number in a nxn dimension array and display the maximum number and minimum number of the elements.

#include <stdio.h>

main()
{
    int r;
    int c;

    printf("Enter the row size of an array:\n");
    scanf("%d", &r);
    printf("Enter the column size of an array:\n");
    scanf("%d", &c);

    int m[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
         printf("kindly input the value to be stored in an array\n");
         scanf("%d", &m[i][j]);
        }
    }

    int max=m[0][0];
    int min=m[0][0];

    for(int i=0; i<r ; i++)
    {
      for(int j=0; j<c ;j++)
      {
          if(max<m[i][j])     //
          {
            max=m[i][j];
          }
          if(min>m[i][j])
          {
            min=m[i][j];
          }
      }
    }

        printf("The maximum element of the array is : %d\n", max);
        printf("The minimum element of the array is : %d\n", min);

    }
