//program to add two string using a function called strcat i.e concatination of string s using string.h header file

#include <stdio.h>
#include <string.h>

main()
{
    char str1[]="This is ";
    char str2[]="Littlecoder";
    strcat(str1,str2);
    printf("%s",str1);
}
