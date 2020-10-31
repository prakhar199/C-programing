#include <stdio.h>

int main()
{
    char b[100];
    char c[100];
    printf("Enter your name\n");
    scanf("%s",&b);
    //printf("Enter your last name\n");
    scanf("%s",&c);
    printf("Your name is %s %s",b,c);
	//printf("Your name is %s %s",b,c);
	return 0;
}
