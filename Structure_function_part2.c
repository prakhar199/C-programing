#include <stdio.h>

struct student
{
    char name[50];
    int age;
};


struct student getInformation();
void display(struct student s1);

void main()
{
    struct student s;

    s=getInformation();
    display(s);
}

struct student getInformation()
{
    struct student s1;
     printf("Enter the name: ");
     scanf("%s",&s1.name);
      printf("Enter the age: ");
      scanf("%d",&s1.age);

      return s1;
};

void display(struct student s1)
{
    printf("\nDisplaying the data stored in structure: ");
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
}
