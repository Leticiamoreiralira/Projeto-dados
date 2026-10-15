# Funções: cálculo de salário por hora

Atividade de Algoritmos e Programação Estruturada — Anhanguera.
Unidade 4: Funções e Passagem de Parâmetros. Aula 1: Funções.

## Objetivo

Solicitar o valor da hora e as horas trabalhadas no mês, calcular o salário bruto, aplicar desconto fixo de 9% e apresentar o salário líquido.

## Funções exigidas pelo roteiro

| Função | Parâmetros | Retorno |
|---|---|---|
| calcular_salario_bruto | valor da hora, quantidade de horas | valor da hora × horas |
| calcular_desconto | salário bruto | salário bruto × 0,09 |
| calcular_salario_liquido | salário bruto, desconto | salário bruto − desconto |

O desconto de 9% é a regra do exercício.

## Executar

No OnlineGDB, selecione C, copie `main.c` e clique em Run. Informe o valor da hora e depois as horas trabalhadas. Use ponto como separador decimal.

Com GCC:

```bash
gcc -std=c11 -Wall -Wextra main.c -o salario
./salario
```

## Testes

| Valor/hora | Horas | Bruto | Desconto | Líquido |
|---:|---:|---:|---:|---:|
| 50,00 | 160 | 8.000,00 | 720,00 | 7.280,00 |
| 25,50 | 120,5 | 3.072,75 | 276,55 | 2.796,20 |
| 50,00 | 0 | 0,00 | 0,00 | 0,00 |

O programa usa double para permitir entradas decimais. Os cálculos mantêm a precisão interna e são exibidos com duas casas decimais. Entradas negativas ou que não possam ser lidas como número são recusadas.
