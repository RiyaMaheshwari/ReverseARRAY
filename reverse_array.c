#include<stdio.h>

void arrayRev(int arr[])
{
    int temp;
    for(int i = 0; i<7/2; i++)
    {
        // swap item i with item (6-i)
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
}

void arrayPrint(int arr[])
{
    for(int i = 0; i<7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    printf("Before reversing the array\n");
    arrayPrint(arr);
    /*for(int i = 0; i<7; i++)
    {
        printf("The value od element %d is %d\n", i, arr[i]);
    }*/
    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr);
    /*for(int i = 0; i<7; i++)
    {
        printf("The value od element %d is %d\n", i, arr[i]);
    }*/
    return 0;
}