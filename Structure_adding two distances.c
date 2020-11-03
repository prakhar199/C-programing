//WAP to add two distance (feet-inch) using structure

#include <stdio.h>

struct Distance
{
    int feet;
    float inch;
}dist1, dist2, sum;

main()
{
    printf("1st distance\n");
    printf("Enter feet:");
    scanf("%d", &dist1.feet);

    printf("Enter inch:");
    scanf("%f",&dist1.inch);

    printf("2nd distance:");
    printf("Enter feet:");
    scanf("%d", &dist2.feet);

    printf("Enter inch:");
    scanf("%f",&dist2.inch);

    sum.feet=dist1.feet+dist2.feet;

    sum.inch=dist1.inch+dist2.inch;

    //changing to feet if inch in greater than 12
    while(sum.inch >=12)
    {
       ++sum.feet;                                //13inch....1feet=12 inches....13inch...1inch + 12 inch .....1inch +1feet
       sum.inch=sum.inch-12;
    }

    printf("SUm of distances = %d %f",sum.feet,sum.inch);
}
