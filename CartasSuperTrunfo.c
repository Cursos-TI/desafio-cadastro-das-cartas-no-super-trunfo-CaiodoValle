#include <stdio.h>

             // Desafio Super Trunfo - Países
         // Tema 1 - Cadastro das Cartas

        int main(){

            char Estado1[3] = "SP";
            char Codigo1[20] ="A01";
            char Cidade1[50] = "São Paulo";
            int Populacao1 = 11;
            float Area1 = 1521.11;
            float PIB1 = 828.98;
            int turistico1 = 13;


             printf("CARTA DO ESTADO 1 \n");
             printf("Estado: %s \n", Estado1);
             printf("Código da Carta: %s\n", Codigo1);
             printf("Cidade: %s \n", Cidade1);
             printf("População: %d Milhões de habitantes\n", Populacao1);
             printf("Àrea em km²: %.2f  km²\n", Area1);
             printf("PIB: %.2f Bilhões de Reais\n", PIB1);
              printf("Números de pontos turísticos: %d \n", turistico1);
               printf("\n \n");
                //colocado +1 (\n) para ter o espaço entre os registro e deixar mais facil de entender.


                     //Coloquei as caixas em escalação de 1 e 2. 
                     // exp: char ciade1, char cidade2
                     // tudo está de acordo e organizado para deixar fácil o entendimento.
                     // Coloquei os estados em [] para deixar mais especifico o caractere e deixar mais  intuitivo.




                   char Estado2[3] = "RJ";
                   char Codigo2[20] ="A02";
                   char Cidade2[50] = "Rio de Janeiro";
                   int Populacao2 = 6;
                   float Area2 = 1200.33;
                   float PIB2 = 359.64;
                   int turistico2 = 60;


                    printf("CARTA DE ESTADO 2 \n");
                    printf("Estado: %s \n", Estado2);
                    printf("Código da Carta: %s\n", Codigo2);
                    printf("Cidade: %s \n", Cidade2);
                    printf("População: %d  Milhões de habitantes\n", Populacao2);
                    printf("Àrea em km²: %.2f km² \n", Area2);
                    printf("PIB: %.2f Bilhões de Reais \n", PIB2);
                    printf("Números de pontos turísticos: %d \n", turistico2);

                        //Percebe-se que tudo está organizado e de modo simples e direto para ser entendido.   
                    return 0;
        } 
