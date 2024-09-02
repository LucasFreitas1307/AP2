#include <stdio.h>


float media ()
{
    int notas, quantidade, i, soma = 0 ;
    float mediaNotas;

    printf("Digite o numero de alunos");
    scanf ("%d", &quantidade);
    for (i = 0; i < quantidade; i++)
    {
        printf("digite o valor da nota");
        scanf("%d", &notas);
        soma = soma + notas;
    }
    mediaNotas = (float)soma / quantidade;


}
int main()
{
    printf("%f", media());
    return 0;
}
