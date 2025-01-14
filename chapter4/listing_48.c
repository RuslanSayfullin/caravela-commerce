// Программа floats.c -- некоторые комбинации для типов с плавающей запятой
#include <stdio.h>

int main(void) {
    const double RENT = 3852.99; // константа, объявленная посредством const
    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.lf*\n", RENT);
    printf ("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    return 0;
}