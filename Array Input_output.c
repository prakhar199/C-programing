//Program to take 5 number from user and store them in a array
//Print the elements of  an array

#include <stdio.h>

main()
{
    int values[5];

    for (int i=0; i<5;i++)
    {
        printf("Enter the %d values to be stored in an array: \n",(i+1));
        scanf("%d", &values[i]);
    }


    for(int i=0; i < 5; i++)
    {
      printf("%d\n",values[i]);

    }

}
