//WAP in C language to store a temperature of two cities of a week and print it on the terminal

#include <stdio.h>
const int city=2;

const int week=7;

int main()
{


    int temperature[city][week];  //row --2 city,column--week---7 days

    for(int i=0; i<city; i++)
    {
        for(int j=0; j<week; j++)
        {
            printf("City %d, Day %d : ", i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }

    printf("\nDisplaying the values \n");

    for(int i =0; i<city; i++)
    {

        for (int j =0; j<week;j++)
        {
            printf("City %d, Day %d = %d \n", i+1, j+1, temperature[i][j]);
        }
    }
}
