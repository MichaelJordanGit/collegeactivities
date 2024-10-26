#include <stdio.h>

int main(){
    char nome[30];
    int rep;

    printf("\n Informe seu nome: ");
    scanf("%s",nome);

    rep = 0;

    do
    {
        printf("%d - %s \n", rep , nome);
        rep ++;
    } while (rep != 10);
    
    
    return(0);
}