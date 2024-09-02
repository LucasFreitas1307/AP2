#include <stdio.h>
#include <string.h>

// struct inicial
typedef struct
{
    char nomeCompanhia[50];
    char areaAtuacao[50];
    double valorAtual;
    double valorAnterior;
    double variacao; // Variação em porcentagem
} Acao;

// Funcao do calculo da variacao de preco
void calcularVariacao(Acao *acao)
{
    acao->variacao = ((acao->valorAtual - acao->valorAnterior) / acao->valorAnterior) * 100;
}

// Função para imprimir dados
void imprimirAcao(Acao acao)
{
    system("cls");
    printf("\n--- Informacoes da acao ---\n");
    printf("Nome da Companhia: %s\n", acao.nomeCompanhia);
    printf("Área de Atuacao: %s\n", acao.areaAtuacao);
    printf("Valor Atual da Acao: R$ %.2f\n", acao.valorAtual);
    printf("Valor Anterior: R$ %.2f\n", acao.valorAnterior);
    printf("Variacao da acao: %.2f%%\n", acao.variacao);
}

// Função de entrada de dados
void definirDadosAcao(Acao *acao)
{
    printf("Digite o nome da companhia: ");
    fgets(acao->nomeCompanhia, sizeof(acao->nomeCompanhia), stdin);
    acao->nomeCompanhia[strcspn(acao->nomeCompanhia, "\n")] = '\0';
    printf("Digite a area de atuacao da companhia: ");
    fgets(acao->areaAtuacao, sizeof(acao->areaAtuacao), stdin);
    acao->areaAtuacao[strcspn(acao->areaAtuacao, "\n")] = '\0';

    printf("Digite o valor atual da acao (em reais): ");
    scanf("%lf", &acao->valorAtual);

    printf("Digite o valor anterior da acao (em reais): ");
    scanf("%lf", &acao->valorAnterior);

    // Limpeza do buffer do teclado
    while (getchar() != '\n');
}

int main()
{
    Acao acao;


    definirDadosAcao(&acao);


    calcularVariacao(&acao);



    imprimirAcao(acao);

    return 0;
}
