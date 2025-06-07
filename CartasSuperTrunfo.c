#include <stdio.h>
#include <stdio.h>
typedef struct {
    char Estado;[30];
    char Código da Carta;[10];
    char Nome da Cidade;[50];
    int População;[200000];
    float Área;[1000.0];
    float PIB;[50000.0];
    int NDPT;[10];
} Carta;
#define NUM_CARTAS 3

Carta baralho[NUM_CARTAS] = {
    {"SP", "001", "São Paulo", 12300000, 1500.0, 500000.0, 10},
    {"RJ", "002", "Rio de Janeiro", 6748000, 1200.0, 300000.0, 8},
    {"MG", "003", "Belo Horizonte", 2500000, 800.0, 200000.0, 5}
};
}
