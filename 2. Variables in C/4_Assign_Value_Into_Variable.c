//Assign variable to anothe variable

#include <stdio.h>//stdio means standard i/o, .h refers to the header file

int main() {

    int firstNumber = 33;/*Datatype = integer, variable name = firstNumber,
     the variable has been initialized and declared*/

    printf("firstNumber: %d",firstNumber);
    //%d is a format specifier used to print variables in C

    int secondNumber = firstNumber;

    printf("\nsecondNumber: %d", secondNumber);//\n is an inter key that puts up a new line 

    return 0;
}

