#include <stdio.h>

int main(void) {
    double valorEmpresa;   
    double qtdeAcoes;      
    double precoAcao;      
    double vpa;            
    double pvp;           

    printf("Digite o valor patrimonial da empresa (R$): ");
    scanf("%lf", &valorEmpresa);

    printf("Digite a quantidade de acoes disponiveis: ");
    scanf("%lf", &qtdeAcoes);

    printf("Digite o preco atual da acao (R$): ");
    scanf("%lf", &precoAcao);

    vpa = valorEmpresa / qtdeAcoes;
    pvp = precoAcao / vpa;

    printf("Valor Patrimonial por Acao (VPA): %.2f\n", vpa);
    printf("Indicador Preco sobre Valor Patrimonial (P/VP): %.2f\n", pvp);

    printf("Classificacao da acao: ");

    if (pvp < 0.0) {
        printf("Pessima\n");
    } else if (pvp < 0.8) {
        printf("Otima\n");
    } else if (pvp <= 1.2) {
        printf("Indiferente\n");
    } else if (pvp <= 2.0) {
        printf("Boa\n");
    } else {
        printf("Ruim\n");
    }

    return 0;
}
