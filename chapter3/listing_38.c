/* typesize.c -- выводит размеры типов */
#include <stdio.h>
int main (void)
{
    /* В стандарте с99 для размеров предусмотрен спецификатор %zd */
    printf("Тип int имеет размер %zd байт(ов).\n", sizeof(int));
    printf( "Тип char имеет размер %zd байт(ов).\n", sizeof(char));
    printf("Тип long имеет размер %zd байт(ов). \n", sizeof(long));
    printf("Тип long long имеет размер %zd байт(ов). \n", sizeof(long long));
    printf("Tип float имеет размер %zd байт(ов) .\n", sizeof(float)) ;
    printf("Tип double имеет размер %zd байт(ов) .\n", sizeof(double)) ;
    printf("Тип long double имеет размер %zd байт(ов).\n", sizeof(long double)) ;
    return 0;
}