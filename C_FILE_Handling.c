#include <stdio.h>

#include <stdlib.h>

main()
{
char num[10]="Prakhar";
FILE *fptr;

fptr= fopen("C:\\Users\\Prakhar\\Desktop\\Teaching\\file\\program.txt", "a"); //append the value in a file
//fptr= fopen("C:\\Users\\Prakhar\\Desktop\\Teaching\\file\\program.txt", "w");//writing text file
//fptr= fopen("C:\\Users\\Prakhar\\Desktop\\Teaching\\file\\binary.bin", "wb");//wrinting binary file
//fptr= fopen("C:\\Users\\Prakhar\\Desktop\\Teaching\\file\\binary.bin", "r+");  //reading and writing on file


if( fptr== NULL)
{
    printf("Error! NO file named is present at the given location");
    exit(1);
}

printf("Enter the number you want to write in file");
scanf("%s", &num);

fprintf(fptr,"%s", num);
fprintf(fptr,"\n", num);  //for writing on a new line

fclose(fptr);
}
