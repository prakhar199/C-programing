#include <stdio.h>
#include <math.h>
main()
{
double number1, number2, sum, divide, mul, diff, Power, roundd, truncc, sinn, remain;

printf("Enter two integers:");

scanf("%lf %lf", &number1, &number2);

sum=number1+number2;

divide= number1/number2; //

remain=number1%number2;

mul=number1*number2;

diff=number1-number2;

Power= pow(number1,number2);

truncc=trunc(Power);

roundd = round(number1);

sinn=cos(number1);

printf("the sum of two numbers is= %lf\n", sum);

printf("the divide of two numbers is= %lf\n", divide);

printf("the multiplication of two numbers is= %lf\n", mul);

printf("the subtrsction of two numbers is= %lf\n", diff);

printf("the power is= %lf\n", Power);

printf("the trucated number is= %lf\n", truncc);

printf("the round off number1 is= %lf\n", roundd);

printf("the cos number1 is= %lf\n", sinn);

printf("the remainder is = %lf\n", remain);
}

