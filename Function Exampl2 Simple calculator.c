void main()
{
//int addition=sum(n1,n2);
int n1;
int n2;
printf("Enter two numbers:");

scanf("%d %d", &n1, &n2);
//int addition= sum(n1,n2);
sum(n1,n2);

//int substraction;
//substraction=diff(n1,n2);
printf("The substraction of two number is %d\n", diff(n1,n2));

}

void sum(int n1, int n2)
{

   int s;
   s=n1+n2;
   printf("The addition of two number is %d\n", s);

   //return s;
}

int diff(int n1, int n2)
{

    int d;
    d=n1-n2;
    return d;
}
