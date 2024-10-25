#include <stdio.h>
#include <math.h>

int main(){
    
    int num;
    float raiz;

    printf("Digite um numero:");
    scanf("%d", &num);
    
    if(num % 2==0){
        raiz=sqrt(num);
    printf("\nSeu numero é par!"); 
    printf("\nA raiz quadrada de %d é: %.3f", num, raiz);
    }
    else{
        printf("O seu numero nao é par");
    }

    return(0);

}