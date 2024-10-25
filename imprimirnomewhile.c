#include <stdio.h>

int main(){
char nome [30];
int rep;

printf("Digite seu nome: ");
scanf("%s", nome);

rep = 0;

while (rep != 10){
    printf("\n %d - %s", rep, nome);
    rep++;
}

return(0);
}