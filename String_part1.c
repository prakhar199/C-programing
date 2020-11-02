//String a ="";.............java

//char c[]="c string";..............C language

#include <stdio.h>
main()
{
    char name[20];
    printf("Enter the name:");

    fgets(name, sizeof(name), stdin);

    printf("your name is %s\n", name);

    //puts(name);//.....to display the string read by fgets function

    //char a='a';
    //printf("the character is %c\n", a);


}
