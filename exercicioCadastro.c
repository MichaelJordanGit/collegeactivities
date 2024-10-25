#include <stdio.h>
int main(){
    char nome[30];
    int idade;
    int ano;
    float altura;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite altura: ");
    scanf("%f", &altura);

    ano = 2024 - idade;

    printf("\n O nome é: %s", nome);
    printf("\n A altura é %f", altura);
    printf("\n A idade é %d", idade);
    printf("\n O ano de nascimento é %d", ano);

    return(0);
}