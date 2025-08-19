#include <stdio.h>
//Super Trunfo - Nível iniciante
int main() {
    char nomePais[20], nomeEstado[20], numeroCarta[10], nomeCidade[20];
    int populacao, pontosTuristicos;
    float areaTeritorial, pib, densidadePopulacional, pibPerCapita;
    float calcDensidadePop, calcPibPerCapia; //Nível Aventureiro - Calcula a Calcular a Densidade Populacional e o PIB per Capita

    printf("========== Jogo - Super Trunfo ========== \n========================================= \n");
    printf("Cadastre a primeira carta do jogo\n");
    printf("Informe o código da carta: \n");
    scanf("%s", numeroCarta);

    printf("Informe o Nome do país: \n");
    scanf("%s", nomePais);

    printf("Informe o Nome do estado: \n");
    scanf("%s", nomeEstado);

    printf("Informa o Nome da cidade: \n");
    scanf("%s", nomeCidade);

    printf("Informa a População: \n");
    scanf("%d", &populacao);

    printf("Informe a Área territorial por (Km²): \n");
    scanf("%f", &areaTeritorial);

    printf("Informe o PIB: \n");
    scanf("%f", &pib);

    printf("Informa a Quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    //Nível Aventureiro - Calcular a Densidade Populacional
    calcDensidadePop = populacao / areaTeritorial;
    //Nível Aventureiro - Calcular o PIB per Capita
    calcPibPerCapia = pib / populacao;

    printf("=======================================\n");

    printf("Carta cadastrada\n");
    printf("Numero da carta: %s\n", numeroCarta);
    printf("Nome do país: %s\n", nomePais);
    printf("Nome do estado: %s\n", nomeEstado);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área territorial: %f Km²\n", areaTeritorial);
    printf("PIB: %f \n", pib);
    printf("Pontos turísticus: %d\n", pontosTuristicos);
    //Nível Aventureiro
    printf("Desidade populacional: %f\n", calcDensidadePop);
    printf("PIB per Capita: %f\n", calcPibPerCapia);

    printf("=======================================\n");

    printf("Cadastre a segunda carta do jogo\n");
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

    printf("Informe a Densidade populacional: \n");
    scanf("%f", &densidadePopulacional);

    printf("Informe o PIB per Capita: \n");
    scanf("%f", pibPerCapita);

    //Nível Aventureiro - Calcular a Densidade Populacional
    calcDensidadePop = populacao / areaTeritorial;
    //Nível Aventureiro - Calcular o PIB per Capita
    calcPibPerCapia = pib / populacao;

    printf("=======================================\n");

    printf("Carta cadastrada: \n");
    printf("Numero da carta: %s\n", numeroCarta);
    printf("Nome do país: %s\n", nomePais);
    printf("Nome do estado: %s\n", nomeEstado);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área territorial: %f Km²\n", areaTeritorial);
    printf("PIB: %f \n", pib);
    printf("Pontos turísticus: %d\n", pontosTuristicos);

    //Nível Aventureiro
    printf("Desidade populacional: %f\n", calcDensidadePop);
    printf("PIB per Capita: %f\n", calcPibPerCapia);

    printf("Cartas cadastradas com sucesso\n");

    return 0;
}
