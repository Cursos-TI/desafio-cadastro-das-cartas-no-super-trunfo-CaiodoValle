#include <stdio.h>

 
             // Desafio Super Trunfo - Países
         // Tema 3 - Batalha de Cartas Super Trunfo

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
            float SuperPoderA,SuperPoderB;
            int resultado1,resultado2,resultado3,resultado4,resultado5,resultado6,resultado7;



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

               DensidadePopulacional = (double) Populacao1 / Area1;

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

               DensidadePopulacional2 = (double) Populacao2 / Area2;

             printf("PIB da Cidade: \n");
             scanf("%f", &PIB2);
               printf("\n");

              PIBperCapita2 = (double) (PIB2 * 1000000000.0) / Populacao2;

             printf("Pontos Turísticos: \n");
             scanf("%d", &turistico2);
              printf(" \n \n");

              SuperPoderA = Populacao1 + Area1 + PIB1 + PIBperCapita + (DensidadePopulacional / DensidadePopulacional) + turistico1;
              SuperPoderB = Populacao2 + Area2 + PIB2 + PIBperCapita2 + (DensidadePopulacional2 / DensidadePopulacional2) + turistico2;

              resultado1 = Populacao1 > Populacao2;
              resultado2 = Area1 < Area2;
              resultado3 = PIB1 >= PIB2;
              resultado4 = PIBperCapita > PIBperCapita2;
              resultado5 =  DensidadePopulacional < DensidadePopulacional2;
              resultado6 = turistico1 > turistico2;
              resultado7 = SuperPoderA > SuperPoderB;



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
                printf("Super Poder: %.2f",SuperPoderA);
                printf("\n");

                  printf("----CADRASTO COMPLETO DO CARTÃO 2---- \n \n");

                printf("Letra: %c \n", Estado2);
                printf("Codigo da carta: %s \n", Codigo2);
                printf("Cidade: %s \n", Cidade2);
                printf("População: %d  de habitantes \n", Populacao2);
                printf("Área em km²: %.2f km²\n", Area2);
                printf("PIB da Cidade: %.2f Bilhões de Reais \n",PIB2);
                printf("Total de Pontos Turísticos: %d \n ",turistico2);
                printf("Densidade Populacional: %.2f hab/km²\n",DensidadePopulacional2);
                printf("PIB per Capita: R$ %.2f Reais\n",PIBperCapita2);
                printf("Super Poder: %.2f",SuperPoderB);
                
                 printf("\n \n");

                 printf("--- Quem é o Ganhador? --- \n \n");

                 printf(" Ganhador de cada modalidade: dígito 1(CARTA 1) e o digito 0(CARTA 2) \n \n");
                 printf(" CARTA 1 tem %d de habitantes e CARTA 2 tem %d de habitantes\n ",Populacao1,Populacao2);
                 printf(" Quem tem mais Habitantes 1(CARTA 1) ou Habitantes 0(CARTA 2): %d \n \n " , resultado1);
                  
                  printf(" CARTA 1 tem %.2f de km² e CARTA 2 tem %2.f de km²\n ",Area1,Area2);
                  printf("Qual área(km²) é menor?(CARTA 1 OU CARTA 2): %d \n \n ", resultado2);

                  printf(" CARTA 1 tem  R$ %.2f(Bilhões ou Milhões de Reais) de PIB e CARTA 2 tem R$ %.2f(Bilhões ou Milhões de Reais) de PIB :\n",PIB1,PIB2);
                  printf("Quem tem o PIB Maior(CARTA 1 OU CARTA 2): %d \n \n ", resultado3);

                  printf(" CARTA 1 tem R$ %.2f de Reais em PIB per Capita e CARTA 2 tem R$ %.2f de Reais em PIB per Capita\n",PIBperCapita,PIBperCapita2);
                  printf("Quem tem o PIB per Capita Maior(CARTA 1 OU CARTA 2): %d  \n \n ", resultado4);

                  printf(" CARTA 1 tem %.2f de Densidade Populacional tem %.2f de Densidade Populacional: \n",DensidadePopulacional,DensidadePopulacional2);
                  printf("Quem tem a Menor Densidade Capital(CARTA 1 OU CARTA 2): %d  \n \n ", resultado5);

                  printf(" CARTA 1 tem %.2f de Super Poder e CARTA 2 tem %.2f de Super Poder : \n ",SuperPoderA,SuperPoderB);
                  printf("Quem tem o Maior Super Poder(CARTA 1 OU CARTA 2): %d \n \n ", resultado7);

                  printf(" CARTA 1 tem %d de pontos turísticos e CARTA 2 tem %d de pontos turísticos\n ",turistico1,turistico2);
                  printf("Quem tem mais pontos turísticos(CARTA 1 OU CARTA 2): %d \n ", resultado6);
                  



                



                  // percebe-se que está tudo organizado e tendo uma funcionalidade expecional.
                  //No momento não usei struct para agilizar a organização pois estou aprendendo ainda
                  // O projeito feito para o Nível Mestre

                return 0;
        }