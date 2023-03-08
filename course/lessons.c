#include <stdio.h>

int main(void)
{
    int var_i = -1208764352;
    printf("value = %lld\n", var_i);
    printf("value = %x\n", var_i);
    printf("value = %f\n", var_i);

    short var_h = 100;
    int var_k = 1024;
    long double var_ld = 0.5;

    printf("var_h = %d, var_i = %d, %Lf\n", var_h, var_k, var_ld);
    

    int var_m = -1208;
    double var_d = 54.34675;

    printf("[%-10d]\n", var_m);
    printf("[%-10f]\n", var_d);
    
    return 0;
}