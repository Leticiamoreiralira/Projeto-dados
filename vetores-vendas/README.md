# Vetores: leitura e soma de cinco inteiros

Algoritmos e Programação Estruturada — Anhanguera.
Unidade 3: Vetores, Matrizes, Structs e Ponteiros. Aula 1: Vetores.

## Objetivo do roteiro

Declarar um vetor de cinco inteiros, ler cinco valores, armazená-los, calcular a soma e exibir cada elemento em uma linha, seguido da soma total.

## Executar

No OnlineGDB, selecione C, copie `main.c`, execute e informe cinco números inteiros.

Com GCC:

```bash
gcc -std=c11 -Wall -Wextra main.c -o vetor
./vetor
```

## Organização

- `int valores[TAMANHO]`, com `TAMANHO` igual a 5, armazena os dados.
- O primeiro laço lê os valores nas posições de 0 a 4.
- O segundo calcula a soma a partir dos dados já armazenados.
- O terceiro exibe cada valor em sua própria linha.
- A soma é impressa depois dos cinco elementos.

## Testes

| Entradas | Soma esperada |
|---|---:|
| 12, 0, 7, 18, 3 | 40 |
| 10, -5, 0, 7, -2 | 10 |
| 0, 0, 0, 0, 0 | 0 |

Os valores devem ser preservados na ordem de entrada. O cenário com negativos verifica o enunciado geral de números inteiros; não representa quantidades negativas de vendas.

## Teste de mesa

| Índice | Dia exibido | Valor | Soma acumulada |
|---:|---:|---:|---:|
| 0 | 1 | 12 | 12 |
| 1 | 2 | 0 | 12 |
| 2 | 3 | 7 | 19 |
| 3 | 4 | 18 | 37 |
| 4 | 5 | 3 | 40 |

## O que compreendi

O vetor permite guardar vários valores do mesmo tipo e consultá-los pelo índice. Mesmo depois de calcular a soma, cada valor continua disponível para exibição ou outra análise. O índice começa em zero; por isso, o quinto elemento está em `valores[4]`.

A condição `i < TAMANHO` limita o acesso às posições válidas. Usar `i <= TAMANHO` tentaria acessar uma sexta posição que não pertence ao vetor.

## Complemento técnico

### Análise dos dados armazenados

No cenário 12, 0, 7, 18, 3:

- Total: 40 vendas.
- Média: 40 / 5 = 8 vendas por dia.
- Menor valor: 0, no dia 2.
- Maior valor: 18, no dia 4.

Essas medidas são uma análise complementar dos dados do teste; o programa mantém a saída solicitada no roteiro: elementos e soma.

### Acumulador e validação

O vetor continua sendo de `int`. A soma usa `long long` para acomodar valores maiores. Em um ambiente com `int` de 32 bits, cinco entradas iguais a 2147483647 somam 10737418235, que ultrapassa o limite de um `int` com sinal. Esse caso foi verificado em compilação local com GCC, além dos testes no OnlineGDB.

A leitura verifica o retorno de `scanf`; se a entrada não puder ser lida como inteiro, o programa mostra uma mensagem e encerra. As entradas numéricas precisam estar dentro do intervalo do tipo `int`.

Para um vetor de tamanho variável n, as três passagens têm custo de tempo O(n) e o armazenamento dos elementos tem custo O(n). Nesta atividade, o tamanho é fixo em cinco.
