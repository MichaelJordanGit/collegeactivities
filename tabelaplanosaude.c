#include <stdio.h>

int main(){
    char nome[30];
    int idade;

    printf("Informe seu nome: ");
    scanf("%s", nome);
    printf("Informe sua idade: ");
    scanf("%d",&idade);

    if (idade <= 18){
        printf("%s seu plano de saude custa R$50,00 mensais", nome);
    }
    if ((idade >= 19) && (idade <=29)){
        printf("%s seu plano de saude custa R$70,00 mensais", nome);
    }
    if((idade>=30) && (idade <=45)){
        printf("%s Seu plano de saude custa R$90,00 mensais", nome);
    }
    if((idade >=46) && (idade <=65)){
        printf("%s seu plano de saude custa R$130,00 mensais", nome);
    } 
    else{
        printf("%s seu plano mensal custa R$170,00", nome);
    }
    return(0);

}