//int *p;
//int *p2;

//int n1,n2;
//int *p1,*p2;

#include <stdio.h>
main()
{
int* pc, c;
c = 5;
int d=10;
pc = &c;
c=1;
printf("%d\n", *pc);


pc=&d;
printf("%d\n",*pc);   //* dereference operator

//int v=5;

//print("var: %d\n", v);

//printf("address of var: %p", &v);

}
