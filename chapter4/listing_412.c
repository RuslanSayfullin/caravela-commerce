/* floatcnv.c -- несогласованные преобразования с плавающей запятой */
#include <stdio.h>

int main(void) {
    float nl = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;
    printf("%.le %.le %.le %.le\n", nl, n2, n3, n4);
    printf("%ld %ld\n", n3, n4) ;
    printf("%ld %ld %ld %ld\n", nl, n2, n3, n4) ;
    return 0;
}