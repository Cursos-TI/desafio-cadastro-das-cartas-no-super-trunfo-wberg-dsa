#include <stdio.h>
//Super Trunfo - Nível iniciante
int main() {
    char nomePais[20], nomeEstado[20], numeroCarta[10], nomeCidade[20];
    int populacao, pontosTuristicos;
    float areaTeritorial, pib;

    printf("========== Jogo - Super Trunfo ========== \n========================================= \n");

    printf("Informe o código da carta: \n");
    scanf("%s", numeroCarta);

    printf("Informe o país: \n");
    scanf("%s", nomePais);

    printf("Informe o estado: \n");
    scanf("%s", nomeEstado);

    printf("Informa o nome da cidade: \n");
    scanf("%s", nomeCidade);

    printf("Informa a população: \n");
    scanf("%d", &populacao);

    printf("Informe a área territorial por (Km²): \n");
    scanf("%f", &areaTeritorial);

    printf("Informe o PIB: \n");
    scanf("%f", &pib);

    printf("Informa a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("=======================================\n");

    printf("Informações das cartas: \n");
    printf("Numero da carta: %s\n", numeroCarta);
    printf("Nome do país: %s\n", nomePais);
    printf("Nome do estado: %s\n", nomeEstado);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área territorial: %f Km²\n", areaTeritorial);
    printf("PIB: %f \n", pib);
    printf("Pontos turísticus: %d\n", pontosTuristicos);

    return 0;
}
