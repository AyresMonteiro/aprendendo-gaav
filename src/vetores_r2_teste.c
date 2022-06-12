#include "./vetores_r2.h"

void printBool(bool x)
{
    printf(x ? "true" : "false");
    putchar('\n');
}

int main()
{
    printf("{direcao: pi/4, comprimento: 3, sentido: primario}\n");
    printf("é equipolente a\n");
    printf("{direcao: pi/4, comprimento: 3, sentido: contrario}\n");
    printf("?\n");

    vetor a = {direcao : pi / 4, comprimento : 3, sentido : primario};
    vetor b = {direcao : pi / 4, comprimento : 3, sentido : contrario};

    printBool(saoEquipolentes(a, b));

    putchar('\n');

    printf("{direcao: pi/4, comprimento: 3, sentido: primario}\n");
    printf("é equipolente a\n");
    printf("{direcao: pi/4, comprimento: 3, sentido: primario}\n");
    printf("?\n");

    printBool(saoEquipolentes(a, a));
}
