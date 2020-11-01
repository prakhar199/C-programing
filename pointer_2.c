#include <stdio.h>

int main()
{

    int *pc,c;
    c=22;
    printf("Address of c : %p \n ", &c);
    printf("value of c: %d \n\n" , c);

    pc=&c;
    printf("Address of c : %p \n ", pc);
    printf("value of c: %d \n\n" , *pc);

    c=13;
    printf("Address of c : %p \n ", &c);
    printf("value of c: %d \n\n" , c);

    pc=&c;
    printf("Address of c : %p \n ", pc);
    printf("value of c: %d \n\n" , *pc);
}
