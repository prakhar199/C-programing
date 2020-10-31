// WAP to find the average of n subject marks using an array

#include <stdio.h>
main()
{
  int marks[10];

  int i;

  int n;

  int sum=0;


  int average;


  printf("Enter the number of subjects\n");

  scanf("%d", &n);

  for(i=0;i<n;i++)
  {
     printf("Enter the marks in the %d subjects",(i+1));
     scanf("%d", &marks[i]);
  }

  //10*4=40 bytes.....4bytes  ==10

  int length=sizeof(marks)/sizeof(int); //.../10*4/4=10

  //printf("the length of the array is %d",length);

  for(i=0; i< n;i++)
  {
      sum=sum+marks[i];
  }

  average=(sum/n);

  printf("Aeverage of the %d subjects is %d",n,average);

}
