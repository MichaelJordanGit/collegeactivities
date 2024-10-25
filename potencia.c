#include <stdio.h>
#include <math.h>
int main(){
    int valor1;
    int valor2;
    int total;
    printf("Digite um numero: ");
    scanf("%d", &valor1);
    printf("Digite outro numero: ");
    scanf("%d", &valor2);

    total = pow(valor1,valor2);

    printf("O resultado %d elevado a %d é: %d",valor1, valor2, total);
    return(0);
}