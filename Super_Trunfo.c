#include <stdio.h>
#include <string.h>

int main() {
    printf("------ Jogo Super Trunfo Cidades ------\n");

    // Carta 01
    char estado01[10];
    char codigo01[10];
    char cidade01[50];
    unsigned long int populacao01;
    float area01;
    float pib01;
    int Pontosturisticos01;
    float Densidadepopulacional1;
    float Pibpercapita1;
    float Superpoder1;

    // Entrada de Dados da Carta 01
    printf("Cadastro da Carta 01: \n");
    printf("Digite o estado: ");
    scanf("%s", estado01);

    printf("Digite o código da carta: ");
    scanf("%s", codigo01);

    getchar(); // Consome o \n deixado pelo scanf
    printf("Digite o nome da Cidade: ");
    fgets(cidade01, sizeof(cidade01), stdin);
    cidade01[strcspn(cidade01, "\n")] = '\0'; // remove o \n

    printf("Digite a população: ");
    scanf("%lu", &populacao01);

    printf("Digite a área (em km²): ");
    scanf("%f", &area01);

    printf("Digite o PIB (em bilhões de Reais): ");
    scanf("%f", &pib01);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pontosturisticos01);

    // Cálculo da Carta 1
    Densidadepopulacional1 = populacao01 / area01;
    Pibpercapita1 = pib01 * 1000000000 / populacao01;
    Superpoder1 = populacao01 + area01 + pib01 + Pontosturisticos01 + Pibpercapita1 + (1.0f / Densidadepopulacional1);

    // Carta 02
    char estado02[10];
    char codigo02[10];
    char cidade02[50];
    unsigned long int populacao02;
    float area02;
    float pib02;
    int Pontosturisticos02;
    float Densidadepopulacional2;
    float Pibpercapita2;
    float Superpoder2;

    // Entrada de dados da Carta 02
    printf("\nCadastro da Carta 02: \n");
    printf("Digite o estado: ");
    scanf("%s", estado02);

    printf("Digite o código da carta: ");
    scanf("%s", codigo02);

    getchar(); // Consome o \n deixado pelo scanf
    printf("Digite o nome da Cidade: ");
    fgets(cidade02, sizeof(cidade02), stdin);
    cidade02[strcspn(cidade02, "\n")] = '\0'; // remove o \n

    printf("Digite a população: ");
    scanf("%lu", &populacao02);

    printf("Digite a área (em km²): ");
    scanf("%f", &area02);

    printf("Digite o PIB (em bilhões de Reais): ");
    scanf("%f", &pib02);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pontosturisticos02);

    // Cálculo da Carta 2
    Densidadepopulacional2 = populacao02 / area02;
    Pibpercapita2 = pib02 * 1000000000 / populacao02;
    Superpoder2 = populacao02 + area02 + pib02 + Pontosturisticos02 + Pibpercapita2 + (1.0f / Densidadepopulacional2);

    // Exibição dos dados da carta 01
    printf("\n****Carta 01****\n");
    printf("Estado: %s\n", estado01);
    printf("Código da carta: %s\n", codigo01);
    printf("Nome da cidade: %s\n", cidade01);
    printf("População: %lu\n", populacao01);
    printf("Área (em km²): %.2f\n", area01);
    printf("PIB (em bilhões de Reais): %.2f\n", pib01);
    printf("Pontos turísticos: %d\n", Pontosturisticos01);
    printf("Densidade populacional: %.2f\n", Densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", Pibpercapita1);
    printf("Super Poder: %.2f\n", Superpoder1);

    // Exibição dos dados da carta 02
    printf("\n****Carta 02****\n");
    printf("Estado: %s\n", estado02);
    printf("Código da carta: %s\n", codigo02);
    printf("Nome da cidade: %s\n", cidade02);
    printf("População: %lu\n", populacao02);
    printf("Área (em km²): %.2f\n", area02);
    printf("PIB (em bilhões de Reais): %.2f\n", pib02);
    printf("Pontos turísticos: %d\n", Pontosturisticos02);
    printf("Densidade populacional: %.2f\n", Densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", Pibpercapita2);
    printf("Super Poder: %.2f\n", Superpoder2);

    // Comparação
    printf("\n==== Comparação de Cartas (POPULAÇÃO)====\n");
    printf("Carta 1 - %s : %lu habitantes\n", cidade01, populacao01);
    printf("Carta 2 - %s : %lu habitantes\n", cidade02, populacao02);

    if (populacao01 > populacao02) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }

    return 0;
}
