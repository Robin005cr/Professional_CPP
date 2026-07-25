/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : function_pointer.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* LinkedIn  : https://www.linkedin.com/in/robin-cr/
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include <iostream>
using namespace std;
#include <stdlib.h>
enum
{
    EXIT = 0,
    ADD,
    SUB,
    DIV,
    MUL,
    MOD,
    POW
};

int addition(int, int);
int subtraction(int, int);
int division(int, int);
int multiplication(int, int);
int modulus(int, int);
int power(int, int);
int exitfrompgm(int a, int b);
/* Function pointer prototype */
// int (*funcptr)(int , int );



int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int division(int a, int b)
{
    return a / b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int modulus(int a, int b)
{
    return a % b;
}

int power(int a, int b)
{
    int i, result = 1;
    if (b == 1)
        result = 1;
    else
    {
        for (i = 0; i < b; i++)
            result = result * a;
    }
    return result;
}

int exitfrompgm(int a, int b)
{
    exit(0);
}

int main()
{

    /* USER CODE BEGIN  */
    /* Variable declarations and intializations */
    int a, b, choice, result = 0;
    /* Function pointer declaration and intialization */
    /* int (*funcptr)(int , int ) = &addition; //function pointer to single function */
    /*  Function name itself is address so we can write it like int (*funcptr)(int , int ) = addition; */

    int (*funcptr[])(int, int) = {exitfrompgm, addition, subtraction, division, multiplication, modulus, power};
    do
    {
        cout<<"Enter two numbers num1 & num2\n";
        scanf("%d%d", &a, &b);
        cout<<"Enter your choice \n1\taddition\n2\tsubtraction\n3\tdivision\n4\tmultiplication\n5\tmodulus\n6\tPower\n0\tExit\n";
        ;
       cin>>choice;

        result = funcptr[choice](a, b); // Calling part of function pointer pointing to array of function */

        //	result=(*funcptr[choice])(a,b); // Another way of calling function pointer pointing to array of function

        cout<<"Result is %d\n", result;

    } while (1);

    return 0;
}