#include <stdio.h>

main()
{
    int first,second,temp;

    printf("Enter the first number");
    scanf("%d", &first);
    printf("Enter the second number");
    scanf("%d", &second);

    //value of the first is assinged to the temp

    temp=first;

    //value of second number is assinged to first
    first=second;

    //value of temp is assinged to second

    second=temp;

    printf("\n After swaping the first number = %d \n", first);
    printf("\n After swaping the second number = %d \n", second);


}
