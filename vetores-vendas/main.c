#include <stdio.h>
#define TAMANHO 5

int main(void)
{
    int valores[TAMANHO];
    long long soma = 0;
    int i;

    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o valor inteiro do dia %d: ", i + 1);
        if (scanf("%d", &valores[i]) != 1) {
            printf("Entrada invalida. Informe numeros inteiros.\n");
            return 1;
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        soma += valores[i];
    }

    printf("\nElementos do vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Dia %d: %d\n", i + 1, valores[i]);
    }
    printf("Soma total: %lld\n", soma);

    return 0;
}
