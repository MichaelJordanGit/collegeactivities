#include <stdio.h>

int main(){

    float peso;
    float altura;
    char sexo;

    printf("informe seu sexo [M/F]:\n");
    scanf("%c", &sexo);
    printf("informe seu peso:\n");
    scanf("%f", &peso);
    printf("informe sua altura:\n");
    scanf("%f", &altura);

    if ((sexo == 'M')||(sexo == 'm')){
        peso = (72.7*altura)-58;
    }
    else{
        if ((sexo == 'F')||(sexo == 'f'))
        peso = (62.1*altura)-44.7;
    }
    printf("Seu sexo é %c \n", sexo);
    printf("sua altura é %.2f \n",altura);
    printf("o peso ideal é %.2f \n", peso);  

    return(0);
}