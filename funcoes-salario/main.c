#include <stdio.h>

double calcular_salario_bruto(double valor_hora, double horas)
{
    return valor_hora * horas;
}

double calcular_desconto(double salario_bruto)
{
    return salario_bruto * 0.09;
}

double calcular_salario_liquido(double salario_bruto, double desconto)
{
    return salario_bruto - desconto;
}

int main(void)
{
    double valor_hora, horas;
    double bruto, desconto, liquido;

    printf("Valor da hora de trabalho (R$): ");
    if (scanf("%lf", &valor_hora) != 1 || valor_hora < 0) {
        printf("Valor da hora invalido.\n");
        return 1;
    }

    printf("Horas trabalhadas no mes: ");
    if (scanf("%lf", &horas) != 1 || horas < 0) {
        printf("Quantidade de horas invalida.\n");
        return 1;
    }

    bruto = calcular_salario_bruto(valor_hora, horas);
    desconto = calcular_desconto(bruto);
    liquido = calcular_salario_liquido(bruto, desconto);

    printf("\nSalario bruto: R$ %.2f\n", bruto);
    printf("Desconto (9%%): R$ %.2f\n", desconto);
    printf("Salario liquido: R$ %.2f\n", liquido);

    return 0;
}
