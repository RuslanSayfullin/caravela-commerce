/* addemup.c -- пять видов операторов */
#include <stdio.h>

int main (void) {   /* находит сумму первых 20 целых чисел */
    int count, sum; 
    count = 0;
    sum = 0;
    while (count++ < 20) {
        sum = sum + count;
    }
    printf("sum = %d\n", sum);
    
    return 0;
}

