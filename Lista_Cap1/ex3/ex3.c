/* Esse programa configura o terminal do Windows para aceitar acentos (UTF-8),
* pede que o usuario digite seu nome e exibe uma mensagem de boas-vindas.
*
* Sistema de Boas-Vindas
***************************************************************/
/* BoasVindas.C */
#include <stdio.h> /* Para printf() e scanf() */
#include <stdlib.h> /* Para system() */
#include <windows.h> /* Para SetConsoleOutputCP() e SetConsoleCP() */
#include <string.h> /* Incluida, mas nao foi utilizada neste codigo */

int main(){ /* Funcao main */
        
        SetConsoleOutputCP(CP_UTF8); /* Configura a saida de texto do console para UTF-8 */
        SetConsoleCP(CP_UTF8); /* Configura a entrada do teclado do console para UTF-8 */
        char nome[50]; /* Declara um array de caracteres para guardar ate 49 letras */
        
        printf("Digite seu nome: "); /* Chamada a funcao printf para exibir texto */
        scanf("%s",&nome); /* Chamada a funcao scanf.*/


        printf("Ola, %s! Voce está no nosso sistema\n", nome); /* Chamada a funcao printf com formatacao de string */
        system("PAUSE"); /* Chamada a funcao system para pausar a tela */

        return 0; /* Indica ao sistema operacional que o programa terminou sem erros */

}