#include <stdio.h>

main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    //sizeof evalutes the size of the variable

    printf("Size of int:%d bytes\n", sizeof(intType));
    printf("Size of float:%d bytes\n", sizeof(floatType));
    printf("Size of double:%d bytes\n", sizeof(doubleType));
    printf("Size of char:%d bytes\n", sizeof(charType));
}
