#include <stdio.h>
#include <math.h>
int main(){
    int num;

    printf("Digite um numero");
    scanf("%d", &num);

    if(num % 5==0){
        printf("O numero %d é divisivel por 5", num);
    }
    else{
        printf("O numero nao é divisivel por 5");
    }
    return(0);
}