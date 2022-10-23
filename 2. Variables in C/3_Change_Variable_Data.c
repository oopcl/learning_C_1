//Change data in variables 

#include <stdio.h>//stdio means standard i/o, .h refers to the header file

int main() {

    int age = 25;/*Datatype = integer, variable name = age,
     the variable has been initialized and declared*/

    printf("age:%d", age);//%d is a format specifier used to print variables in C

    age=31; //assign a new value to age variable

    printf("\nNew age: %d",age);//\n is an inter key that puts up a new line

    return 0;
}