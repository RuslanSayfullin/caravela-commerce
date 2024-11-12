// input.c -- ситуации, когда должен использоваться символ &
#include <stdio.h>

int main(void) {
    int age;    // переменная
    float assets;   // переменная
    char pet[30];   // строка
    printf("Введите информацию о своем возрасте, сумме в банке и любимом животном.\n");
    scanf("%d %f", &age, &assets); // здесь должен быть указан символ &
    scanf("%s", pet);
    // для строкового массива символ & не нужен
    printf("%d $%.2f %s\n", age, assets, pet);
    return 0;
}