//Difference between Structures and union

#include <stdio.h>

struct structjob
{
    char name[32];    //4+4+32  =40bytes
    float salary;
    int workerno;
}sjob;

union unionjob
{
    char name[32];   //32 bytes....
    float salary;
    int workerno;
}ujob;

main()
{
    printf("size of union = %d bytes\n", sizeof(ujob));
    printf("size of structure = %d bytes",sizeof(sjob));
}
