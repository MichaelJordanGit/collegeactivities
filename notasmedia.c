#include <stdio.h>

int main(){

    float nota;
    float somaNotas;
    float media;

    int codigoAluno;
    int rep;
    int numeroNotas;
    int numeroAprovados;
    int numeroReprovados;

    numeroAprovados=0;
    numeroReprovados=0;

    printf("Informe o numero de notas da disciplina:\n "); /*pede o numero de notas da disciplina*/
    scanf("%d", &numeroNotas); /*le o numero de notas da disciplina*/

    do{ /*faça isso*/
        printf("Informe o codigo do aluno:\n ");    /*solicita o nome do aluno*/
            scanf("%d", &codigoAluno); /*le o nome do aluno*/
            somaNotas = 0; /*contador iniciando em zero*/
             if (codigoAluno !=0){ /*verifica o codigo do aluno*/
            media = somaNotas/numeroNotas; /*calcula a media*/
            if (media>=6){ /*verifica a media*/
                numeroAprovados ++; /*incrementa um aluno */

            }
            else{
                numeroReprovados ++; /*incrementa um aluno*/
            }
        for (rep = 1; rep <= numeroNotas; rep++){  /* repetiçao inicia em 1, repetiçao tem que ser menor que o numero de notas , incrementa uma repetiçao*/
            
                printf("Informe a %dª nota do aluno: \n",rep);
                scanf("%f", &nota);
                somaNotas = somaNotas + nota; /*a soma das notas vai somar a nota atual com a somatoria das notas anteriores*/
            }
       
            printf("O numero de aprovados é: %d \n", numeroAprovados);
            printf("O numero de reprovados é: %d\n", numeroReprovados);
        }
        
    } 
    while (codigoAluno !=0); /*enquanto for isso*/
            
    return(0);
}