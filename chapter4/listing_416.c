/* varwid.e -- использование поля вывода переменной ширины */
#include <stdio.h>
int main(void) {
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;
    printf ("Bвeдитe ширину поля:\n");
    scanf("%d", &width) ;
    printf ("Значение равно: %*d:\n", width, number);
    printf("Тепенрь введите ширину и точность:\n") ;
    scanf("%d %d", &width, &precision);
    printf("Bec = %*.*f\n", width, precision, weight);
    printf("Гoтoвo!\n");
    return 0;
}