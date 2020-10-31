void main()
{

int n1,n2;
printf("Enter two numbers:");

scanf("%d %d", &n1, &n2);

sum(n1,n2);
diff(n1,n2);


}

void sum(int n1, int n2)
{
   int s=n1+n2;
   printf("The addition of two number is %d\n", s);
}

void diff(int n1, int n2)
{

    int d=n1-n2;
    printf("The substraction of two number is %d\n", d);
}
