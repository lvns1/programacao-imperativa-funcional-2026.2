# CESAR School — Graduação Tecnológica em Análise e Desenvolvimento de Sistemas (ADS)
## Disciplina: Programação Imperativa e Funcional (PIF) — 2026.2
### Discente: Lucas Vinícius Nascimento Silva
#### Docente: Prof. Danilo Farias Soares da Silva
#### Resolução Oficial da Parte I: Questões Teóricas e Analíticas (Capítulos 1, 2 e 3)

---

### Questão 01. Sensibilidade a Caixa (Case Sensitivity) e Identificadores em C (Cap. 1)

**Alternativa Correta:** **c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores totalmente distintos para o compilador.**

#### Justificativa Detalhada:
A linguagem C é estritamente *case-sensitive* (sensível à caixa). Isso significa que letras maiúsculas e minúsculas possuem códigos ASCII distintos e são interpretadas como símbolos completamente diferentes pelo compilador.

* **a) Incorreta:** `numero` e `Numero` referenciam posições de memória totalmente distintas, pois são dois identificadores diferentes.
* **b) Incorreta:** A função principal obrigatoriamente deve ser escrita em minúsculas (`main`). `Main` não é reconhecida como o ponto de entrada padrão.
* **c) Correta:** Como a linguagem diferencia maiúsculas de minúsculas, cada par citado possui caracteres com representações binárias/ASCII distintas, formando variáveis independentes.
* **d) Incorreta:** A sensibilidade de caixa é uma especificação sintática da linguagem C (definida pelo padrão ISO/IEC C), não dependendo do sistema operacional.

---

### Questão 02. Especificadores de Formato, Sequências de Escape e Erros de Compilação (Cap. 1)

Analisando o código apresentado:

```c
#include <stdio.h>
#include <stdlib.h>;
int Main()
{
int idade = 20
printf( A idade do aluno eh: %d anos.., idade);
cout << endl;
system("PAUSE");
return 0;
}
```

Os principais erros sintáticos e estruturais identificados são:

1. **Diretiva de pré-processamento com ponto e vírgula:** A linha `#include <stdlib.h>;` contém um `;` no final. Diretivas iniciadas com `#` não devem terminar com ponto e vírgula.
2. **Ponto de entrada com grafia incorreta (`Main`):** A função de entrada do programa deve ser minúscula (`main`). Devido ao *case sensitivity*, `Main` gera um erro no *linker* por falta do ponto de entrada padrão.
3. **Ausência de ponto e vírgula no término da instrução:** Na declaração `int idade = 20`, falta o `;` obrigatório ao final do comando.
4. **Sintaxe incorreta na string de formato do `printf`:** O texto `A idade do aluno eh: %d anos..` não está entre aspas duplas (`"..."`).
5. **Comando de C++ em código C:** A instrução `cout << endl;` pertence à linguagem C++ (`<iostream>`) e é inválida na linguagem C pura.

---

### Questão 03. Operadores de Atribuição Composta e Avaliação Sequencial (Cap. 2)

#### Valores Iniciais:
$$a = 2, \quad b = 4, \quad c = 5, \quad d = 10$$

---

#### 1. Avaliação de `a += b + c;`
* A soma $b + c$ é calculada primeiro: $4 + 5 = 9$.
* O operador de atribuição composta atualiza $a$: $a = a + 9 = 2 + 9 = 11$.
* **Estado das variáveis:** $a = 11, b = 4, c = 5, d = 10$.

---

#### 2. Avaliação de `b *= c = d - 2;`
* Operadores de atribuição são avaliados da **direita para a esquerda**:
  1. $d - 2 = 10 - 2 = 8$.
  2. $c = 8$.
  3. $b *= 8 \longrightarrow b = b \times 8 = 4 \times 8 = 32$.
* **Estado das variáveis:** $a = 11, b = 32, c = 8, d = 10$.

---

#### 3. Avaliação de `a += b += c += 5;`
* Encadeamento de atribuições avaliado da **direita para a esquerda**:
  1. $c += 5 \longrightarrow c = 8 + 5 = 13$.
  2. $b += 13 \longrightarrow b = 32 + 13 = 45$.
  3. $a += 45 \longrightarrow a = 11 + 45 = 56$.
* **Estado das variáveis:** $a = 56, b = 45, c = 13, d = 10$.

---

#### 4. Avaliação de `d %= a + 3;`
* A expressão à direita é resolvida primeiro: $a + 3 = 56 + 3 = 59$.
* Operação módulo: $d = d \ \% \ 59 = 10 \ \% \ 59$.
* Como o dividendo é menor que o divisor ($10 < 59$), o resto é o próprio dividendo: $d = 10$.
* **Estado das variáveis:** $a = 56, b = 45, c = 13, d = 10$.

---

#### Resumo dos Valores Finais:
* **`a` = 56**
* **`b` = 45**
* **`c` = 13**
* **`d` = 10**

---

### Questão 04. Avaliação de Expressões Lógicas, Relacionais e Precedência (Cap. 2)

#### Variáveis dadas:
$$i = 2, \quad j = 3, \quad k = 0, \quad x = 2.5, \quad y = 5.0$$

---

#### a) `i < j + 2`
1. Operador aritmético $+$ tem precedência sobre o relacional $<$: $j + 2 = 3 + 2 = 5$.
2. Comparação relacional: $2 < 5 \longrightarrow$ **Verdadeiro**.
* **Resultado em C:** `1`

---

#### b) `2 * i - 5 <= j - 4`
1. Lado esquerdo: $2 \times 2 - 5 = 4 - 5 = -1$.
2. Lado direito: $j - 4 = 3 - 4 = -1$.
3. Comparação relacional: $-1 \le -1 \longrightarrow$ **Verdadeiro**.
* **Resultado em C:** `1`

---

#### c) `!k && (x + y >= 7.5)`
1. Lado esquerdo: $k = 0 \longrightarrow !0 = 1$ (Verdadeiro).
2. Lado direito: $x + y = 2.5 + 5.0 = 7.5 \longrightarrow 7.5 \ge 7.5 = 1$ (Verdadeiro).
3. E lógico (`&&`): $1 \text{ \&\& } 1 \longrightarrow$ **Verdadeiro**.
* **Resultado em C:** `1`

---

#### d) `!!(i == j) || (y / x == 2.0)`
1. Lado esquerdo: $i == j \longrightarrow 2 == 3 = 0$.
   * $!0 = 1 \longrightarrow !1 = 0$.
2. Lado direito: $y / x = 5.0 / 2.5 = 2.0 \longrightarrow 2.0 == 2.0 = 1$ (Verdadeiro).
3. OU lógico (`||`): $0 \text{ || } 1 \longrightarrow$ **Verdadeiro**.
* **Resultado em C:** `1`

---

#### e) `i == 2 && j == -4 || k == 0`
1. Avaliação do `&&` (maior precedência que `||`):
   * $i == 2 \longrightarrow 2 == 2 = 1$.
   * $j == -4 \longrightarrow 3 == -4 = 0$.
   * $1 \text{ \&\& } 0 = 0$.
2. Avaliação do `||`:
   * $k == 0 \longrightarrow 0 == 0 = 1$.
   * $0 \text{ || } 1 \longrightarrow$ **Verdadeiro**.
* **Resultado em C:** `1`

---

### Questão 05. Estruturas de Repetição: Comparação entre for, while e do-while (Cap. 3)

#### a) Diferença Essencial entre `while` e `do-while`:
* **`while` (Pré-testado):** Avalia a condição **antes** de executar o bloco de código. Se a condição for falsa na entrada, o bloco de código é executado **no mínimo 0 vezes**.
* **`do-while` (Pós-testado):** Executa o bloco de código primeiro e avalia a condição **no final**. O bloco de código é executado **no mínimo 1 vez**, independentemente do resultado da condição.

#### b) Cenários Ideais para o Laço `for`:
O laço `for` é a escolha mais elegante e legível quando o número de iterações é **previamente conhecido ou determinado** (laço determinado/contado). Ele agrupa a inicialização da variável de controle, o teste lógico de parada e o passo de incremento/decremento em uma única instrução concisa no cabeçalho.

#### c) Análise da Instrução `while (condicao);`:
* Não constitui um erro de compilação. Em C, um ponto e vírgula isolado representa uma **instrução nula** (*null statement*), sendo sintaticamente válido.
* Constitui um **erro de lógica**. Se a `condicao` for **verdadeira**, o programa entrará em um **laço infinito**, executando repetidamente a instrução nula sem nunca alterar o valor das variáveis envolvidas na condição.

---

### Questão 06. Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3)

#### Código Analisado:
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d \n", soma);
    system("PAUSE");
    return 0;
}
```

#### a) Causa do Erro de Compilação no `printf`:
A variável `soma` foi declarada **dentro do bloco interno** do laço `for` (`int soma = 0;`). O escopo de variáveis em C é delimitado por blocos `{ ... }`. Quando o laço termina e o fluxo atinge a instrução `printf`, a variável `soma` já foi destruída e deixa de existir, resultando em um erro de compilação por identificador não declarado (*undeclared identifier*).

#### b) Iterações Executadas e Impacto dos Comandos de Desvio:
* **$i = 1, 2, 3, 4$:** O bloco roda completamente, somando os quadrados.
* **$i = 5$:** Ativa `if (i == 5) continue;`. O comando `continue` ignora o restante das instruções do bloco e avança para a próxima iteração ($i = 6$).
* **$i = 6, 7$:** O bloco roda normalmente.
* **$i = 8$:** Ativa `if (i == 8) break;`. O comando `break` interrompe e encerra imediatamente a execução do laço `for`.
* **Iterações afetadas:** As iterações $1, 2, 3, 4, 6, 7$ processam a adição; a $5$ é ignorada pelo `continue`; e as iterações $8, 9, 10$ não acontecem devido ao `break`.

#### c) Código Corrigido e Resultado Impresso:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Declarada fora do laco para manter o escopo correto

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d \n", soma);
    return 0;
}
```

#### Passo a Passo da Soma:
* $i = 1 \longrightarrow \text{soma} = 0 + 1^2 = 1$
* $i = 2 \longrightarrow \text{soma} = 1 + 2^2 = 5$
* $i = 3 \longrightarrow \text{soma} = 5 + 3^2 = 14$
* $i = 4 \longrightarrow \text{soma} = 14 + 4^2 = 30$
* $i = 5 \longrightarrow \text{Pulado (continue)}$
* $i = 6 \longrightarrow \text{soma} = 30 + 6^2 = 66$
* $i = 7 \longrightarrow \text{soma} = 66 + 7^2 = 115$
* $i = 8 \longrightarrow \text{Encerra o laco (break)}$

**Saída impressa no console:**
`Soma final = 115`