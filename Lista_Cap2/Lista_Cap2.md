# Lista de Exercícios - Capítulo 2: Operadores

---

### **Questão 01: Truncamento de Tipos e Coerção Implícita**

* **a)** **Valor exibido:** `2`
* **b)** **Explicação:** Ocorre a atribuição de um valor do tipo `float`/`double` (`2.97`) a uma variável do tipo `int`. O compilador aplica coerção implícita (truncamento), descartando totalmente a parte fracionária do número.
* **c)** **Solução:** Atribuir o valor a uma variável do tipo `float` ou `double`, ou utilizar funções de arredondamento acompanhadas de *cast* explícito.

---

### **Questão 02: Entrada Standard e Bibliotecas Legadas**

* **a)** O uso de `<conio.h>` deve ser evitado por tratar-se de uma biblioteca proprietária/legada (MS-DOS/Windows) fora do padrão ANSI/ISO C. Códigos que a utilizam perdem portabilidade e não compilam em sistemas Linux, macOS ou servidores.
* **b)** As funções padrão e portáveis da biblioteca `<stdio.h>` para entrada e saída de caracteres são: `getchar()`, `fgetc()`, `fgets()` e `putchar()`.

---

### **Questão 04: Atribuição Composta e Precedência**

**Avaliação passo a passo:**

1. `a += b + c;` $\rightarrow$ $a = 1 + (2 + 3) = 6$
2. `b *= c = d + 2;` $\rightarrow$ $c = 4 + 2 = 6$, depois $b = 2 \times 6 = 12$
3. `d -= c -= b -= a;`
   * $b -= a \rightarrow b = 12 - 6 = 6$
   * $c -= b \rightarrow c = 6 - 6 = 0$
   * $d -= c \rightarrow d = 4 - 0 = 4$
4. `a += b += c += 7;`
   * $c += 7 \rightarrow c = 0 + 7 = 7$
   * $b += c \rightarrow b = 6 + 7 = 13$
   * $a += b \rightarrow a = 6 + 13 = 19$
5. `d %= a + a + a;` $\rightarrow$ $a + a + a = 19 + 19 + 19 = 57$, depois $d = 4 \% 57 = 4$

**Valores Finais:**

| Variável | Valor Final |
| :---: | :---: |
| **a** | `19` |
| **b** | `13` |
| **c** | `7` |
| **d** | `4` |

---

### **Questão 05: Avaliação de Expressões Lógicas e Relacionais**

| Item | Expressão | Resultado | Classificação |
| :---: | :--- | :---: | :---: |
| **a** | `i < j + 3` | `1` | Verdadeiro |
| **b** | `2 * i - 7 <= j - 8` | `0` | Falso |
| **c** | `-x + y >= 2.0 * y` | `0` | Falso |
| **d** | `x == y` | `0` | Falso |
| **e** | `!(n - j)` | `1` | Verdadeiro |
| **f** | `!n - j` | `-2` | Valor Numérico |
| **g** | `i && j && k` | `1` | Verdadeiro |
| **h** | `i \|\| j && k` | `1` | Verdadeiro |
| **i** | `i < j && 2 >= k` | `0` | Falso |
| **j** | `i == 2 \|\| j == 4 \|\| k == 5` | `0` | Falso |

---

### **Questão 06: Comportamento e Precedência dos Incrementos**

* **a) Diferença de fluxo:**
  * **Pré-incremento (`++n`):** A variável é incrementada antes de o valor ser utilizado na atribuição.
  * **Pós-incremento (`m++`):** O valor original é utilizado na atribuição e o incremento ocorre depois em memória.
  * **Impressões:**
    * **Trecho A:** `n = 6`, `x = 6`
    * **Trecho B:** `m = 6`, `y = 5`

* **b) Comportamento Indefinido:**
  * A instrução gera *Undefined Behavior* (Comportamento Indefinido) pois a ordem de avaliação dos argumentos em chamadas de função como `printf()` não é garantida pelo padrão ANSI C. Compiladores podem avaliar `n++` em ordens distintas, produzindo saídas imprevisíveis.