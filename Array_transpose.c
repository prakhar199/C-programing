#include <stdio.h>
main()
{
    int a[10][10];

    int r,c;

    int transpose[10][10];

    printf("Enter the rows and columns: ");

    scanf("%d %d", &r,&c);

    //Assigning the vslue to the matrix

    for(int i=0; i<r; ++i)
    {

        for(int j=0; j<c;++j)
        {
           printf("Enter the element %d %d: ", i+1, j+1);

           scanf("%d", &a[i][j]);
        }
    }

    //Display the matrix
    printf("\n ENTERED MATRIX IS \n");
    for(int i=0; i<r ; ++i)
    {

        for (int j=0; j<c;++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    //Find the  transpose og the matrix
    for(int i=0; i<r;++i)
    {
        for (int j =0; j<c;++j)
        {
            transpose[j][i]=a[i][j];
        }
    }

    //Display the transpose


    printf("\n TRANSPOSED MATRIX IS \n");
    for(int i=0; i<r ; ++i)
    {

        for (int j=0; j<c;++j)
        {
            printf("%d ", transpose[i][j]);

        }
        printf("\n");
    }

    printf("\n REVERSED TRANSPOSED MATRIX IS \n");
    for(int i=r-1; i>=0 ; --i)
    {

        for (int j=c-1; j>=0;--j)
        {
            printf("%d ", transpose[i][j]);

        }
        printf("\n");
    }
}
