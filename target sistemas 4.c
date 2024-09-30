#include <stdio.h>
#include <stdlib.h>

int main() {
    // Valores de faturamento por estado
    double faturamento_SP = 67836.43;
    double faturamento_RJ = 36678.66;
    double faturamento_MG = 29229.88;
    double faturamento_ES = 27165.48;
    double faturamento_Outros = 19849.53;

    // Calcular o faturamento total
    double faturamento_total = faturamento_SP + faturamento_RJ + faturamento_MG + faturamento_ES + faturamento_Outros;

    // Calcular o percentual de cada estado
    double percentual_SP = (faturamento_SP / faturamento_total) * 100;
    double percentual_RJ = (faturamento_RJ / faturamento_total) * 100;
    double percentual_MG = (faturamento_MG / faturamento_total) * 100;
    double percentual_ES = (faturamento_ES / faturamento_total) * 100;
    double percentual_Outros = (faturamento_Outros / faturamento_total) * 100;

    // Exibir os resultados
    printf("Percentual de representação por estado:\n");
    printf("SP: %.2f%%\n", percentual_SP);
    printf("RJ: %.2f%%\n", percentual_RJ);
    printf("MG: %.2f%%\n", percentual_MG);
    printf("ES: %.2f%%\n", percentual_ES);
    printf("Outros: %.2f%%\n", percentual_Outros);

    return 0;
}

