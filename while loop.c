#include <stdio.h>

//WAP TO RESERVE A GIVEN NUMBER.

//WAP TO FIND A PLINDROME NUMBER

void main()
{

    int n;

    int reverse=0;                                       //step1     //1001//   0*10+1=1----   // n/10.....1001/10....100

    int remainder;                                      // step2    //100  //   1*10+ 0= 10    // n/10....100/10 ...10

    int number;                                         //step3     //

//Input from the user                        1001 1001

    printf("Enter the number:");
    scanf("%d", &n);

    number=n;                                                //step 1   // 1394%10=4 //   0*10+4=4 //1349/10=139

    while(n!=0)
    {                                                       //step 2   // 139%10=9  //  4*10+9=49   //139/10=13
        remainder=n%10;

        reverse = (reverse*10)+remainder;                  //step3    // 13%10=3   //   49*10+3=493  //13/10=1

        n=n/10;                                             //step4    //1%10       //493*10+1=4931  // 1/10=0

    }

     //printf("reverse of the nuber is %d", reverse);

     if(reverse==number)
     {
         printf("The number is palindrome");
     }
     else{
        printf("The number is not palindrome");
     }
}
