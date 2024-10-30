#include <stdio.h>

struct produto{           /*struct global acessivel em qualquer parte do programa*/
    int codigoProduto;    /*A Estruturas (structs) são usadas para agrupar dados relacionados.*/
    char descricao[50];
    float preco;
    int saldoEstoque;
};
    int main(){
    struct produto ficha;  /*declara uma variável chamada ficha do tipo struct produto. Com isso, ficha agora possui todos os campos definidos na estrutura produto e pode armazenar os dados de um produto.*/
        printf("Digite o codigo do produto: ");
        scanf("%d", &ficha.codigoProduto);
        printf("Digite a descriçao do produto: ");
        scanf("%s", ficha.descricao);
        printf("Digite o preço do produto: ");
        scanf("%f", &ficha.preco);
        printf("Digite o saldo em estoque: ");
        scanf("%d", &ficha.saldoEstoque);
        
        printf("Codigo: %d \n", ficha.codigoProduto);
        printf("Descriçao: %s \n", ficha.descricao);
        printf("Valor: %.2f \n", ficha.preco);
        printf("Saldo em estoque: %d \n", ficha.saldoEstoque);
        return(0);
};

