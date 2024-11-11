/* escape.c -- использование управляющих последовательностей */
#include <stdio.h>
int main(void) {
    float salary;
    printf ("\aВведите желаемую сумму месячной зарплаты:"); 
    printf(" $_______\b\b\b\b\b\b\b");                      
    scanf("%f", &salary);
    printf("\n\t$%.2f в месяц соответствует $%.2f в год.", salary, salary *12.0); 
    printf("\rOro!\n");
    
    return 0;
}