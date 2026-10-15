# Estruturas de Repetição

Atividade prática de Algoritmos e Programação Estruturada — Anhanguera.

## Objetivo

Ler números inteiros e calcular sua soma com `while`, encerrando quando o usuário informar zero.

## Execução

No OnlineGDB, selecione C e cole o conteúdo de `main.c`. Execute e informe um número por linha. Digite `0` para encerrar.

Com GCC:

```bash
gcc -std=c11 -Wall -Wextra main.c -o soma
./soma
```

## Testes realizados

| Entradas | Soma esperada | Soma obtida |
|---|---:|---:|
| 0 | 0 | 0 |
| 10, 20, 0 | 30 | 30 |
| 10, -5, 0 | 5 | 5 |

## Teste de mesa

| Número lido | Condição numero != 0 | Soma antes | Soma depois |
|---|---|---:|---:|
| 10 | Verdadeiro | 0 | 10 |
| -5 | Verdadeiro | 10 | 5 |
| 0 | Falso | 5 | 5 |

O zero é o valor sentinela: encerra o laço sem entrar na soma. A quantidade de entradas não precisa ser definida antecipadamente.

A implementação considera entradas inteiras válidas e somas representáveis pelo tipo `int`.
