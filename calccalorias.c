#include <stdio.h>

int main() {
    int op;
    float total;
    total = 0;

    printf("1 - Italiano 2 - Japonês 3 - Salvadorenho \n");
    printf("Informe o prato desejado: \n");
    scanf("%d", &op);
    switch (op) {
        case 1: total += 750; break;
        case 2: total += 324; break;
        case 3: total += 545; break;
    }

    printf("1 - Chá 2 - Suco de laranja 3 - Refrigerante: \n");
    printf("Informe a bebida desejada: \n");
    scanf("%d", &op);
    switch (op) {
        case 1: total += 30; break;
        case 2: total += 80; break;
        case 3: total += 90; break;
    }

    printf("O total de calorias é: %.2f \n", total);
    return 0;
}
