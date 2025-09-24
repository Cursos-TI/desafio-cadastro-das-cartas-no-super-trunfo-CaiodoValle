#include <stdio.h>

 
             // Desafio Super Trunfo - Países
         // Tema 2 - Calculando a Densidade Populacional e PIB per Capita

        int main(){

            char Estado1,Estado2;
            char Codigo1[20],Codigo2[20];
            char Cidade1[50],Cidade2[50];
            int Populacao1 ,Populacao2 ;
            float Area1,Area2;
            float PIB1,PIB2;
            int turistico1,turistico2;
            float DensidadePopulacional,DensidadePopulacional2;
            double PIBperCapita,PIBperCapita2;

              printf("-----Cadrasto Carta 1:----- \n \n");
                
              printf("Escolha uma letra entre A a G: \n");
             scanf(" %c", &Estado1);
               printf("\n");

             printf("Código da Carta: (ex: A01,A02 )\n");
             scanf("%s", Codigo1);
               printf("\n");

             printf("Digite a Cidade:\n");
             scanf(" %[^\n]", Cidade1);
               printf("\n");

             printf("Quantidade da População: \n");
             scanf("%d", &Populacao1);
              printf("\n");

             printf("Área em km²: \n");
             scanf("%f", &Area1);
               printf("\n");

             printf("PIB da Cidade: \n");
             scanf("%f", &PIB1);
               printf("\n");

               DensidadePopulacional = (float) Populacao1 / Area1;

              PIBperCapita = (double) (PIB1 * 1000000000.0) / Populacao1;

             printf("Pontos Turísticos: \n");
             scanf("%d", &turistico1);
              printf(" \n \n");

               printf("-----Cadrasto Carta 2:----- \n \n");


             printf("Escolha uma letra entre A a G: \n");
             scanf(" %c", &Estado2);
               printf("\n");
            
             printf("Código da Carta: (ex: A01,A02 )\n");
             scanf("%s", Codigo2);
               printf("\n");

             printf("Digite a Cidade:\n");
             scanf(" %[^\n]", Cidade2);
               printf("\n");
             
             printf("Quantidade da População: \n");
             scanf("%d", &Populacao2);
               printf("\n");
               
             printf("Área em km²: \n");
             scanf("%f", &Area2);
               printf("\n");

               DensidadePopulacional2 = (float) Populacao2 / Area2;

             printf("PIB da Cidade: \n");
             scanf("%f", &PIB2);
               printf("\n");

              PIBperCapita2 = (double) (PIB2 * 1000000000.0) / Populacao2;

             printf("Pontos Turísticos: \n");
             scanf("%d", &turistico2);
              printf(" \n \n");

                  printf("----CADRASTO COMPLETO DO CARTÃO 1---- \n \n");

                printf("Letra: %c \n", Estado1);
                printf("Codigo da carta: %s \n", Codigo1);
                printf("Cidade: %s \n", Cidade1);
                printf("População: %d de habitantes \n", Populacao1);
                printf("Área em km²: %.2f km²\n", Area1);
                printf("PIB da Cidade: %.2f Bilhões de Reais \n",PIB1);
                printf("Total de Pontos Turísticos: %d \n ",turistico1);
                printf("Densidade Populacional: %2f hab/km²\n",DensidadePopulacional);
                printf("PIB per Capita: R$ %2f Reais\n",PIBperCapita);
                printf("\n");

                  printf("----CADRASTO COMPLETO DO CARTÃO 2---- \n \n");

                printf("Letra: %c \n", Estado2);
                printf("Codigo da carta: %s \n", Codigo2);
                printf("Cidade: %s \n", Cidade1);
                printf("População: %d  de habitantes \n", Populacao2);
                printf("Área em km²: %.2f km²\n", Area2);
                printf("PIB da Cidade: %.2f Bilhões de Reais \n",PIB2);
                printf("Total de Pontos Turísticos: %d \n ",turistico2);
                printf("Densidade Populacional: %.2f hab/km²\n",DensidadePopulacional2);
                printf("PIB per Capita: R$ %.2f Reais\n",PIBperCapita2);
                printf("\n");


                  // percebe-se que está tudo organizado e tendo uma funcionalidade expecional.
                  //No momento não usei struct para agilizar a organização pois estou aprendendo ainda
                  // O projeito feito para o Nível Aventureiro

                return 0;
        }