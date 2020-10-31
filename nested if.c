#include <stdio.h>
void main()
{
int n1;
int n2;
int n3;
int divide;
int sum;

int diff;

printf("enter the first number\n");
scanf("%d",&n1);

printf("enter the second number\n");
scanf("%d",&n2);

printf("enter the thrid number\n");
scanf("%d",&n3);

if ((n1<n2) && (n1==n3))
{
    //printf("yes the number2 is greater than number1");
        divide= n1/n2;
        printf("the divide of two numbers is= %d\n", divide);
        diff=n1-n2;
        printf("the subtrsction of two numbers is= %d\n", diff);
}

else if(n1>n2)
{
    //printf("yes the number1 is greater than number2");
    sum=n1+n2;
    printf("the sum of two numbers is= %d\n", sum);
    }

//else
//{
  //printf("yes the number2 equal to number1");

//}

}
