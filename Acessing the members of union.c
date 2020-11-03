
#include <stdio.h>

union unionjob
{
    char name[32];   //32 bytes....
    float salary;
    int workerno;
};

main()
{
    union unionjob j;
    printf("Enter the name: ");
    scanf("%s", &j.name);
    printf("Name of the worker is: %s\n", j.name);
    //printf("Name of the worker is: %s\n", j.name);
    ////when j.salary is assigned j.name will no longer hold the value stored that is give by the user
    j.salary=123;
    printf("Salary= %f\n", j.salary);
    //when j.workerNo is assigned j.salary will no longer hold the value stored that is 123
    j.workerno=100;



    printf("Number of workers =%d\n", j.workerno);
}
