//Pointers with sTRING

#include <stdio.h>

main()
{
    char name[]="Harry Potter";

    printf("%c\n", *name);
    printf("%p\n", name);
    //printf("%c", name[0]);
    printf("%c\n", *(name+1));
    printf("%p\n", (name+1));
    printf("%c\n", *(name+6));
    printf("%p\n", (name+6));


    char *nameptr;

    nameptr= &name;
    printf("printing second part of program\n");
    printf("%c\n", *nameptr);
    printf("%c\n", *(nameptr+1));
    printf("%c\n", *(nameptr+6));



}
