#include<stdio.h>

int main(int argc, char const *argv[])
{
    float Cm, Inches, feet;

    system("cls");

    printf("Enter your Centimeter value : ");
    scanf("%f", &Cm);

    feet = Cm / 30.48 ;
    Inches = Cm / 2.54;

    printf("%.1f centimeter is %.1f feet \n%.2f cnetimeter is %.1f Inches ",Cm, feet, Cm, Inches);

    return 0;
}
