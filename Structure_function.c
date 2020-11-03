#include <stdio.h>

struct student{

char name[50];
int age;
};

main()
{
    struct student s1;
    struct student s2;

    printf("Enter the name of first student: ");
    //fgets(s1.name, sizeof(s1.name),stdin);
    scanf("%s", &s1.name);
    printf("Enter the age: ");
    scanf("%d", &s1.age);



    printf("Enter the name of second student: ");
    //fgets(s2.name, sizeof(s2.name),stdin);
    scanf("%s",&s2.name);
    printf("Enter the age: ");
    scanf("%d", &s2.age);

    display(s1,s2);
}

void display(struct student s1,struct student s2)
{
    printf("\nDisplaying the data stored in structure: ");
    printf("Name %s\n",s1.name);
    printf("Name %s\n",s2.name);
}
