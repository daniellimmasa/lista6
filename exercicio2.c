#include <stdio.h>

int main() {
    int codigo, quantidade;
    double precoUnitario, valorTotal;

    printf("Digite o codigo do lanche (100, 101, 102, 103 ou 104): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 100:
            precoUnitario = 10.10;
            break;
        case 101:
            precoUnitario = 8.30;
            break;
        case 102:
            precoUnitario = 8.50;
            break;
        case 103:
            precoUnitario = 12.50;
            break;
        case 104:
            precoUnitario = 13.25;
            break;
        default:
            printf("Código de item inválido.\n");
            return 1;
    }

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

   
    valorTotal = precoUnitario * quantidade;

    printf("Valor a ser pago e: R$ %.2lf\n", valorTotal);

    return 0;
}
