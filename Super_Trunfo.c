#include <stdio.h>
#include <string.h>

int main() {

printf("------ Jogo Super Trunfo Cidades ------\n");

//Carta 01
char estado01[10];
char codigo01[10];
char cidade01[50];
int populacao01;
float area01;
float pib01;
int Pontosturisticos01;
float Densidadepopulacional1;
float Pibpercapita1;


//Carta 02
char estado02[10];
char codigo02[10];
char cidade02[50];
int populacao02;
float area02;
float pib02;
int Pontosturisticos02;
float Densidadepopulacional2;
float Pibpercapita2;

//Entrada de Dados da Carta 01
printf("Cadastro da Carta 01: \n");
printf("Digite o estado: ");
scanf("%s", estado01);

printf("Digite o código da carta: ");
scanf("%s", codigo01);

getchar(); //Consome o \n deixado pelo scanf

printf("Digite o nome da Cidade: ");
fgets(cidade01, sizeof(cidade01),stdin);
cidade01[strcspn(cidade01, "\n")] = '\0'; // remove o \n

printf("Digite a população: ");
scanf("%d", &populacao01);

printf("Digite a area (em km²): ");
scanf("%f", &area01);

printf("Digit o Pib (em bilhões de Reais): ");
scanf("%f", &pib01);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &Pontosturisticos01);

//Calculo da Carta 1
Densidadepopulacional1 = populacao01 / (float) area01;
Pibpercapita1 = pib01 * 1000000000  / (float) populacao01;

//Entrada de dados da Carta 02
printf("Cadastro da Carta 02: \n");
printf("Digite o estado: ");
scanf("%s", estado02);

printf("Digite o código da carta: ");
scanf("%s", codigo02);

getchar(); //Consome o \n deixado pelo scanf
printf("Digite o nome da Cidade: ");
fgets(cidade02, sizeof(cidade02),stdin);
cidade02[strcspn(cidade02, "\n")] = '\0'; // remove o \n

printf("Digite a população: ");
scanf("%d", &populacao02);

printf("Digite a area (em km²): ");
scanf("%f", &area02);

printf("Digite o Pib (em bilhões de Reais): ");
scanf("%f", &pib02);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &Pontosturisticos02);

//Cálculo da carta 2
Densidadepopulacional2 = populacao02 / (float) area02;
Pibpercapita2 = pib02 * 1000000000 /(float) populacao02;


//Exibição dos dados da carta 01 
printf("\n****Carta 01****\n");
printf("Estado: %s\n", estado01);
printf("Códido da carta: %s\n", codigo01);
printf("Nome da cidade: %s\n", cidade01);
printf("População: %d\n", populacao01);
printf("Area (em km²): %.2f\n", area01);
printf("PIB (em bilhões de Reais): %.2f\n", pib01);
printf("Pontos turísticos: %d\n", Pontosturisticos01);
printf("Densidade populacional: %.2f\n", Densidadepopulacional1);
printf("Pib per Capita: %.2f\n", Pibpercapita1);

//Exibição dos dados da carta 02
printf("\n****Carta 02****\n");
printf("Estado: %s\n", estado02);
printf("Códido da carta: %s\n", codigo02);
printf("Nome da cidade: %s\n", cidade02);
printf("População: %d\n", populacao02);
printf("Area (em km²): %.2f\n", area02);
printf("PIB (em bilhões de Reais): %.2f\n", pib02);
printf("Pontos turísticos: %d\n", Pontosturisticos02);
printf("Densidade populacional: %.2f\n", Densidadepopulacional2);
printf("Pib per Capita: %.2f\n", Pibpercapita2);


return 0;

}