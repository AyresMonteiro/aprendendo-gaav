#include <stdio.h>
#include <stdbool.h>
#include "./vetores_r2.h"

bool saoEquipolentes(vetor a, vetor b)
{
    return a.direcao == b.direcao && a.comprimento == b.comprimento && a.sentido == b.sentido;
}
