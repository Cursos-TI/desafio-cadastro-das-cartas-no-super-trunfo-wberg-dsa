#include <stdio.h>
//Super Trunfo - Nível iniciante
int main() {
    char nomePais[20], nomeEstado[20], nuemroCarta[10], nomeCidade[20];
    int populacao, pontosTuristicos;
    float areaTeritorial, pib;

    printf("========== Jogo - Super Trunfo ========== \n========================================= \n");
    printf("Carta - Brasil \n");

    printf("Informe o estado: \n");
    fgets(nomeEstado, sizeof(nomeEstado), stdin);

    printf("=======================================\n");

    printf("Informações das cartas: \n");
    printf("Nome do estado: %s\n", nomeEstado);

    return 0;
}
