### Biblioteca
``` C

#ifndef MEDIA_H
#define MEDIA_H

#include <stdio.h>

// Declaração das variáveis globais
float nota1, nota2, nota3;
char tipoMedia;

// Função para calcular a Média Aritmética
float calcularMediaAritmetica() {
    return (nota1 + nota2 + nota3) / 3.0;
}

// Função para calcular a Média Ponderada
float calcularMediaPonderada() {
    return (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10.0;
}

// Função para ler as notas e o tipo de média, e calcular a média correspondente
float calcularMedia() {
    // Leitura das notas
    printf("Digite as tres notas do aluno:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    // Leitura do tipo de média
    printf("Digite o tipo de media ('A' para Aritmetica ou 'P' para Ponderada): ");
    scanf(" %c", &tipoMedia);

    // Calcular e retornar a média com base no tipo
    if (tipoMedia == 'A') {
        return calcularMediaAritmetica();
    } else if (tipoMedia == 'P') {
        return calcularMediaPonderada();
    } else {
        printf("Tipo de media invalido! Use 'A' para Aritmetica ou 'P' para Ponderada.\n");
        return -1; // Retorna um valor inválido em caso de erro
    }
}

#endif
```
### Codigo(main)
``` C
// main.c
#include "biblioc.h"

int main() {
    // Calcula a média e armazena o resultado
    float media = calcularMedia();

    // Exibe o resultado se a média for válida
    if (media != -1) {
        printf("A media calculada e: %.2f\n", media);
    }

    return 0;
}
```




