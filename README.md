# Push Swap
![C Language](https://img.shields.io/badge/language-C-blue.svg)
![Status](https://img.shields.io/badge/status-finished-brightgreen)
![42 84/100](https://img.shields.io/badge/42-100%2F100-gree?style=flat-square)
![License](https://img.shields.io/badge/license-MIT-lightgrey)
-

O **push_swap** é um projeto da [42 School](https://www.42porto.com/pt/) objetivo é ordenar uma pilha de números inteiros usando apenas um conjunto limitado de operações em duas pilhas (`a` e `b`).  
A stack inicial é `a`, enquanto `b` começa vazia. O programa deve imprimir a menor sequência de operações necessárias para ordenar os números em ordem crescente.

---

## ⚙️ Funcionalidades
- Ordena uma lista de números inteiros (positivos e negativos, incluindo sinal `+` ou `-`).
- Detecta erros:
  - Não for um número e nem um número inteiro.
  - Valores fora dos limites do tipo `int`.
  - Números duplicados.
- Suporta múltiplas formas de entrada:
  - `./push_swap 3 2 1`
  - `./push_swap "3 2 1"`
  - `./push_swap "3" "2" "1"`
- O programa deve retorna nada:
  - Se não tiver argumentos
  - Se os numeros estão ordenados
---

## 🛠️ Operações disponíveis
O projeto deve ordenar usando apenas as seguintes operações:

- `sa` : Troca os dois primeiros elementos de `a`.
- `sb` : Troca os dois primeiros elementos de `b`.
- `ss` : `sa` e `sb` ao mesmo tempo.
- `pa` : Move o primeiro elemento de `b` para `a`.
- `pb` : Move o primeiro elemento de `a` para `b`.
- `ra` : Roda `a` para cima (o primeiro vai para o fim).
- `rb` : Roda `b` para cima.
- `rr` : `ra` e `rb` ao mesmo tempo.
- `rra` : Roda `a` para baixo (o último vai para o topo).
- `rrb` : Roda `b` para baixo.
- `rrr` : `rra` e `rrb` ao mesmo tempo.

---
## Exemplo
```bash
Init a and b
a : 2 1 3 6 5 8
b :
------
Exec sa
a : 1 2 3 6 5 8
b :
------
Exec pb pb pb:
a : 6 5 8
b : 1 2 3 
------
Exec ra rb (equiv. to rr):
a : 5 8 6
b : 3 2 1
------
Exec rra rrb (equiv. to rrr):
a : 5 8 6
b : 2 1 3
------
Exec sa:
a : 6 5 8 
b : 3 2 1 
------
Exec sa:
a : 5 6 8 
b : 3 2 1 
------
Exec pa pa pa:
a : 1 2 3 5 6 8 
b : 
```
---
## ✅ Testes

Na 42, é usado o checker_linux para validar a saída

```bash
ARG="3 2 1"; ./push_swap $ARG | ./checker_linux $ARG
OK
```

## 📊 Regras de desempenho

Com 3 números:
- Maximo de 3 movimentos

Com 5 números:
- Maximo de 12 movimentos

Com 100 números:
- 5 pontos caso o tamanho da lista de movimentos é menor que 700
- 4 pontos caso o tamanho da lista de movimentos é menor que 900
- 3 pontos caso o tamanho da lista de movimentos é menor que 1100
- 2 pontos caso o tamanho da lista de movimentos é menor que 1300
- 1 ponto caso o tamanho da lista de movimento é menor que 1500

Com 500 números:
- 5 pontos casos o tamanho da lista de instruções é menor que 5500
- 4 pontos casos o tamanho da lista de instruções é menor que 7000
- 3 pontos casos o tamanho da lista de instruções é menor que 8500
- 2 pontos casos o tamanho da lista de instruções é menor que 10000
- 1 ponto caso o tamanho da lista de instruções é menor que 11500

📂 Estrutura do meu projeto projeto
```bash
push_swap.c → função principal (main).
parser.c → Verificações basicas.
pop_push_ops.c, shift_down.c, shift_up.c, swap_ops.c-> função das operações
stack_utils.c -> manipulação das stacks.
sort_small.c, sort_number.c → lógica principal de ordenação
utils.c, ft_split.c , ft_substr.c -> funções auxiliares da libft

```
---
👩‍💻 Autora
Samiris Santos — [LinkedIn](https://www.linkedin.com/in/samiris-santos/)