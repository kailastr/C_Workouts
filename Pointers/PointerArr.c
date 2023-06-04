#include<stdio.h>

int main(int argc, char const *argv[])
{
    system("cls");

    static int arr[5] = {5, 4, 11, 10,3}; // static keyword will help to allocate the array a static or fixed memory space untill the pgm terminates
    static char arr2[5] = {'A', 'i', 'B', 's', 'V'};

    printf("\nThe values and their corresponding address of the elements in the integer array are : \n");
    for (int i = 0; i < 5; i++)
    {
        int *intptr = &arr[i];
        printf("%d - %p , ", *intptr, intptr);
    }
    printf("\n");

    printf("\nThe values and their corresponding address of the elements in the character array are : \n");
    int *charptr = &arr2[0];
    for (int i = 0; i < 5; i++)
    {    
        printf("%c - %p , ", *charptr, charptr);
        charptr++; // the increment or decrement operator will lead the pointer to the next array index by 4 bytes
    }
    printf("\n");


    static float floatarr[5]={1.99, 109.84753, 12.454, 3.14, 369.2255};
    float *ptrFloatArr[5];

    for (int i = 0; i < 5; i++)
    {
        ptrFloatArr[i] = &floatarr[i]; // to store the address of array elements to another pointer arrayṣ 
    }

    printf("\nThe values and their corresponding address of the elements in the float array are : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.4f - %p , ", *ptrFloatArr[i], ptrFloatArr[i]);
    }
    printf("\n");
    
    

    return 0;
}
