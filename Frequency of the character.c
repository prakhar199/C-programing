#include <stdio.h>

main()
{
    char str[100];
    int count=0;

    char ch;

    printf("Enter the string:");

    fgets(str, sizeof(str), stdin);

   // printf("Enter the character whose frequency has to be measured");
    //scanf("%c", &ch);

    //char s[]={"2","3","4","5","6","7","\0"};  s[]=""

  /*  for(int i=0; str[i]!='\0'; ++i)
    {
        ch=str[i];
        count=0;
        for (int i=0; str[i]!='\0'; ++i)
        {
          if(ch==str[i])
            ++count;
        }
        printf("Frequency of %c =%d\n",ch,count);

    }*/

    for(int i=0; str[i]!='\0'; ++i)
    {
        ch=str[i];
        count=0;
        for (int i=0; str[i]!='\0'; ++i)
        {
          if(ch==str[i])
            ++count;
        }
        printf("Frequency of %c =%d\n",ch,count);

    }


}
