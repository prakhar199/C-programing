//WAP in C to assign different number in a Single dimension array and display the maximum number and minimum number of the elements using the functions.
main()
{
    int n;

    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int m[n];

    for (int i=0 ; i<n; i++)
    {
      printf("Enter an element for an array : ");
      scanf("%d",&m[i]);
    }

    int max=m[0];    //{11,12,13,14,15}   max=11
    int min=m[0];    //{11,12,13,14,15}   min=11

    for(int i=0; i<n ; i++)
    {
        if(max<m[i])     //
        {
            max=m[i];
        }
        if(min>m[i])
        {
            min=m[i];
        }
    }

    printf("The maximum element of the array is : %d\n", max);
    printf("The minimum element of the array is : %d\n", min);
}
