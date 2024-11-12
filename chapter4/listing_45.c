// defines.c — использует именованные константы из файла limit.h и тип float.
#include <stdio.h>
#include <limits.h> // пределы для целых чисел
#include <float.h>  // пределы для чисел с плавающей запятой

int main(void) {
    printf("Некоторые пределы чисел для данной системы:\n");
    printf("Наибольшее значение типа int: %d\n", INT_MAX) ;
    printf("Наименьшее значение типа long long: %lld\n", LLONG_MIN);
    printf("B данной системе один байт = %d битов.\n", CHAR_BIT);
    printf ("Наибольшее значение типа double: %e\n", DBL_MAX);
    printf("Наименьшее нормализованное значение типа float: %e\n", FLT_MIN);
    printf( "Toчнocть значений типа float = %d знаков\n", FLT_DIG) ;
    printf( "Разница между 1.00 и минимальным значением float, которое больше 1.00 = %e\n", FLT_EPSILON);
    return 0;
}