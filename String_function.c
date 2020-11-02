//passing string to a function

#include <stdio.h>

main()
{
    char str[50];
    printf("Enter the String :");
    fgets(str,sizeof(str),stdin);
    displayString(str);  //passing the string in the function and calling the function form the main()
}

void displayString(char str[])
{
 printf("String output:");
 puts(str);
}
