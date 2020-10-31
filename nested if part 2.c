#include <stdio.h>

//WAP the to check if a person is eligible to voter or not. Condition for eligibilty is - person should be of 18 years old and must be having an voter id card.

void main()
{

    int age;
    int  voter_id;
    printf("enter the age:");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("Do you have a voter id card?\n Type 1 - if you have it\n Type 2- if you dont have it\n" );
        scanf("%d", &voter_id);

        if( voter_id==1)
        {
           printf("yes, you are eligible vote");
        }

        else{
                printf("NO, you are not eligible vote");

        }


    }

    if(age<18)
    {

        printf("NO, you are not eligible vote");

    }
}
