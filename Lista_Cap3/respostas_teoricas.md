# CESAR School — Graduação Tecnológica em Análise e Desenvolvimento de Sistemas (ADS)
## Disciplina: Programação Imperativa e Funcional (PIF) — 2026.2
## Discente: Lucas Vinícius Nascimento Silva
### Docente: Prof. Danilo Farias Soares da Silva
#### Resolução Oficial da Parte I: Questões Teóricas e Analíticas (Capítulo 3 — Laços de Repetição)

---

### Questão 01. Diferenças Fundamentais e Tempo de Avaliação de Laços

#### a) Diferença Essencial entre `while` e `do-while`:
* **`while` (Estrutura Pré-Testada):** Avalia a condição de controle **antes** da execução do bloco de código. Se a condição for falsa na primeira verificação, o corpo do laço não é executado nenhuma vez (número mínimo de execuções = $0$).
* **`do-while` (Estrutura Pós-Testada):** Executa o bloco de código primeiro e avalia a condição de controle **ao final** de cada iteração. Dessa forma, o corpo do laço é garantidamente executado no mínimo uma vez (número mínimo de execuções = $1$), independentemente do estado inicial da condição.

#### b) Cenários Ideais para Cada Estrutura:
* **`for`:** Ideal quando o número de iterações é **previamente conhecido ou determinado** (laço contado). Sua sintaxe agrupa de forma clara e elegante a inicialização, a condição de parada e a expressão de incremento/passo no cabeçalho. Exemplo: percorrer arrays ou iterar de $1$ a $N$.
* **`while`:** Ideal para situações em que a repetição depende de uma condição lógica cuja checagem deve ser feita antes de qualquer processamento e o número de iterações é indeterminado. Exemplo: leitura de arquivos até atingir o fim (`EOF`) ou processamento de filas de dados.
* **`do-while`:** Ideal quando a primeira execução do bloco é obrigatória antes do teste da condição de parada. Exemplo: menus interativos de opções e validação de dados de entrada fornecidos pelo usuário.

#### c) Análise do Trecho `while (condicao);`:
* **Natureza do Erro:** Não se trata de um erro de compilação. Em linguagem C, um ponto e vírgula isolado `;` representa uma **instrução nula** (*null statement*), sendo sintaticamente válido.
* **Comportamento em Tempo de Execução:** Constitui um **erro de lógica**. Se a `condicao` for avaliada como **verdadeira** ($1$), o programa executará continuamente a instrução nula sem alterar nenhuma variável envolvida no teste lógico, travando o fluxo da aplicação em um **laço infinito**.

---

### Questão 02. Escopo e Tempo de Vida de Variáveis de Bloco

#### a) Causa do Erro de Compilação no `printf`:
A variável `soma` foi declarada **dentro do bloco do laço `for`** (`int soma = 0;`). Em C, o escopo de uma variável é delimitado pelo bloco `{ ... }` em que foi definida. Quando o laço termina e a execução atinge o `printf` fora do `for`, a variável `soma` já saiu de escopo e teve sua memória liberada, resultando no erro de compilação de identificador não declarado (*undeclared identifier*).

#### b) Problema Conceitual se o `printf` estivesse dentro do laço:
A instrução `int soma = 0;` executaria a cada iteração, reinicializando a variável com zero. Consequentemente, `soma` armazenaria apenas o quadrado do número corrente ($i^2$), sem acumular a soma dos quadrados das iterações anteriores.

#### c) Código Corrigido e Conceitos Teóricos:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Declarada no escopo da funcao main

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

* **Visibilidade:** Refere-se à região do código onde um identificador (variável) pode ser acessado. Variáveis declaradas em um bloco são visíveis apenas dentro dele.
* **Escopo de Bloco:** Limita a validade de uma variável ao conjunto de instruções contido entre chaves `{}`.
* **Tempo de Vida (Lifetime):** Período de execução do programa em que a variável ocupa um espaço ativo na memória RAM. Variáveis locais de bloco são criadas na entrada do bloco e destruídas na sua saída.

---

### Questão 03. Flexibilidade do Laço `for` e Omissão de Expressões

#### a) Sequência Exata de Valores Impressos no Trecho A:
Código: `for (a = 36; a > 0; a /= 2) printf("%d\t", a);`

1. $a = 36 \longrightarrow 36 > 0$ (Verdadeiro) $\longrightarrow$ Imprime: `36`
2. $a = 36 / 2 = 18 \longrightarrow 18 > 0$ (Verdadeiro) $\longrightarrow$ Imprime: `18`
3. $a = 18 / 2 = 9 \longrightarrow 9 > 0$ (Verdadeiro) $\longrightarrow$ Imprime: `9`
4. $a = 9 / 2 = 4$ (Divisão inteira) $\longrightarrow 4 > 0$ (Verdadeiro) $\longrightarrow$ Imprime: `4`
5. $a = 4 / 2 = 2 \longrightarrow 2 > 0$ (Verdadeiro) $\longrightarrow$ Imprime: `2`
6. $a = 2 / 2 = 1 \longrightarrow 1 > 0$ (Verdadeiro) $\longrightarrow$ Imprime: `1`
7. $a = 1 / 2 = 0 \longrightarrow 0 > 0$ (Falso) $\longrightarrow$ Encerra o laço.

**Saída em tela:** `36	18	9	4	2	1`

#### b) Comportamento do Trecho B e Precedência do Operador `!=`:
* **Comportamento:** O laço lê sequencialmente um caractere do teclado sem eco via `getch()` a cada iteração. Enquanto o caractere digitado for diferente de `'X'`, o programa imprime o próximo caractere na tabela ASCII (`ch + 1`).
* **Operação `ch + 1`:** Realiza uma promoção aritmética do valor numérico ASCII do caractere somando $1$, imprimindo o caractere subsequente (por exemplo, ao digitar `'A'`, imprime `'B'`).
* **Necessidade dos Parênteses `(ch = getch())`:** O operador relacional `!=` possui **precedência maior** que o operador de atribuição `=`. Sem os parênteses, a expressão `ch = getch() != 'X'` avaliaria primeiro a comparação `getch() != 'X'`, armazenando o resultado booleano ($0$ ou $1$) na variável `ch`, em vez de guardar a tecla digitada.

#### c) Interrupção Programática do Laço Infinito do Trecho C (`for (;;)`):
A interrupção pode ser feita através da instrução de desvio `break;` dentro de um bloco condicional `if`, utilizando a instrução `return` para sair da função atual, ou invocando a função `exit()` da biblioteca `<stdlib.h>`.

---

### Questão 04. Comandos de Desvio de Fluxo: `break` vs. `continue`

#### a) Ação Executada pelo Comando `break`:
O comando `break` interrompe e encerra **imediatamente** a execução do laço de repetição (`for`, `while` ou `do-while`) no qual está contido. O fluxo de controle do programa é transferido diretamente para a primeira instrução localizada após o bloco do laço.

#### b) Ação Executada pelo Comando `continue`:
O comando `continue` ignora as instruções restantes do bloco da iteração **atual** e força a passagem para o próximo ciclo do laço. Em uma estrutura `for`, o fluxo salta diretamente para a **terceira expressão do cabeçalho (passo de incremento/decremento)**, e em seguida reavalia a condição de teste.

#### c) Efeito do `break` em Laços Aninhados:
O comando `break` encerra **apenas o laço mais interno** no qual está diretamente inserido, retornando a execução normal para o laço externo.

---

### Questão 05. Operador Vírgula e Múltiplas Variáveis de Controle

Código analisado:
```c
int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d soma = %d\n", i, j, i + j);
}
```

#### a) Quantidade de Iterações Executadas:
* Iteração 1: $i = 0, j = 10 \longrightarrow 0 < 10$ (Verdadeiro)
* Iteração 2: $i = 1, j = 9 \longrightarrow 1 < 9$ (Verdadeiro)
* Iteração 3: $i = 2, j = 8 \longrightarrow 2 < 8$ (Verdadeiro)
* Iteração 4: $i = 3, j = 7 \longrightarrow 3 < 7$ (Verdadeiro)
* Iteração 5: $i = 4, j = 6 \longrightarrow 4 < 6$ (Verdadeiro)
* Fim: $i = 5, j = 5 \longrightarrow 5 < 5$ (Falso $\longrightarrow$ encerra)

**Total de iterações:** **5 iterações**.

#### b) Saída Exata Produzida pelo `printf`:
```text
i = 0, j = 10 soma = 10
i = 1, j = 9 soma = 10
i = 2, j = 8 soma = 10
i = 3, j = 7 soma = 10
i = 4, j = 6 soma = 10
```

#### c) Reescrita Equivalente com a Estrutura `while`:
```c
#include <stdio.h>

int main() {
    int i = 0, j = 10;

    while (i < j) {
        printf("i = %d, j = %d soma = %d\n", i, j, i + j);
        i++;
        j--;
    }

    return 0;
}
```

---

### Questão 06. Laço Sem Corpo e Incremento Pós-fixado

Código analisado:
```c
int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);
```

#### a) Valor Final de `x` Impresso:
**`Valor final de x = 6`**

#### b) Passo a Passo das Comparações e Incrementos:
O operador pós-fixado `x++` utiliza o valor corrente de `x` no teste relacional e **em seguida** o incrementa em $1$:

1. Entrada: $x = 0$. Teste: $0 < 5$ (Verdadeiro). Incremento pós-teste: $x$ vira $1$.
2. Teste: $1 < 5$ (Verdadeiro). Incremento pós-teste: $x$ vira $2$.
3. Teste: $2 < 5$ (Verdadeiro). Incremento pós-teste: $x$ vira $3$.
4. Teste: $3 < 5$ (Verdadeiro). Incremento pós-teste: $x$ vira $4$.
5. Teste: $4 < 5$ (Verdadeiro). Incremento pós-teste: $x$ vira $5$.
6. Teste: $5 < 5$ (Falso). Incremento pós-teste: $x$ vira $6$. O laço `while` é encerrado.

#### c) Reescrita Explícita e Transparente (Sem Corpo Vazio):
```c
#include <stdio.h>

int main() {
    int x = 0;

    while (x < 5) {
        x++;
    }
    x++; // Incremento correspondente a ultima comparacao que falha no x++

    printf("Valor final de x = %d\n", x);
    return 0;
}
```