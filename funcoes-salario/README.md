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

## O que compreendi da matéria

Uma função recebe os dados de que precisa pelos parâmetros e devolve o resultado com `return`. Neste exercício, a saída de uma função alimenta a próxima: o bruto é usado para calcular o desconto, e os dois valores são usados para obter o líquido.

Separar os cálculos da leitura e da impressão facilita conferir cada etapa. Também permite reaproveitar as mesmas funções em outra interface, sem mudar as fórmulas.

## Complemento técnico

### Conferência dos resultados

Além de comparar as saídas com os resultados esperados, conferi se o bruto corresponde à soma do desconto com o líquido nos três cenários executados:

| Cenário | Conferência dos valores exibidos | Resultado |
|---|---|---|
| Inteiros | 8.000,00 = 720,00 + 7.280,00 | Confere |
| Decimais | 3.072,75 = 276,55 + 2.796,20 | Confere |
| Zero horas | 0,00 = 0,00 + 0,00 | Confere |

Essa igualdade ajuda a identificar diferenças entre os valores. Ela complementa a verificação das fórmulas e da taxa de 9%; sozinha, não prova que a taxa foi aplicada corretamente.

### Precisão e arredondamento

`double` representa números em ponto flutuante binário; alguns valores decimais são aproximados. O formato `%.2f` controla a apresentação com duas casas, mas não altera o valor armazenado. No cenário decimal, o desconto matemático é 276,5475 e a saída é 276,55.

Para um sistema financeiro de produção, seria necessário definir a regra de arredondamento e avaliar uma representação em centavos ou uma biblioteca decimal. Aqui foi mantida uma implementação simples, adequada ao objetivo de estudar funções.

### Parâmetros e endereço de memória

As funções de cálculo recebem números por valor. Já `scanf` recebe `&valor_hora` e `&horas`: o operador `&` fornece o endereço das variáveis para que a função de leitura possa preenchê-las. Assim, os parâmetros das funções de cálculo e os argumentos de `scanf` cumprem papéis diferentes.
