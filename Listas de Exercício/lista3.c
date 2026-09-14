#include <stdio.h>
#include <math.h>
#include <string.h>

// * Protótipos das funções

void exercicio05_caixaEletronico(void);
void exercicio06_trajetoriaBalistica(void);
float calcularINSS(float salarioBruto);      /* Exercício 07 */
float calcularIRPF(float salarioBase);       /* Exercício 08 */
void exercicio09_contraCheque(void);
void formatarMoeda(float valor, char *buffer);

//* ============================================================
 * FUNÇÃO PRINCIPAL
 * Executa todos os exercícios em ordem.
 //* ============================================================ *
int main(void) {

    printf("################################################\n");
    printf("#            EXERCICIO 05 - CAIXA ELETRONICO     #\n");
    printf("################################################\n");
    exercicio05_caixaEletronico();

    printf("\n################################################\n");
    printf("#         EXERCICIO 06 - TRAJETORIA BALISTICA    #\n");
    printf("################################################\n");
    exercicio06_trajetoriaBalistica();

    printf("\n################################################\n");
    printf("#   EXERCICIOS 07, 08 e 09 - FOLHA DE PAGAMENTO  #\n");
    printf("################################################\n");
    exercicio09_contraCheque();

    return 0;
}

/* ============================================================
 * EXERCÍCIO 05 - Terminal Infinity Cash
 * ============================================================ */
void exercicio05_caixaEletronico(void) {

    int valorSaque;
    int notas[] = {100, 50, 10, 5, 2, 1};   /* notas disponíveis, da maior p/ menor */
    int quantidade[6];                       /* quantidade de cada nota entregue */
    int restante;
    int i;

    printf("\nInforme o valor do saque (em reais, numero inteiro): R$ ");
    scanf("%d", &valorSaque);

    restante = valorSaque;

    /* Para cada nota, calcula quantas cabem no valor restante
       (divisao inteira) e atualiza o restante (modulo) */
    for (i = 0; i < 6; i++) {
        quantidade[i] = restante / notas[i];
        restante = restante % notas[i];
    }

    printf("\n--- Resumo do Saque de R$ %d ---\n", valorSaque);
    for (i = 0; i < 6; i++) {
        if (quantidade[i] > 0) {
            printf("Nota de R$ %3d ....... %d nota(s)\n", notas[i], quantidade[i]);
        }
    }

    if (restante > 0) {
        printf("\nAtencao: valor de R$ %d nao pode ser entregue com as notas disponiveis.\n", restante);
    }
}

/* ============================================================
 * EXERCÍCIO 06 - Operação ENIAC - Trajetória
 * ============================================================ */
void exercicio06_trajetoriaBalistica(void) {

    const double G = 9.8;   /* aceleracao da gravidade */
    const double K = 0.5;   /* coeficiente de atrito (resistencia do ar) */
    const double DT = 0.01; /* incremento de tempo */

    double v0, anguloGraus, anguloRad;
    double vx, vy;
    double x, y;
    double t;
    double ax, ay;

    printf("\nInforme a velocidade inicial v0 (m/s): ");
    scanf("%lf", &v0);
    printf("Informe o angulo de lancamento (graus): ");
    scanf("%lf", &anguloGraus);

    /* Conversao de graus para radianos */
    anguloRad = anguloGraus * (M_PI / 180.0);

    /* Componentes iniciais de velocidade */
    vx = v0 * cos(anguloRad);
    vy = v0 * sin(anguloRad);

    x = 0.0;
    y = 0.0;
    t = 0.0;

    /* Loop de simulacao: avanca o tempo ate o projetil tocar o solo (y <= 0) */
    do {
        /* Aceleracoes: gravidade + arrasto proporcional a velocidade */
        ax = -K * vx;
        ay = -G - K * vy;

        /* Atualiza velocidades (integracao de Euler) */
        vx = vx + ax * DT;
        vy = vy + ay * DT;

        /* Atualiza posicao */
        x = x + vx * DT;
        y = y + vy * DT;

        t = t + DT;

    } while (y > 0.0);

    printf("\n--- Resultado da Simulacao ---\n");
    printf("Alcance Maximo: %.2f metros\n", x);
    printf("Tempo de Voo:   %.2f segundos\n", t);
}

/* ============================================================
 * EXERCÍCIO 07 - Cálculo de INSS
 * ============================================================ */
float calcularINSS(float salarioBruto) {

    float aliquota;
    float baseCalculo = salarioBruto;

    if (salarioBruto <= 1412.00f) {
        aliquota = 0.075f;
    } else if (salarioBruto <= 2666.68f) {
        aliquota = 0.09f;
    } else if (salarioBruto <= 4000.03f) {
        aliquota = 0.12f;
    } else {
        aliquota = 0.14f;
        baseCalculo = 4000.04f;   /* limitado ao teto */
    }

    return baseCalculo * aliquota;
}

/* ============================================================
 * EXERCÍCIO 08 - Cálculo de IRPF
 * ============================================================ */
float calcularIRPF(float salarioBase) {

    float aliquota, deducao;
    float imposto;

    if (salarioBase <= 2259.20f) {
        return 0.0f;   /* isento */
    } else if (salarioBase <= 2826.65f) {
        aliquota = 0.075f;
        deducao  = 169.44f;
    } else if (salarioBase <= 3751.05f) {
        aliquota = 0.15f;
        deducao  = 381.44f;
    } else if (salarioBase <= 4664.68f) {
        aliquota = 0.225f;
        deducao  = 662.77f;
    } else {
        aliquota = 0.275f;
        deducao  = 896.00f;
    }

    imposto = (salarioBase * aliquota) - deducao;

    if (imposto < 0.0f) {
        imposto = 0.0f;
    }

    return imposto;
}

/* ============================================================
 * FUNÇÃO AUXILIAR - formatarMoeda
 * ============================================================ */
void formatarMoeda(float valor, char *buffer) {

    int inteiro = (int)(valor + 0.005f);
    int centavos = (int)((valor - (float)inteiro) * 100 + 0.5f);

    if (centavos < 0) centavos = -centavos;
    if (inteiro < 0) inteiro = -inteiro;

    char inteiroStr[20];
    sprintf(inteiroStr, "%d", inteiro);

    int len = (int)strlen(inteiroStr);
    char comSeparador[30];
    int j = 0, count = 0, i;

    /* Percorre a parte inteira de tras para frente, inserindo
       um ponto a cada 3 digitos (separador de milhar) */
    for (i = len - 1; i >= 0; i--) {
        comSeparador[j++] = inteiroStr[i];
        count++;
        if (count % 3 == 0 && i != 0) {
            comSeparador[j++] = '.';
        }
    }
    comSeparador[j] = '\0';

    /* Inverte a string, pois foi montada de tras para frente */
    int start = 0, end = j - 1;
    while (start < end) {
        char tmp = comSeparador[start];
        comSeparador[start] = comSeparador[end];
        comSeparador[end] = tmp;
        start++;
        end--;
    }

    sprintf(buffer, "%s,%02d", comSeparador, centavos);
}

/* ============================================================
 * EXERCÍCIO 09 - Emissão de Contra-cheque
 * ============================================================ */
void exercicio09_contraCheque(void) {

    float valorHora, horasTrabalhadas;
    float salarioBruto, salarioBase, salarioLiquido;
    float valorINSS, valorIRPF;
    char bufBruto[30], bufINSS[30], bufIRPF[30], bufLiquido[30];

    printf("\nInforme o valor da hora trabalhada: R$ ");
    scanf("%f", &valorHora);
    printf("Informe a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horasTrabalhadas);

    /* Calculo do salario bruto */
    salarioBruto = valorHora * horasTrabalhadas;

    /* Chama a funcao do Exercicio 07 para obter o INSS */
    valorINSS = calcularINSS(salarioBruto);

    /* Salario base para o IRPF = Bruto - INSS */
    salarioBase = salarioBruto - valorINSS;

    /* Chama a funcao do Exercicio 08 para obter o IRPF */
    valorIRPF = calcularIRPF(salarioBase);

    /* Calculo do salario liquido */
    salarioLiquido = salarioBase - valorIRPF;

    /* Formata os valores no padrao monetario brasileiro */
    formatarMoeda(salarioBruto, bufBruto);
    formatarMoeda(valorINSS, bufINSS);
    formatarMoeda(valorIRPF, bufIRPF);
    formatarMoeda(salarioLiquido, bufLiquido);

    printf("\n======================================================\n");
    printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
    printf("======================================================\n");
    printf(" Salario Bruto (Horas x Valor):   R$ %s\n", bufBruto);
    printf(" (-) Desconto INSS:               R$ %s\n", bufINSS);
    printf(" (-) Desconto IRPF:               R$ %s\n", bufIRPF);
    printf("------------------------------------------------------\n");
    printf(" LIQUIDO A RECEBER:               R$ %s\n", bufLiquido);
    printf("======================================================\n");
}
