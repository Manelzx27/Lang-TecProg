#include<stdio.h>
#include<stdlib.h>

void esoft_b_q0() {
    int total_itens, capacidade;

    printf("\n--- [ESOFT M B] Questao 0: Mochilas e Sobras ---\n");
    printf("Digite a quantidade total de itens: ");
    scanf("%d", &total_itens);
    printf("Digite a capacidade maxima de cada mochila: ");
    scanf("%d", &capacidade);

    if (capacidade <= 0) {
        printf("Erro: A capacidade da mochila deve ser maior que zero.\n");
    } else {
        int mochilas_cheias = total_itens / capacidade;
        int sobra = total_itens % capacidade;

        printf("Mochilas totalmente preenchidas: %d\n", mochilas_cheias);
        printf("Itens que sobraram: %d\n", sobra);
    }
}

void esoft_b_q1() {
    int a, b, c;

    printf("\n--- [ESOFT M B] Questao 1: Tres Inteiros Ordenados ---\n");
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (a == b || a == c || b == c) {
        printf("os numeros tem que ser distintos\n");
    } else {
        int temp;
        if (a > b) { temp = a; a = b; b = temp; }
        if (a > c) { temp = a; a = c; c = temp; }
        if (b > c) { temp = b; b = c; c = temp; }

        printf("Numeros em ordem crescente: %d %d %d\n", a, b, c);
    }
}

void esoft_b_q2() {
    double v1, v2;
    int cod;

    printf("\n--- [ESOFT M B] Questao 2: Operacoes Relacionais ---\n");
    printf("Digite o primeiro valor: ");
    scanf("%lf", &v1);
    printf("Digite o segundo valor: ");
    scanf("%lf", &v2);
    
    printf("\nCodigos de Operacao:\n");
    printf("1: Maior que (>)\n");
    printf("2: Menor que (<)\n");
    printf("3: Igual a (==)\n");
    printf("4: Diferente de (!=)\n");
    printf("Informe o codigo da operacao: ");
    scanf("%d", &cod);

    if (cod == 1) {
        printf("%s\n", (v1 > v2) ? "Verdadeiro" : "Falso");
    } else if (cod == 2) {
        printf("%s\n", (v1 < v2) ? "Verdadeiro" : "Falso");
    } else if (cod == 3) {
        printf("%s\n", (v1 == v2) ? "Verdadeiro" : "Falso");
    } else if (cod == 4) {
        printf("%s\n", (v1 != v2) ? "Verdadeiro" : "Falso");
    } else {
        printf("operador invalido\n");
    }
}

void menu_esoft_b() {
    int opcao;
    do {
        printf("\n========================================\n");
        printf("     PROVA ESOFT 2 M (B) - Lang&Tec\n");
        printf("========================================\n");
        printf("1 - Questao 0 (Mochilas e Sobra de Itens)\n");
        printf("2 - Questao 1 (Tres Inteiros Distintos e Ordem)\n");
        printf("3 - Questao 2 (Operadores Relacionais)\n");
        printf("0 - Voltar ao Menu Principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            esoft_b_q0();
        } else if (opcao == 2) {
            esoft_b_q1();
        } else if (opcao == 3) {
            esoft_b_q2();
        } else if (opcao == 0) {
            printf("Voltando...\n");
        } else {
            printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
}

void esoft_a_q0() {
    int nums[4];
    int encontrou = 0;
    int i;

    printf("\n--- [ESOFT M A] Questao 0: Impares Multiplos de 5 ---\n");
    for (i = 0; i < 4; i++) {
        printf("Digite o %do numero inteiro: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\nNumeros impares que sao multiplos de 5:\n");
    for (i = 0; i < 4; i++) {
        if (nums[i] % 2 != 0 && nums[i] % 5 == 0) {
            printf("- %d\n", nums[i]);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero atende aos criterios.\n");
    }
}

void esoft_a_q1() {
    int total_itens, capacidade;

    printf("\n--- [ESOFT M A] Questao 1: Total de Mochilas Preenchidas ---\n");
    printf("Digite a quantidade total de itens: ");
    scanf("%d", &total_itens);
    printf("Digite a capacidade maxima de cada mochila: ");
    scanf("%d", &capacidade);

    if (capacidade <= 0) {
        printf("Erro: A capacidade da mochila deve ser maior que zero.\n");
    } else {
        int mochilas_cheias = total_itens / capacidade;
        printf("Numero de mochilas totalmente preenchidas: %d\n", mochilas_cheias);
    }
}

void esoft_a_q2() {
    double valor, resultado;
    int cod;

    printf("\n--- [ESOFT M A] Questao 2: Conversao de Unidades ---\n");
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("\nTabela de Codigos de Conversao:\n");
    printf(" 1: Celsius (C) -> Fahrenheit (F)\n");
    printf(" 2: Fahrenheit (F) -> Celsius (C)\n");
    printf(" 3: Celsius (C) -> Kelvin (K)\n");
    printf(" 4: Kelvin (K) -> Celsius (C)\n");
    printf(" 5: Metro (m) -> Milha (mi)\n");
    printf(" 6: Milha (mi) -> Metro (m)\n");
    printf(" 8: Quilograma (kg) -> Libra (lb)\n");
    printf(" 9: Libra (lb) -> Quilograma (kg)\n");
    printf("10: km/h -> mph\n");
    printf("11: mph -> km/h\n");
    printf("Informe o codigo de conversao desejado: ");
    scanf("%d", &cod);

    if (cod == 1) {
        resultado = valor * 1.8 + 32;
        printf("%.2f C = %.2f F\n", valor, resultado);
    } else if (cod == 2) {
        resultado = (valor - 32) / 1.8;
        printf("%.2f F = %.2f C\n", valor, resultado);
    } else if (cod == 3) {
        resultado = valor + 273.15;
        printf("%.2f C = %.2f K\n", valor, resultado);
    } else if (cod == 4) {
        resultado = valor - 273.15;
        printf("%.2f K = %.2f C\n", valor, resultado);
    } else if (cod == 5) {
        resultado = valor / 1609.34;
        printf("%.2f m = %.6f mi\n", valor, resultado);
    } else if (cod == 6) {
        resultado = valor * 1609.34;
        printf("%.6f mi = %.2f m\n", valor, resultado);
    } else if (cod == 8) {
        resultado = valor * 2.205;
        printf("%.2f kg = %.3f lb\n", valor, resultado);
    } else if (cod == 9) {
        resultado = valor / 2.205;
        printf("%.2f lb = %.3f kg\n", valor, resultado);
    } else if (cod == 10) {
        resultado = valor / 1.609;
        printf("%.2f km/h = %.2f mph\n", valor, resultado);
    } else if (cod == 11) {
        resultado = valor * 1.609;
        printf("%.2f mph = %.2f km/h\n", valor, resultado);
    } else {
        printf("Erro: Unidade/Codigo de conversao inexistente no sistema!\n");
    }
}

void menu_esoft_a() {
    int opcao;
    do {
        printf("\n========================================\n");
        printf("     PROVA ESOFT 2 M (A) - Lang&Tec\n");
        printf("========================================\n");
        printf("1 - Questao 0 (Impares Multiplos de 5)\n");
        printf("2 - Questao 1 (Contagem de Mochilas Preenchidas)\n");
        printf("3 - Questao 2 (Conversor de Unidades)\n");
        printf("0 - Voltar ao Menu Principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            esoft_a_q0();
        } else if (opcao == 2) {
            esoft_a_q1();
        } else if (opcao == 3) {
            esoft_a_q2();
        } else if (opcao == 0) {
            printf("Voltando...\n");
        } else {
            printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
}

void adsis_a_q0() {
    int nums[5];
    int encontrou = 0;
    int i;

    printf("\n--- [ADSIS N A] Questao 0: Numeros Consecutivos ---\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %do numero inteiro: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\nValores em ordem consecutiva encontrados:\n");
    for (i = 0; i < 4; i++) {
        if (nums[i + 1] == nums[i] + 1 || nums[i + 1] == nums[i] - 1) {
            printf("- Sequencia consecutiva entre a posicao %d e %d: %d e %d\n", 
                   i + 1, i + 2, nums[i], nums[i + 1]);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum par de numeros consecutivos na ordem de entrada foi inserido.\n");
    }
}

void adsis_a_q1() {
    float peso, altura, imc;

    printf("\n--- [ADSIS N A] Questao 1: Calculo do IMC ---\n");
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (em metros, ex: 1.75): ");
    scanf("%f", &altura);

    if (altura <= 0 || peso <= 0) {
        printf("Erro: Peso e altura devem ser valores positivos.\n");
    } else {
        imc = peso / (altura * altura);
        printf("IMC Calculado: %.2f\n", imc);
        printf("Classificacao: ");

        if (imc < 18.5f) {
            printf("Abaixo do peso\n");
        } else if (imc <= 24.9f) {
            printf("Normal\n");
        } else if (imc <= 29.9f) {
            printf("Acima do peso\n");
        } else {
            printf("Obeso\n");
        }
    }
}

void adsis_a_q2() {
    int A = 6, B = 0, C = 0;

    printf("\n--- [ADSIS N A] Questao 2: Torre de Hanoi ---\n");
    printf("Regra do exercicio: A=6 (1+2+3), B=0, C=0.\n");
    printf("Estado Inicial -> Pino A: %d | Pino B: %d | Pino C: %d\n\n", A, B, C);

    A -= 1; C += 1;
    printf("Passo 1 (Mover disco 1 de A para C) -> A: %d, B: %d, C: %d\n", A, B, C);

    A -= 2; B += 2;
    printf("Passo 2 (Mover disco 2 de A para B) -> A: %d, B: %d, C: %d\n", A, B, C);

    C -= 1; B += 1;
    printf("Passo 3 (Mover disco 1 de C para B) -> A: %d, B: %d, C: %d\n", A, B, C);

    A -= 3; C += 3;
    printf("Passo 4 (Mover disco 3 de A para C) -> A: %d, B: %d, C: %d\n", A, B, C);

    B -= 1; A += 1;
    printf("Passo 5 (Mover disco 1 de B para A) -> A: %d, B: %d, C: %d\n", A, B, C);

    B -= 2; C += 2;
    printf("Passo 6 (Mover disco 2 de B para C) -> A: %d, B: %d, C: %d\n", A, B, C);

    A -= 1; C += 1;
    printf("Passo 7 (Mover disco 1 de A para C) -> A: %d, B: %d, C: %d\n", A, B, C);

    printf("\nEstado Final -> Pino A: %d | Pino B: %d | Pino C: %d\n", A, B, C);
}

void menu_adsis_a() {
    int opcao;
    do {
        printf("\n========================================\n");
        printf("     PROVA ADSIS 2 N (A) - Lang&Tec\n");
        printf("========================================\n");
        printf("1 - Questao 0 (Numeros Consecutivos)\n");
        printf("2 - Questao 1 (Calculo e Classificacao do IMC)\n");
        printf("3 - Questao 2 (Torre de Hanoi Operacoes)\n");
        printf("0 - Voltar ao Menu Principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            adsis_a_q0();
        } else if (opcao == 2) {
            adsis_a_q1();
        } else if (opcao == 3) {
            adsis_a_q2();
        } else if (opcao == 0) {
            printf("Voltando...\n");
        } else {
            printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
}

int main() {
    int opcao;

    do {
        printf("\n========================================\n");
        printf("     SISTEMA DE AVALIACOES DE PROGRAMACAO\n");
        printf("========================================\n");
        printf("1 - Prova ESOFT 2 M (B)\n");
        printf("2 - Prova ESOFT 2 M (A)\n");
        printf("3 - Prova ADSIS 2 N (A)\n");
        printf("0 - Sair do Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            menu_esoft_b();
        } else if (opcao == 2) {
            menu_esoft_a();
        } else if (opcao == 3) {
            menu_adsis_a();
        } else if (opcao == 0) {
            printf("\nEncerrando o programa. Ate mais!\n");
        } else {
            printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
