#include <stdio.h>
void compra(int* conta, int valor) {
    *conta -= valor;
}
void main(void) {
    int conta1, conta2 , preco;
    printf("Digite o saldo da conta 1: ");
    scanf("%d", &conta1);
    printf("Digite o saldo da conta 2: ");
    scanf("%d", &conta2);
    printf("digite o preço: ");
    scanf("%d", &preco);
    if (conta1 >= conta2) {
        compra(conta1, preco);
    } else {
        compra(conta2, preco);
    }
    printf("Saldo final da conta 1: %d", conta1);
    printf("Saldo final da conta 2: %d", conta2);
}
