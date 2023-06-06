#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{

    system("cls"); //to clear the terminal Window 
    int radius;
    printf("Enter the radius of your circle (Cm): ");
    scanf("%d",&radius);

    float area = 3.14 * (radius * radius); //Area of a circle = pi * r^2
    float perimeter = 2 * 3.14 * radius; //Perimeter of a circle =2 * pi * r

    printf("The Area of the Circle is %.2f Cm \nPerimeter of the Circle is %.2f Cm .", area, perimeter); //.2f is a modifier that helps to print only 2 decimal places

    return 0;
}
