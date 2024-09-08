### Gerenciamento de alunos(completar codigo)
```C
#include <stdio.h>

typedef struct {
    int matricula;
    float notas[3];
} Aluno;

Aluno Turma[5];

// Função que lê os dados de um aluno
void LeAluno(int index) {
    printf("Digite a matrícula do aluno %d: ", index + 1);
    scanf("%d", &Turma[index].matricula);

    for (int j = 0; j < 3; j++) {
        printf("Digite a nota %d do aluno %d: ", j + 1, index + 1);
        scanf("%f", &Turma[index].notas[j]);
    }
}

// Função que imprime os dados de todos os alunos
void ImprimeTurma() {
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d - Matrícula: %d\n", i + 1, Turma[i].matricula);
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: %.2f\n", j + 1, Turma[i].notas[j]);
        }
        printf("\n");
    }
}

// Função que calcula a média das notas de um aluno
float CalculaMediaAluno(int index) {
    float soma = 0;
    for (int j = 0; j < 3; j++) {
        soma += Turma[index].notas[j];
    }
    return soma / 3;
}

int main() {
    // Lê os dados dos alunos
    for (int i = 0; i < 5; i++) {
        LeAluno(i);
    }

    // Imprime os dados da turma
    ImprimeTurma();

    // Calcula e imprime a média de cada aluno
    for (int i = 0; i < 5; i++) {
        float media = CalculaMediaAluno(i);
        printf("Aluno %d - Média = %.2f\n", i + 1, media);
    }

    return 0;
}
```
