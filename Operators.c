#include<stdio.h>

int main(int argc, char const *argv[])
{
    //This is simple a pgm to know the precedence of operators
    printf("The Operators according to the precedence/prority is : \n1.Arithematic \n2.Comparison \n3.Logical \n");
    printf("Therefore the Output for the expression \n (4-2*9/6<=3 && (10*2/4-3>3 || (1<5 && 8>10))) is %d", (4-2*9/6<=3 && (10*2/4-3>3 || (1<5 && 8>10))));

    return 0;
}
