#include <stdio.h>
int main(){
    float base1;
    float base2;
    float altura;
    float area;

    printf("Valor da base 1: ");
    scanf("%f", &base1);
    printf("Valor base 2: ");
    scanf("%f", &base2);
    printf("Informe a altura: ");
    scanf("%f", &altura);

    area =((base1 + base2)*altura)/2;

    printf("A area do trapezio tem: %.2f", area);
    return(0);
}