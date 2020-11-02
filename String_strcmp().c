//Comparing two string by using stcmp() function that is stored in string.h header file

#include <stdio.h>
#include <string.h>

main()
{
 char str1[]="abcd", str2[]="abCd", str3[]="abcd";
 int result;
//compare strings
 result=strcmp(str1,str2); //value 1
 printf("%d\n", result);

 printf("%d",(strcmp(str1,str3)));  //value 0

}
