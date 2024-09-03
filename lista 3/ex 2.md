##biblioteca
```C
#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED

#include <stdio.h>

// Declaração de variáveis globais, mas idealmente deveriam ser passadas como parâmetros.
int X = 0, Y = 0;
int somal, subs, multiu;
float divu;

// Função para somar dois inteiros.
void soma() {
    somal = X + Y;
    printf("soma: %d\n\n", somal);
}

// Função para subtrair dois inteiros.
void subtracao() {
    subs = X - Y;
    printf("subtracao: %d\n\n", subs);
}

// Função para dividir dois inteiros. Verifica se Y é zero antes de dividir.
void divisao() {
    if (Y != 0) {
        divu = (float)X / Y; // Casting para evitar divisão inteira.
        printf("divisao: %.2f\n\n", divu);
    } else {
        printf("Erro: Divisão por zero não é permitida.\n\n");
    }
}

// Função para multiplicar dois inteiros.
void multiplicacao() {
    multiu = X * Y;
    printf("multiplicacao: %d\n\n", multiu);
}

#endif // BIBLIO_H_INCLUDED
```
##Principal (main)
```C
#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"  // Inclui a biblioteca corrigida

int main() {
    // Solicita a entrada dos números para o usuário
    printf("Digite um numero: ");
    scanf("%d", &X);

    printf("Digite outro numero: ");
    scanf("%d", &Y);

    // Chama as funções da biblioteca para realizar as operações
    soma();
    subtracao();
    divisao();
    multiplicacao();

    return 0;
}
```
