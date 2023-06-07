#include<stdio.h>

int main(int argc, char const *argv[])
{
    system("cls");
    int BasicSalary, HRA, TA, Others;
    float salary, DA, PF, IT;

    BasicSalary = 12000;
    DA = (12/100) * 12000; //12 percent of 12000
    HRA = 150;
    TA = 120;
    PF = (14/100) * 12000;//14 percent of 12000
    PF = (15/100) * 12000;//15 percent of 12000
    Others = 450;

    salary = BasicSalary + DA + HRA + TA + Others - (PF+IT);

    printf("Your Net Salary is : %.2f Rs", salary);
    return 0;
}
