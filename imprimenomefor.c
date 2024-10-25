#include <stdio.h>

int main(){
    char nome[30];
    int i;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    for ( i = 0; i <= 10; i++){
        printf("%s \n", nome);
    }
    

    return(0);
}