#include <stdio.h>
typedef struct {
    char estado[3];
    char codigo_carta[11];
    char nome_cidade[51];
    int populacao;
    float area;
    float pib;
    int ndpt;
} Carta;
#define NUM_CARTAS 3

Carta baralho[NUM_CARTAS] = {
    {"SP", "001", "São Paulo", 12300000, 1500.0, 500000.0, 10},
    {"RJ", "002", "Rio de Janeiro", 6748000, 1200.0, 300000.0, 8},
    {"MG", "003", "Belo Horizonte", 2500000, 800.0, 200000.0, 5}
};
