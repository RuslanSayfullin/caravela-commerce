/* skiptwo.c -- пропускает первые два целых числа в потоке ввода */
#include <stdio.h>

int main(void) {
    int n;
    printf("Bвeдитe три целых числа :\n") ;
    scanf("%*d %*d %d", &n);
    printf("Последним целым числом было %d\n", n);
    return 0;
}