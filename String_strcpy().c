//exploring the function strcpy()

#include <stdio.h>
#include <string.h>

main()
{
    char str1[20]="C Programing";
    char str2[20];

    strcpy(str2,str1);

    printf("%s",str2);
}
