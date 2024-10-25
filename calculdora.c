#include <stdio.h>

int main(){
    float num1;
    float num2;
    float resultado;
    int opcao;


    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &num2);
    printf("\n 1 - Soma \n 2 - Subtrai \n 3 - Multiplica \n 4 - Divide \n ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: 
        resultado = num1 + num2;
        printf("A soma é: %.2f", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("A subtraçao é: %.2f", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("A multiplicaçao é: %.2f", resultado);
        break;
    case 4:
        resultado = num1 / num2;
        printf("A divisao é: %.2f", resultado);
        break;
    default:
        printf("Opçao invalida \n");
        printf("Tente Novamente \n");

        break;
    }
    return(0);


}