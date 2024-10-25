#include <stdio.h>

int main(){
    float deposito;
    float taxa;
    float rendimento;
    float total;

    printf("Informe o valor a ser depositado: ");
    scanf("%f", &deposito);
    printf("Informe a taxa de juros: ");
    scanf("%f", &taxa);

    total = deposito + (deposito*(taxa/100));
    rendimento = total - deposito;

    printf("O total é: R$%.2f", total);
    printf("O rendimento é de R$%.2f", rendimento);
    return(0);
}
