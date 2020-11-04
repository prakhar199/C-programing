#include <stdio.h>
#include <stdlib.h>

main()
{
    char num[10];

    FILE *fptr;

    fptr= fopen("C:\\Users\\Prakhar\\\Desktop\\Teaching\\file\\program.txt", "r");

    if( fptr== NULL)
{
    printf("Error! NO file named is present at the given location");
    exit(1);
}

fscanf(fptr,"%s", num);

printf("data is= %s", num);
fclose(fptr);

}
