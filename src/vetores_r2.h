#include <stdio.h>
#include <stdbool.h>

#define pi 3.14159265359

typedef enum sentidoDoVetor
{
    primario = 1,
    contrario = -1
} sentidoDoVetor;

typedef struct vetor
{
    // No R2 a direção pode ser expressa como angulação.
    // Um número de ponto flutuante é o suficiente para
    // descrever um ângulo.
    double direcao;
    double comprimento;
    sentidoDoVetor sentido;
} vetor;

bool saoEquipolentes(vetor a, vetor b);
void printBool(bool x);
