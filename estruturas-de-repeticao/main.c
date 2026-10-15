#include <stdio.h>

int main(void)
{
    int numero;
    int soma = 0;

    printf("Digite um inteiro (0 para encerrar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma += numero;
        printf("Digite um inteiro (0 para encerrar): ");
        scanf("%d", &numero);
    }

    printf("Soma total: %d\n", soma);

    return 0;
}
