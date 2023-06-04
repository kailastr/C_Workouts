#include<stdio.h>

int main()
{
    // to intialize pointer var in diff datatypes

    system("cls"); //clear the screen

    int num;
    char letter;

    printf("\nEnter a number and a character : ");
    scanf("%d %c",&num, &letter);


    int *IntPointer = &num; // passing the address value of the variable to the pointer
    char* charPointer = &letter;

    printf("\nThe num variable you entered is : %d", num);
    printf("\nThe pointer(IntPointer) of the integer contains the value : %p ", IntPointer);
    printf("\nWe could fetch values of a variable using a ' *IntPointer ' keyword ->  %d ", *IntPointer); 

    printf("\n");

    printf("\nThe char variable 'letter' contains the value : %c", *(&letter)); // both *ptr and *(&num) is same
    printf("\nThe pointer of 'letter' - 'charPointer' contains the value : %p ", charPointer);
    printf("\nWe could fetch values of a variable using a pointer ->  %c \n", *charPointer);

    printf("\n");

    printf("IntPointer > charPointer = %d \n", IntPointer > charPointer); // pointer Comparison
    printf("IntPointer < charPointer = %d ", IntPointer < charPointer);

    return 0;
}
