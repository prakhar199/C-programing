#include <stdio.h>

struct person{
int age;
float weight;
};

main()
{
    struct person person1,*personptr;

    personptr=&person1;                          //


    printf("Enter age:");
    //scanf("%d",(*personptr).age);
    scanf("%d",&personptr->age);

    printf("Enter weight:");
    scanf("%f",&personptr->weight);


    printf("%d\n", person1.age);
    printf("%f\n", person1.weight);


}
