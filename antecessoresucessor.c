#include <stdio.h>

int main(){
    int numero;
    int antecessor;
    int sucessor;

    printf("Digite um numro: ");
    scanf("%d", &numero);

    antecessor = numero -1;
    sucessor = numero + 1;

    printf("\n O antecessor de %d é: %d", numero, antecessor);
    printf("\n O sucessor de %d é: %d", numero, sucessor);

    return(0);

}