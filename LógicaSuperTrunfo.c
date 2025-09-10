#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){

//Sistema :
int opcao, opcao2, opcao3, TentarNovamente, TentarNovamente_Resetar, TentarNovamente_Salvo, Edicao;
int CartaAleatoria_Jogador, CartaAleatoria_CPU, ResetarAleatorio;

//Reiniciar Jogo :
do{

    //Resetando informações de while :
    TentarNovamente = 0;
    TentarNovamente_Resetar = 0;
    TentarNovamente_Salvo = 0;

//Serve reportar se houve digitação de caracteres indevidos em opção 1 e 2, e impedir o print de Soma :
    int VerificacaoDeErro1, VerificacaoDeErro2;

//Adição de variáveis para somar :
    float Soma_CA1, Soma_CA2;
    float Soma_CB1, Soma_CB2;
    float Resultado_A, Resultado_B;
    int ResultadoDeVitoria, Vitoria1, Vitoria2, Vitoria3;

//Variáveis : Cartas Registradas, escolha aleatória do jogador (1)
    char estado_1 [50], cidade_1 [50], codigo_1 [50];
    int pontos_turisticos_1;
    unsigned long int populacao_1;
    float area_1, pib_1;

//Variáveis : Cartas Registradas, escolha aleatória da CPU (2)
    char estado_2 [50], cidade_2 [50], codigo_2 [50];
    int pontos_turisticos_2;
    unsigned long int populacao_2;
    float area_2, pib_2;

//Variáveis : Carta A -------------------------------------------------------
    char estado_A [50], cidade_A [50], codigo_A [50];
    int pontos_turisticos_A;
    unsigned long int populacao_A;
    float area_A, pib_A;

//Variáveis : Carta B -------------------------------------------------------
    char estado_B [50], cidade_B [50], codigo_B [50];
    int pontos_turisticos_B;
    unsigned long int populacao_B;
    float area_B, pib_B;




//Edição de cartas Opcional :
    printf("\n * * * * * * * * * * * * * * * * * * * * * SUPER-TRUNFO * * * * * * * * * * * * * * * * * * * * * \n\n");
    printf("Menu de inicialização : \n");
    printf("- - - > Você gostaria criar suas próprias cartas, ou usar a predefinição padrão?\n\n");
    printf("1. Usar Cartas Pradrões\n");
    printf("2. Criar Cartas Novas.\n");
    printf("3. Sair.\n");
    scanf("%d", &Edicao);

switch (Edicao){
case 1: 




//Cartas Registradas :


    //Jogador : 
    srand(time(0));
    CartaAleatoria_Jogador = (rand() % 8) + 1;

    switch (CartaAleatoria_Jogador)
    {
    case 1:
        //Bahia :
        strcpy(estado_A, "Bahia");
        strcpy(cidade_A, "Salvador");
        strcpy(codigo_A, "BA");
        pontos_turisticos_A = 30;
        populacao_A = 14140000;
        area_A = 565733;
        pib_A = 352600000000;
        break;

    case 2:
        //Ceará :
        strcpy(estado_A, "Ceará");
        strcpy(cidade_A, "Fortaleza");
        strcpy(codigo_A, "CE");
        pontos_turisticos_A = 30;
        populacao_A = 9230000;
        area_A = 148894;
        pib_A = 194900000000;
        break;

    case 3:
        //Minas Gerais :
        strcpy(estado_A, "Minas Gerais");
        strcpy(cidade_A, "Belo Horizonte");
        strcpy(codigo_A, "MG");
        pontos_turisticos_A = 30;
        populacao_A = 21390000;
        area_A = 586521;
        pib_A = 924700000000;
        break;

    case 4:
        //Pará :
        strcpy(estado_A, "Pará");
        strcpy(cidade_A, "Belém");
        strcpy(codigo_A, "PA");
        pontos_turisticos_A = 30;
        populacao_A = 8440000;
        area_A = 1245870;
        pib_A = 262900000;
        break;

    case 5:
        //Pernambuco :
        strcpy(estado_A, "Pernambuco");
        strcpy(cidade_A, "Recife");
        strcpy(codigo_A, "PE");
        pontos_turisticos_A = 25;
        populacao_A = 9560000;
        area_A = 98068;
        pib_A = 233400000000;
        break;

    case 6:
        //Rio de Janeiro :
        strcpy(estado_A, "Rio de Janeiro");
        strcpy(cidade_A, "RJ");
        strcpy(codigo_A, "Rio de Janeiro");
        pontos_turisticos_A = 30;
        populacao_A = 16060000;
        area_A = 43750;
        pib_A = 1150000000000;
        break;

    case 7:
        //Santa Catarina :
        strcpy(estado_A, "Santa Catarina");
        strcpy(cidade_A, "Florianópolis");
        strcpy(codigo_A, "SC");
        pontos_turisticos_A = 25;
        populacao_A = 7610000;
        area_A = 95731;
        pib_A = 428600000000;
        break;

    case 8:
        //São Paulo :
        strcpy(estado_A, "São Paulo");
        strcpy(cidade_A, "São Paulo");
        strcpy(codigo_A, "SP");
        pontos_turisticos_A = 30;
        populacao_A = 46600000;
        area_A = 248219;
        pib_A = 3130000000000;
        break;
    }


    //CPU :
    srand(time(0) * ((rand() % 999) + 1));
    CartaAleatoria_CPU = (rand() % 8) + 1;

        if(CartaAleatoria_Jogador == CartaAleatoria_CPU){
            srand(time(0) * ((rand() % 9999) + 1));
            CartaAleatoria_CPU = (rand() % 8) + 1;

            if(CartaAleatoria_Jogador == CartaAleatoria_CPU){
            srand(time(0) * ((rand() % 99999) + 1));
            CartaAleatoria_CPU = (rand() % 8) + 1;
            }
        }

    

        switch (CartaAleatoria_CPU)
    {
    case 1:
        //Bahia :
        strcpy(estado_B, "Bahia");
        strcpy(cidade_B, "Salvador");
        strcpy(codigo_B, "BA");
        pontos_turisticos_B = 30;
        populacao_B = 14140000;
        area_B = 565733;
        pib_B = 352600000000;
        break;

    case 2:
        //Ceará :
        strcpy(estado_B, "Ceará");
        strcpy(cidade_B, "Fortaleza");
        strcpy(codigo_B, "CE");
        pontos_turisticos_B = 30;
        populacao_B = 9230000;
        area_B = 148894;
        pib_B = 194900000000;
        break;

    case 3:
        //Minas Gerais :
        strcpy(estado_B, "Minas Gerais");
        strcpy(cidade_B, "Belo Horizonte");
        strcpy(codigo_B, "MG");
        pontos_turisticos_B = 30;
        populacao_B = 21390000;
        area_B = 586521;
        pib_B = 924700000000;
        break;

    case 4:
        //Pará :
        strcpy(estado_B, "Pará");
        strcpy(cidade_B, "Belém");
        strcpy(codigo_B, "PA");
        pontos_turisticos_B = 30;
        populacao_B = 8440000;
        area_B = 1245870;
        pib_B = 262900000;
        break;

    case 5:
        //Pernambuco :
        strcpy(estado_B, "Pernambuco");
        strcpy(cidade_B, "Recife");
        strcpy(codigo_B, "PE");
        pontos_turisticos_B = 25;
        populacao_B = 9560000;
        area_B = 98068;
        pib_B = 233400000000;
        break;

    case 6:
        //Rio de Janeiro :
        strcpy(estado_B, "Rio de Janeiro");
        strcpy(cidade_B, "RJ");
        strcpy(codigo_B, "Rio de Janeiro");
        pontos_turisticos_B = 30;
        populacao_B = 16060000;
        area_B = 43750;
        pib_B = 1150000000000;
        break;

    case 7:
        //Santa Catarina :
        strcpy(estado_B, "Santa Catarina");
        strcpy(cidade_B, "Florianópolis");
        strcpy(codigo_B, "SC");
        pontos_turisticos_B = 25;
        populacao_B = 7610000;
        area_B = 95731;
        pib_B = 428600000000;
        break;

    case 8:
        //São Paulo :
        strcpy(estado_B, "São Paulo");
        strcpy(cidade_B, "São Paulo");
        strcpy(codigo_B, "SP");
        pontos_turisticos_B = 30;
        populacao_B = 46600000;
        area_B = 248219;
        pib_B = 3130000000000;
        break;
    }

        

        

        

        

        

    

break;

case 2:
//Definições : Carta A -------------------------------------------------------
    printf(" - - - - - - - - - - - CARTA A - - - - - - - - - - - \n\n");

    //Área de pedido e entrada de dados :
        //Char : 
    printf("");
    fgets(estado_A, 50, stdin);
    estado_A[strcspn(estado_A,"\n")] = 0;

    printf("Digite o Nome do Estado : ");
    fgets(estado_A, 50, stdin);
    estado_A[strcspn(estado_A,"\n")] = 0;

    printf("Digite o Código da Carta : ");
    fgets(codigo_A, 50, stdin);
    codigo_A[strcspn(codigo_A,"\n")] = 0;

    printf("Digite o Nome da Cidade : ");
    fgets(cidade_A, 50, stdin);
    cidade_A[strcspn(cidade_A,"\n")] = 0;
    
        //Int :
    printf("Digite a População : ");
    scanf("%lu", &populacao_A);

    printf("Digite a Quantidade de Pontos Turísticos : ");
    scanf("%d", &pontos_turisticos_A);

        //Float :
    printf("Digite a Área : ");
    scanf("%f", &area_A);

    printf("Digite o PIB : ");
    scanf("%f", &pib_A);


//Definições : Carta B -------------------------------------------------------
    printf("\n - - - - - - - - - - - CARTA B - - - - - - - - - - - \n\n");

    //Área de pedido e entrada de dados :
        //Char : 
    printf("");
    fgets(estado_B, 50, stdin);
    estado_B[strcspn(estado_B,"\n")] = 0;

    printf("Digite o Nome do Estado : ");
    fgets(estado_B, 50, stdin);
    estado_B[strcspn(estado_B,"\n")] = 0;

    printf("Digite o Código da Carta : ");
    fgets(codigo_B, 50, stdin);
    codigo_B[strcspn(codigo_B,"\n")] = 0;

    printf("Digite o Nome da Cidade : ");
    fgets(cidade_B, 50, stdin);
    cidade_B[strcspn(cidade_B,"\n")] = 0;
    
        //Int :
    printf("Digite a População : ");
    scanf("%lu", &populacao_B);

    printf("Digite a Quantidade de Pontos Turísticos : ");
    scanf("%d", &pontos_turisticos_B);

        //Float :
    printf("Digite a Área : ");
    scanf("%f", &area_B);

    printf("Digite o PIB : ");
    scanf("%f", &pib_B);

    printf("\n\n");
break;

case 3:
    printf("Saindo...\n\n\n");
    return 0;

default:
    printf("\nO jogador digitou informações irreconhecíveis ao jogo, assim resultando em sua:\nDesistência Forçada.\nTente novamente!\n");
    VerificacaoDeErro1 = 1;
break;
}  
    
do{
TentarNovamente = 0;
TentarNovamente_Resetar = 0;
TentarNovamente_Salvo = 0;


    //Calculos:

        //Calculos de atributos :

            //Carta A :
            float densidade_populacional_A, pib_per_capita_A, super_poder_A;

            densidade_populacional_A = populacao_A / area_A;
            pib_per_capita_A = pib_A / populacao_A;
            super_poder_A = (float)(populacao_A + pontos_turisticos_A + area_A + pib_A + (1 / densidade_populacional_A) + pib_per_capita_A);

            //Carta B :
            float densidade_populacional_B, pib_per_capita_B, super_poder_B;

            densidade_populacional_B = populacao_B / area_B;
            pib_per_capita_B = pib_B / populacao_B;
            super_poder_B = (float)(populacao_B + pontos_turisticos_B + area_B + pib_B + (1 / densidade_populacional_B) + pib_per_capita_B);


    //Área de apresentação de dados coletados :

        //Dados da Carta A :   
    printf(" ~'- _ - ~ ' ~ - _ - '~ CARTA : Jogador ~'- _ - ~ ' ~ - _ - '~ \n\n");

    printf("Estado : %s.\n", estado_A);
    printf("Código : %s.\n", codigo_A);
    printf("Cidade : %s.\n", cidade_A);
    printf("População : %d.\n", populacao_A);
    printf("Pontos Turísticos : %d.\n", pontos_turisticos_A);
    printf("Área : %.2f Km².\n", area_A);
    printf("PIB : R$ %.2f.\n", pib_A);
    printf("Densidade Populacional : %.2f Hab/Km².\n", densidade_populacional_A);
    printf("PIB Per Capita : R$ %.2f.\n", pib_per_capita_A);
    printf("Super Poder : %.2f Pts.\n\n", super_poder_A);

/*
        //Dados da Carta B :    
    printf("\n~'- _ - ~ ' ~ - _ - '~ CARTA : CPU ~'- _ - ~ ' ~ - _ - '~\n\n");

    printf("Estado : %s.\n", estado_B);
    printf("Código : %s.\n", codigo_B);
    printf("Cidade : %s.\n", cidade_B);
    printf("População : %d.\n", populacao_B);
    printf("Pontos Turísticos : %d.\n", pontos_turisticos_B);
    printf("Área : %.2f Km².\n", area_B);
    printf("PIB : R$ %.2f.\n", pib_B);
    printf("Densidade Populacional : %.2f Hab/Km².\n", densidade_populacional_B);
    printf("PIB Per Capita : R$ %.2f.\n", pib_per_capita_B);
    printf("Super Poder : %.2f Pts.\n\n", super_poder_B);
*/


//Área de apresentação de opções de combate :
    printf("- - - > Selecione seu {Primeiro} atributo entre as opções seguintes : \n");
    printf("1. População.\n");
    printf("2. Pontos Turísticos.\n");
    printf("3. PIB.\n");
    printf("4. Área.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB Per Capita.\n");
    printf("7. Super Poder.\n\n");
    scanf("%d", &opcao);
    printf("\n");



//Área de lógica (1) IF - Else de vitória, derrota ou empate do combate :
    switch (opcao)
    {
    case 1:

        //Área de apresentação de opções de combate 2 :
            printf("- - - > Selecione seu {Segundo} atributo entre as opções seguintes : \n");
            printf("X. {População}.\n");
            printf("2. Pontos Turísticos.\n");
            printf("3. PIB.\n");
            printf("4. Área.\n");
            printf("5. Densidade Populacional.\n");
            printf("6. PIB Per Capita.\n");
            printf("7. Super Poder.\n\n");
            scanf("%d", &opcao2);
            printf("\n");
                            
        /* População */
        if(opcao2 != 1){
        if(populacao_A != populacao_B){

            //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
            printf(" { - 1 - }\n");
            if(populacao_A > populacao_B){
                printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - O - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                    estado_A, populacao_A, estado_B, populacao_B, estado_A, (populacao_A - populacao_B), estado_B);
                    Vitoria1 = 1;
            } else{
                printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - X - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                    estado_A, populacao_A, estado_B, populacao_B, estado_B, (populacao_B -  populacao_A), estado_A);
                    Vitoria1 = -1;
            }
            } else{
            printf(" # 1 # População : %s [ %lu ] VS %s [ %lu ] :\n - - - Vencedor : Empate.\n\n",
                estado_A, populacao_A, estado_B, populacao_B);
                Vitoria1 = 0;
        }}

        //Preparação para soma númerica : 
        Soma_CA1 = populacao_A;
        Soma_CB1 = populacao_B;

        //Área de lógica (2) IF - Else de vitória, derrota ou empate do combate :
                switch (opcao2)
                {
                case 1: //Segunda Opção
    
                    /* População (erro) */
                    printf("[Erro] : Dupla seleção de um mesmo atributo.\n\n");
                    VerificacaoDeErro2 = 1;
                    return 0;
                    
                    break;
                
                case 2: //Segunda Opção
                    
                    /* Número de Pontos Turísticos */
                    if(pontos_turisticos_A != pontos_turisticos_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pontos_turisticos_A > pontos_turisticos_B){
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - O - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_A, (pontos_turisticos_A - pontos_turisticos_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - X - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_B, (pontos_turisticos_B -  pontos_turisticos_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pontos_turisticos_A;
                    Soma_CB2 = pontos_turisticos_B;

                    break;

                case 3: //Segunda Opção

                    /* PIB */
                    if(pib_A != pib_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_A > pib_B){
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_A, ((float)(pib_A - pib_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_B, ((float)(pib_B -  pib_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_A, estado_B, pib_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_A;
                    Soma_CB2 = pib_B;

                    break;

                case 4: //Segunda Opção

                    /* Área */
                    if(area_A != area_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(area_A > area_B){
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - O - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_A, ((float)(area_A - area_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - X - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_B, ((float)(area_B - area_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, area_A, estado_B, area_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = area_A;
                    Soma_CB2 = area_B;

                    break;

                case 5: //Segunda Opção

                    /* Densidade Populacional */
                    if(densidade_populacional_A != densidade_populacional_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(densidade_populacional_A < densidade_populacional_B){
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - O - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_A, ((float)(densidade_populacional_B - densidade_populacional_A)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - X - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_B, ((float)(densidade_populacional_A - densidade_populacional_B)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, densidade_populacional_A, estado_B, densidade_populacional_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = (1 / densidade_populacional_A);
                    Soma_CB2 = (1 / densidade_populacional_B);

                    break;

                case 6: //Segunda Opção

                    /* PIB Per Capita */
                    if(pib_per_capita_A != pib_per_capita_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_per_capita_A > pib_per_capita_B){
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_A, ((float)(pib_per_capita_A - pib_per_capita_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_B, ((float)(pib_per_capita_B - pib_per_capita_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_per_capita_A, estado_B, pib_per_capita_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_per_capita_A;
                    Soma_CB2 = pib_per_capita_B;

                    break;

                case 7: //Segunda Opção

                    /* Super Poder */
                    if(super_poder_A != super_poder_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(super_poder_A > super_poder_B){
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - O - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_A, ((float)(super_poder_A - super_poder_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - X - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_B, ((float)(super_poder_B - super_poder_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, super_poder_A, estado_B, super_poder_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = super_poder_A;
                    Soma_CB2 = super_poder_B;

                    break;

                default: //Segunda Opção
                    /* Desistência forçada*/
                    printf("\nO jogador digitou informações irreconhecíveis ao jogo, assim resultando em sua:\nDesistência Forçada.\nTente novamente!\n");
                    VerificacaoDeErro2 = 1;
                    break;
                }






        
        break;
    
    case 2:

        //Área de apresentação de opções de combate 2 :
            printf("- - - > Selecione seu {Segundo} atributo entre as opções seguintes : \n");
            printf("1. População.\n");
            printf("X. {Pontos Turísticos}.\n");
            printf("3. PIB.\n");
            printf("4. Área.\n");
            printf("5. Densidade Populacional.\n");
            printf("6. PIB Per Capita.\n");
            printf("7. Super Poder.\n\n");
            scanf("%d", &opcao2);
            printf("\n");
        
        /* Número de Pontos Turísticos */
        if(opcao2 != 2){
        if(pontos_turisticos_A != pontos_turisticos_B){

            //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
            printf(" { - 1 - }\n");
            if(pontos_turisticos_A > pontos_turisticos_B){
                printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - O - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                    estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_A, (pontos_turisticos_A - pontos_turisticos_B), estado_B);
                    Vitoria1 = 1;
            } else{
                printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - X - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                    estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_B, (pontos_turisticos_B -  pontos_turisticos_A), estado_A);
                    Vitoria1 = -1;
            }
            } else{
            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - - - Vencedor : Empate.\n\n",
                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B);
                Vitoria1 = 0;
        }}

        //Preparação para soma númerica :
        Soma_CA1 = pontos_turisticos_A;
        Soma_CB1 = pontos_turisticos_B;

        //Área de lógica (2) IF - Else de vitória, derrota ou empate do combate :
                switch (opcao2)
                {
                case 1: //Segunda Opção
    
                    /* População */
                    if(populacao_A != populacao_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(populacao_A > populacao_B){
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - O - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_A, (populacao_A - populacao_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - X - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_B, (populacao_B -  populacao_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # 1 # População : %s [ %lu ] VS %s [ %lu ] :\n - - - Vencedor : Empate.\n\n",
                            estado_A, populacao_A, estado_B, populacao_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica : 
                    Soma_CA2 = populacao_A;
                    Soma_CB2 = populacao_B;

                    
                    break;
                
                case 2: //Segunda Opção
                    
                    /* Número de Pontos Turísticos (erro) */
                    printf("[Erro] : Dupla seleção de um mesmo atributo.\n\n");
                    VerificacaoDeErro2 = 1;
                    return 0;

                    break;

                case 3: //Segunda Opção

                    /* PIB */
                    if(pib_A != pib_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_A > pib_B){
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_A, ((float)(pib_A - pib_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_B, ((float)(pib_B -  pib_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_A, estado_B, pib_B);
                        Vitoria2 = 0; 
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_A;
                    Soma_CB2 = pib_B;

                    break;

                case 4: //Segunda Opção

                    /* Área */
                    if(area_A != area_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(area_A > area_B){
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - O - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_A, ((float)(area_A - area_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - X - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_B, ((float)(area_B - area_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, area_A, estado_B, area_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = area_A;
                    Soma_CB2 = area_B;

                    break;

                case 5: //Segunda Opção

                    /* Densidade Populacional */
                    if(densidade_populacional_A != densidade_populacional_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(densidade_populacional_A < densidade_populacional_B){
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - O - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_A, ((float)(densidade_populacional_B - densidade_populacional_A)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - X - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_B, ((float)(densidade_populacional_A - densidade_populacional_B)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, densidade_populacional_A, estado_B, densidade_populacional_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = (1 / densidade_populacional_A);
                    Soma_CB2 = (1 / densidade_populacional_B);

                    break;

                case 6: //Segunda Opção

                    /* PIB Per Capita */
                    if(pib_per_capita_A != pib_per_capita_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_per_capita_A > pib_per_capita_B){
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_A, ((float)(pib_per_capita_A - pib_per_capita_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_B, ((float)(pib_per_capita_B - pib_per_capita_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_per_capita_A, estado_B, pib_per_capita_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_per_capita_A;
                    Soma_CB2 = pib_per_capita_B;

                    break;

                case 7: //Segunda Opção

                    /* Super Poder */
                    if(super_poder_A != super_poder_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(super_poder_A > super_poder_B){
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - O - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_A, ((float)(super_poder_A - super_poder_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - X - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_B, ((float)(super_poder_B - super_poder_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, super_poder_A, estado_B, super_poder_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = super_poder_A;
                    Soma_CB2 = super_poder_B;

                    break;

                default: //Segunda Opção
                    /* Desistência forçada*/
                    printf("\nO jogador digitou informações irreconhecíveis ao jogo, assim resultando em sua:\nDesistência Forçada.\nTente novamente!\n");
                    VerificacaoDeErro2 = 1;
                    break;
                }







        break;

    case 3:

        //Área de apresentação de opções de combate 2 :
            printf("- - - > Selecione seu {Segundo} atributo entre as opções seguintes : \n");
            printf("1. População.\n");
            printf("2. Pontos Turísticos.\n");
            printf("X. {PIB}.\n");
            printf("4. Área.\n");
            printf("5. Densidade Populacional.\n");
            printf("6. PIB Per Capita.\n");
            printf("7. Super Poder.\n\n");
            scanf("%d", &opcao2);
            printf("\n");

        /* PIB */
        if(opcao2 != 3){
        if(pib_A != pib_B){

            //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
            printf(" { - 1 - }\n");
            if(pib_A > pib_B){
                printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                    estado_A, pib_A, estado_B, pib_B, estado_A, ((float)(pib_A - pib_B)), estado_B);
                    Vitoria1 = 1;
            } else{
                printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                    estado_A, pib_A, estado_B, pib_B, estado_B, ((float)(pib_B -  pib_A)), estado_A);
                    Vitoria1 = -1;
            }
            } else{
            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                estado_A, pib_A, estado_B, pib_B);
                Vitoria1 = 0;
        }}

        //Preparação para soma númerica :
        Soma_CA1 = pib_A;
        Soma_CB1 = pib_B;

        //Área de lógica (2) IF - Else de vitória, derrota ou empate do combate :
                switch (opcao2)
                {
                case 1: //Segunda Opção
    
                    /* População */
                    if(populacao_A != populacao_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(populacao_A > populacao_B){
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - O - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_A, (populacao_A - populacao_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - X - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_B, (populacao_B -  populacao_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # 1 # População : %s [ %lu ] VS %s [ %lu ] :\n - - - Vencedor : Empate.\n\n",
                            estado_A, populacao_A, estado_B, populacao_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica : 
                    Soma_CA2 = populacao_A;
                    Soma_CB2 = populacao_B;

                    
                    break;
                
                case 2: //Segunda Opção
                    
                    /* Número de Pontos Turísticos */
                    if(pontos_turisticos_A != pontos_turisticos_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pontos_turisticos_A > pontos_turisticos_B){
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - O - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_A, (pontos_turisticos_A - pontos_turisticos_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - X - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_B, (pontos_turisticos_B -  pontos_turisticos_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pontos_turisticos_A;
                    Soma_CB2 = pontos_turisticos_B;

                    break;

                case 3: //Segunda Opção

                    /* PIB (erro) */
                    printf("[Erro] : Dupla seleção de um mesmo atributo.\n\n");
                    VerificacaoDeErro2 = 1;
                    return 0;

                    break;

                case 4: //Segunda Opção

                    /* Área */
                    if(area_A != area_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(area_A > area_B){
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - O - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_A, ((float)(area_A - area_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - X - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_B, ((float)(area_B - area_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, area_A, estado_B, area_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = area_A;
                    Soma_CB2 = area_B;

                    break;

                case 5: //Segunda Opção

                    /* Densidade Populacional */
                    if(densidade_populacional_A != densidade_populacional_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(densidade_populacional_A < densidade_populacional_B){
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - O - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_A, ((float)(densidade_populacional_B - densidade_populacional_A)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - X - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_B, ((float)(densidade_populacional_A - densidade_populacional_B)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, densidade_populacional_A, estado_B, densidade_populacional_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = (1 / densidade_populacional_A);
                    Soma_CB2 = (1 / densidade_populacional_B);

                    break;

                case 6: //Segunda Opção

                    /* PIB Per Capita */
                    if(pib_per_capita_A != pib_per_capita_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_per_capita_A > pib_per_capita_B){
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_A, ((float)(pib_per_capita_A - pib_per_capita_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_B, ((float)(pib_per_capita_B - pib_per_capita_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_per_capita_A, estado_B, pib_per_capita_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_per_capita_A;
                    Soma_CB2 = pib_per_capita_B;

                    break;

                case 7: //Segunda Opção

                    /* Super Poder */
                    if(super_poder_A != super_poder_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(super_poder_A > super_poder_B){
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - O - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_A, ((float)(super_poder_A - super_poder_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - X - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_B, ((float)(super_poder_B - super_poder_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, super_poder_A, estado_B, super_poder_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = super_poder_A;
                    Soma_CB2 = super_poder_B;

                    break;

                default: //Segunda Opção
                    /* Desistência forçada*/
                    printf("\nO jogador digitou informações irreconhecíveis ao jogo, assim resultando em sua:\nDesistência Forçada.\nTente novamente!\n");
                    VerificacaoDeErro2 = 1;
                    break;
                }







        break;

    case 4:

        //Área de apresentação de opções de combate 2 :
            printf("- - - > Selecione seu {Segundo} atributo entre as opções seguintes : \n");
            printf("1. População.\n");
            printf("2. Pontos Turísticos.\n");
            printf("3. PIB.\n");
            printf("X. {Área}.\n");
            printf("5. Densidade Populacional.\n");
            printf("6. PIB Per Capita.\n");
            printf("7. Super Poder.\n\n");
            scanf("%d", &opcao2);
            printf("\n");

        /* Área */
        if(opcao2 != 4){
        if(area_A != area_B){

            //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
            printf(" { - 1 - }\n");
            if(area_A > area_B){
                printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - O - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                    estado_A, area_A, estado_B, area_B, estado_A, ((float)(area_A - area_B)), estado_B);
                    Vitoria1 = 1;
            } else{
                printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - X - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                    estado_A, area_A, estado_B, area_B, estado_B, ((float)(area_B - area_A)), estado_A);
                    Vitoria1 = -1;
            }
            } else{
            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - - - Vencedor : Empate.\n\n",
                estado_A, area_A, estado_B, area_B);
                Vitoria1 = 0;
        }}

        //Preparação para soma númerica :
        Soma_CA1 = area_A;
        Soma_CB1 = area_B;

        //Área de lógica (2) IF - Else de vitória, derrota ou empate do combate :
                switch (opcao2)
                {
                case 1: //Segunda Opção
    
                    /* População */
                    if(populacao_A != populacao_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(populacao_A > populacao_B){
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - O - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_A, (populacao_A - populacao_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - X - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_B, (populacao_B -  populacao_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # 1 # População : %s [ %lu ] VS %s [ %lu ] :\n - - - Vencedor : Empate.\n\n",
                            estado_A, populacao_A, estado_B, populacao_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica : 
                    Soma_CA2 = populacao_A;
                    Soma_CB2 = populacao_B;

                    
                    break;
                
                case 2: //Segunda Opção
                    
                    /* Número de Pontos Turísticos */
                    if(pontos_turisticos_A != pontos_turisticos_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pontos_turisticos_A > pontos_turisticos_B){
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - O - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_A, (pontos_turisticos_A - pontos_turisticos_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - X - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_B, (pontos_turisticos_B -  pontos_turisticos_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pontos_turisticos_A;
                    Soma_CB2 = pontos_turisticos_B;

                    break;

                case 3: //Segunda Opção

                    /* PIB */
                    if(pib_A != pib_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_A > pib_B){
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_A, ((float)(pib_A - pib_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_B, ((float)(pib_B -  pib_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_A, estado_B, pib_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_A;
                    Soma_CB2 = pib_B;

                    break;

                case 4: //Segunda Opção

                    /* Área (erro) */
                    printf("[Erro] : Dupla seleção de um mesmo atributo.\n\n");
                    VerificacaoDeErro2 = 1;
                    return 0;

                    break;

                case 5: //Segunda Opção

                    /* Densidade Populacional */
                    if(densidade_populacional_A != densidade_populacional_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(densidade_populacional_A < densidade_populacional_B){
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - O - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_A, ((float)(densidade_populacional_B - densidade_populacional_A)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - X - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_B, ((float)(densidade_populacional_A - densidade_populacional_B)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, densidade_populacional_A, estado_B, densidade_populacional_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = (1 / densidade_populacional_A);
                    Soma_CB2 = (1 / densidade_populacional_B);

                    break;

                case 6: //Segunda Opção

                    /* PIB Per Capita */
                    if(pib_per_capita_A != pib_per_capita_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_per_capita_A > pib_per_capita_B){
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_A, ((float)(pib_per_capita_A - pib_per_capita_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_B, ((float)(pib_per_capita_B - pib_per_capita_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_per_capita_A, estado_B, pib_per_capita_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_per_capita_A;
                    Soma_CB2 = pib_per_capita_B;

                    break;

                case 7: //Segunda Opção

                    /* Super Poder */
                    if(super_poder_A != super_poder_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(super_poder_A > super_poder_B){
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - O - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_A, ((float)(super_poder_A - super_poder_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - X - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_B, ((float)(super_poder_B - super_poder_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, super_poder_A, estado_B, super_poder_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = super_poder_A;
                    Soma_CB2 = super_poder_B;

                    break;

                default: //Segunda Opção
                    /* Desistência forçada*/
                    printf("\nO jogador digitou informações irreconhecíveis ao jogo, assim resultando em sua:\nDesistência Forçada.\nTente novamente!\n");
                    VerificacaoDeErro2 = 1;
                    break;
                }







        break;

    case 5:

        //Área de apresentação de opções de combate 2 :
            printf("- - - > Selecione seu {Segundo} atributo entre as opções seguintes : \n");
            printf("1. População.\n");
            printf("2. Pontos Turísticos.\n");
            printf("3. PIB.\n");
            printf("4. Área.\n");
            printf("X. {Densidade Populacional}.\n");
            printf("6. PIB Per Capita.\n");
            printf("7. Super Poder.\n\n");
            scanf("%d", &opcao2);
            printf("\n");

        /* Densidade Populacional */
        if(opcao2 != 5){
        if(densidade_populacional_A != densidade_populacional_B){

            //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
            printf(" { - 1 - }\n");
            if(densidade_populacional_A < densidade_populacional_B){
                printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - O - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                    estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_A, ((float)(densidade_populacional_B - densidade_populacional_A)), estado_B);
                    Vitoria1 = 1;
            } else{
                printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - X - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                    estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_B, ((float)(densidade_populacional_A - densidade_populacional_B)), estado_A);
                    Vitoria1 = -1;
            }
            } else{
            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - - - Vencedor : Empate.\n\n",
                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B);
                Vitoria1 = 0;
        }}

        //Preparação para soma númerica :
        Soma_CA1 = (1 / densidade_populacional_A);
        Soma_CB1 = (1 / densidade_populacional_B);

        //Área de lógica (2) IF - Else de vitória, derrota ou empate do combate :
                switch (opcao2)
                {
                case 1: //Segunda Opção
    
                    /* População */
                    if(populacao_A != populacao_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(populacao_A > populacao_B){
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - O - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_A, (populacao_A - populacao_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - X - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_B, (populacao_B -  populacao_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # 1 # População : %s [ %lu ] VS %s [ %lu ] :\n - - - Vencedor : Empate.\n\n",
                            estado_A, populacao_A, estado_B, populacao_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica : 
                    Soma_CA2 = populacao_A;
                    Soma_CB2 = populacao_B;

                    
                    break;
                
                case 2: //Segunda Opção
                    
                    /* Número de Pontos Turísticos */
                    if(pontos_turisticos_A != pontos_turisticos_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pontos_turisticos_A > pontos_turisticos_B){
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - O - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_A, (pontos_turisticos_A - pontos_turisticos_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - X - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_B, (pontos_turisticos_B -  pontos_turisticos_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pontos_turisticos_A;
                    Soma_CB2 = pontos_turisticos_B;

                    break;

                case 3: //Segunda Opção

                    /* PIB */
                    if(pib_A != pib_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_A > pib_B){
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_A, ((float)(pib_A - pib_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_B, ((float)(pib_B -  pib_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_A, estado_B, pib_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_A;
                    Soma_CB2 = pib_B;

                    break;

                case 4: //Segunda Opção

                    /* Área */
                    if(area_A != area_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(area_A > area_B){
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - O - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_A, ((float)(area_A - area_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - X - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_B, ((float)(area_B - area_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, area_A, estado_B, area_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = area_A;
                    Soma_CB2 = area_B;

                    break;

                case 5: //Segunda Opção

                    /* Densidade Populacional (erro) */
                    printf("[Erro] : Dupla seleção de um mesmo atributo.\n\n");
                    VerificacaoDeErro2 = 1;
                    return 0;

                    break;

                case 6: //Segunda Opção

                    /* PIB Per Capita */
                    if(pib_per_capita_A != pib_per_capita_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_per_capita_A > pib_per_capita_B){
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_A, ((float)(pib_per_capita_A - pib_per_capita_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_B, ((float)(pib_per_capita_B - pib_per_capita_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_per_capita_A, estado_B, pib_per_capita_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_per_capita_A;
                    Soma_CB2 = pib_per_capita_B;

                    break;

                case 7: //Segunda Opção

                    /* Super Poder */
                    if(super_poder_A != super_poder_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(super_poder_A > super_poder_B){
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - O - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_A, ((float)(super_poder_A - super_poder_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - X - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_B, ((float)(super_poder_B - super_poder_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, super_poder_A, estado_B, super_poder_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = super_poder_A;
                    Soma_CB2 = super_poder_B;

                    break;

                default: //Segunda Opção
                    /* Desistência forçada*/
                    printf("\nO jogador digitou informações irreconhecíveis ao jogo, assim resultando em sua:\nDesistência Forçada.\nTente novamente!\n");
                    VerificacaoDeErro2 = 1;
                    break;
                }







        break;

    case 6:

        //Área de apresentação de opções de combate 2 :
            printf("- - - > Selecione seu {Segundo} atributo entre as opções seguintes : \n");
            printf("1. População.\n");
            printf("2. Pontos Turísticos.\n");
            printf("3. PIB.\n");
            printf("4. Área.\n");
            printf("5. Densidade Populacional.\n");
            printf("X. {PIB Per Capita}.\n");
            printf("7. Super Poder.\n\n");
            scanf("%d", &opcao2);
            printf("\n");

        /* PIB Per Capita */
        if(opcao2 != 6){
        if(pib_per_capita_A != pib_per_capita_B){

            //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
            printf(" { - 1 - }\n");
            if(pib_per_capita_A > pib_per_capita_B){
                printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                    estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_A, ((float)(pib_per_capita_A - pib_per_capita_B)), estado_B);
                    Vitoria1 = 1;
            } else{
                printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                    estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_B, ((float)(pib_per_capita_B - pib_per_capita_A)), estado_A);
                    Vitoria1 = -1;
            }
            } else{
            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B);
                Vitoria1 = 0;
        }}

        //Preparação para soma númerica :
        Soma_CA1 = pib_per_capita_A;
        Soma_CB1 = pib_per_capita_B;

        //Área de lógica (2) IF - Else de vitória, derrota ou empate do combate :
                switch (opcao2)
                {
                case 1: //Segunda Opção
    
                    /* População */
                    if(populacao_A != populacao_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(populacao_A > populacao_B){
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - O - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_A, (populacao_A - populacao_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - X - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_B, (populacao_B -  populacao_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # 1 # População : %s [ %lu ] VS %s [ %lu ] :\n - - - Vencedor : Empate.\n\n",
                            estado_A, populacao_A, estado_B, populacao_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica : 
                    Soma_CA2 = populacao_A;
                    Soma_CB2 = populacao_B;

                    
                    break;
                
                case 2: //Segunda Opção
                    
                    /* Número de Pontos Turísticos */
                    if(pontos_turisticos_A != pontos_turisticos_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pontos_turisticos_A > pontos_turisticos_B){
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - O - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_A, (pontos_turisticos_A - pontos_turisticos_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - X - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_B, (pontos_turisticos_B -  pontos_turisticos_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pontos_turisticos_A;
                    Soma_CB2 = pontos_turisticos_B;

                    break;

                case 3: //Segunda Opção

                    /* PIB */
                    if(pib_A != pib_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_A > pib_B){
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_A, ((float)(pib_A - pib_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_B, ((float)(pib_B -  pib_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_A, estado_B, pib_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_A;
                    Soma_CB2 = pib_B;

                    break;

                case 4: //Segunda Opção

                    /* Área */
                    if(area_A != area_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(area_A > area_B){
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - O - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_A, ((float)(area_A - area_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - X - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_B, ((float)(area_B - area_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, area_A, estado_B, area_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = area_A;
                    Soma_CB2 = area_B;

                    break;

                case 5: //Segunda Opção

                    /* Densidade Populacional */
                    if(densidade_populacional_A != densidade_populacional_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(densidade_populacional_A < densidade_populacional_B){
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - O - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_A, ((float)(densidade_populacional_B - densidade_populacional_A)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - X - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_B, ((float)(densidade_populacional_A - densidade_populacional_B)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, densidade_populacional_A, estado_B, densidade_populacional_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = (1 / densidade_populacional_A);
                    Soma_CB2 = (1 / densidade_populacional_B);

                    break;

                case 6: //Segunda Opção

                    /* PIB Per Capita (erro) */
                    printf("[Erro] : Dupla seleção de um mesmo atributo.\n\n");
                    VerificacaoDeErro2 = 1;
                    return 0;

                    break;

                case 7: //Segunda Opção

                    /* Super Poder */
                    if(super_poder_A != super_poder_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(super_poder_A > super_poder_B){
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - O - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_A, ((float)(super_poder_A - super_poder_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - X - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                                estado_A, super_poder_A, estado_B, super_poder_B, estado_B, ((float)(super_poder_B - super_poder_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, super_poder_A, estado_B, super_poder_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = super_poder_A;
                    Soma_CB2 = super_poder_B;

                    break;

                default: //Segunda Opção
                    /* Desistência forçada*/
                    printf("\nO jogador digitou informações irreconhecíveis ao jogo, assim resultando em sua:\nDesistência Forçada.\nTente novamente!\n");
                    VerificacaoDeErro2 = 1;
                    break;
                }







        break;

    case 7:

        //Área de apresentação de opções de combate 2 :
            printf("- - - > Selecione seu {Segundo} atributo entre as opções seguintes : \n");
            printf("1. População.\n");
            printf("2. Pontos Turísticos.\n");
            printf("3. PIB.\n");
            printf("4. Área.\n");
            printf("5. Densidade Populacional.\n");
            printf("6. PIB Per Capita.\n");
            printf("X. {Super Poder}.\n\n");
            scanf("%d", &opcao2);
            printf("\n");

        /* Super Poder */
        if(opcao2 != 7){
        if(super_poder_A != super_poder_B){

            //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
            printf(" { - 1 - }\n");
            if(super_poder_A > super_poder_B){
                printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - O - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                    estado_A, super_poder_A, estado_B, super_poder_B, estado_A, ((float)(super_poder_A - super_poder_B)), estado_B);
                    Vitoria1 = 1;
            } else{
                printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - X - Vencedor : %s, com %.2f de pontos de super poder a mais que %s.\n\n",
                    estado_A, super_poder_A, estado_B, super_poder_B, estado_B, ((float)(super_poder_B - super_poder_A)), estado_A);
                    Vitoria1 = -1;
            }
            } else{
            printf(" # # # Super Poder : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - - - Vencedor : Empate.\n\n",
                estado_A, super_poder_A, estado_B, super_poder_B);
                Vitoria1 = 0;
        }}

        //Preparação para soma númerica :
        Soma_CA1 = super_poder_A;
        Soma_CB1 = super_poder_B;

        //Área de lógica (2) IF - Else de vitória, derrota ou empate do combate :
                switch (opcao2)
                {
                case 1: //Segunda Opção
    
                    /* População */
                    if(populacao_A != populacao_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(populacao_A > populacao_B){
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - O - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_A, (populacao_A - populacao_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # População : %s [ %lu ] VS %s [ %lu ] :\n - X - Vencedor : %s, com %lu pessoas a mais que %s.\n\n",
                                estado_A, populacao_A, estado_B, populacao_B, estado_B, (populacao_B -  populacao_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # 1 # População : %s [ %lu ] VS %s [ %lu ] :\n - - - Vencedor : Empate.\n\n",
                            estado_A, populacao_A, estado_B, populacao_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica : 
                    Soma_CA2 = populacao_A;
                    Soma_CB2 = populacao_B;

                    
                    break;
                
                case 2: //Segunda Opção
                    
                    /* Número de Pontos Turísticos */
                    if(pontos_turisticos_A != pontos_turisticos_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pontos_turisticos_A > pontos_turisticos_B){
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - O - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_A, (pontos_turisticos_A - pontos_turisticos_B), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - X - Vencedor : %s, com %d Pontos Turísticos a mais que %s.\n\n",
                                estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B, estado_B, (pontos_turisticos_B -  pontos_turisticos_A), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Pontos Turísticos : %s [ %d ] VS %s [ %d ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pontos_turisticos_A, estado_B, pontos_turisticos_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pontos_turisticos_A;
                    Soma_CB2 = pontos_turisticos_B;

                    break;

                case 3: //Segunda Opção

                    /* PIB */
                    if(pib_A != pib_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_A > pib_B){
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_A, ((float)(pib_A - pib_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_A, estado_B, pib_B, estado_B, ((float)(pib_B -  pib_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_A, estado_B, pib_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_A;
                    Soma_CB2 = pib_B;

                    break;

                case 4: //Segunda Opção

                    /* Área */
                    if(area_A != area_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(area_A > area_B){
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - O - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_A, ((float)(area_A - area_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - X - Vencedor : %s, com %.2f Km² a mais que %s.\n\n",
                                estado_A, area_A, estado_B, area_B, estado_B, ((float)(area_B - area_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Área : %s [ %.2f Km² ] VS %s [ %.2f Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, area_A, estado_B, area_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = area_A;
                    Soma_CB2 = area_B;

                    break;

                case 5: //Segunda Opção

                    /* Densidade Populacional */
                    if(densidade_populacional_A != densidade_populacional_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(densidade_populacional_A < densidade_populacional_B){
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - O - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_A, ((float)(densidade_populacional_B - densidade_populacional_A)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - X - Vencedor : %s, com %.2f Hab/Km² a menos que %s.\n\n",
                                estado_A, densidade_populacional_A, estado_B, densidade_populacional_B, estado_B, ((float)(densidade_populacional_A - densidade_populacional_B)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # Densidade Populacional : %s [ %.2f Hab/Km² ] VS %s [ %.2f Hab/Km² ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, densidade_populacional_A, estado_B, densidade_populacional_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = (1 / densidade_populacional_A);
                    Soma_CB2 = (1 / densidade_populacional_B);

                    break;

                case 6: //Segunda Opção

                    /* PIB Per Capita */
                    if(pib_per_capita_A != pib_per_capita_B){

                        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
                        printf(" { - 2 - }\n");
                        if(pib_per_capita_A > pib_per_capita_B){
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - O - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_A, ((float)(pib_per_capita_A - pib_per_capita_B)), estado_B);
                                Vitoria2 = 1;
                        } else{
                            printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - X - Vencedor : %s, com R$ %.2f a mais que %s.\n\n",
                                estado_A, pib_per_capita_A, estado_B, pib_per_capita_B, estado_B, ((float)(pib_per_capita_B - pib_per_capita_A)), estado_A);
                                Vitoria2 = -1;
                        }
                        } else{
                        printf(" # # # PIB Per Capita : %s [ R$ %.2f ] VS %s [ R$ %.2f ]\n - - - Vencedor : Empate.\n\n",
                            estado_A, pib_per_capita_A, estado_B, pib_per_capita_B);
                            Vitoria2 = 0;
                    }

                    //Preparação para soma númerica :
                    Soma_CA2 = pib_per_capita_A;
                    Soma_CB2 = pib_per_capita_B;

                    break;

                case 7: //Segunda Opção

                    /* Super Poder (erro) */
                    printf("[Erro] : Dupla seleção de um mesmo atributo.\n\n");
                    VerificacaoDeErro2 = 1;
                    return 0;

                    break;

                default: //Segunda Opção
                    /* Desistência forçada*/
                    printf("\nO jogador digitou informações irreconhecíveis ao jogo, assim resultando em sua:\nDesistência Forçada.\nTente novamente!\n");
                    VerificacaoDeErro2 = 1;
                    break;
                }







        break;

    default:
        /* Desistência forçada*/
        printf("\nO jogador digitou informações irreconhecíveis ao jogo, assim resultando em sua:\nDesistência Forçada.\nTente novamente!\n");
        VerificacaoDeErro2 = 1;
        break;
    }



    //Soma de atributo 1 e 2, de A e B :
    Resultado_A = Soma_CA1 + Soma_CA2;
    Resultado_B = Soma_CB1 + Soma_CB2;

        if(Resultado_A != Resultado_B){
        //If para saber qual das duas cartas vence, caso o resultado do primeir If seja verdadeiro.
        printf(" { - 3 - }\n");
        if(Resultado_A > Resultado_B){
            printf(" # # # Soma : %s [ %.2f ] VS %s [ %.2f ]\n - O - Vencedor : %s, com %.2f pontos a mais que %s.\n\n",
                estado_A, (float)Resultado_A, estado_B, (float)Resultado_B, estado_A, ((float)(Resultado_A - Resultado_B)), estado_B);
                Vitoria3 = 1;
        } else{
            printf(" # # # Soma : %s [ %.2f ] VS %s [ %.2f ]\n - X - Vencedor : %s, com %.2f pontos a mais que %s.\n\n",
                estado_A, (float)Resultado_A, estado_B, (float)Resultado_B, estado_B, ((float)(Resultado_B - Resultado_A)), estado_A);
                Vitoria3 = -1;
        }
        } else if(Resultado_A = Resultado_B){
        printf(" # # # Soma : %s [ %.2f Pts. ] VS %s [ %.2f Pts. ]\n - - - Vencedor : Empate.\n\n",
            estado_A, (float)Resultado_A, estado_B, (float)Resultado_B);
            Vitoria3 = 0;
        }
       
    //Definindo o Vencedor Definitivo :
    printf(" # # # # # # # RESULTADO FINAL # # # # # # # \n\n");

    //Resultado final :
    ResultadoDeVitoria = (Vitoria1) + (Vitoria2) + (Vitoria3);

    if(ResultadoDeVitoria > 0){

        //Calculando o resultado definitivo :
            if(Vitoria1 == -1){
                Vitoria1 = 0;
            } else {
                Vitoria1 = 1;
            }

            if(Vitoria2 == -1){
                Vitoria2 = 0;
            } else{
                Vitoria2 = 1;
            }

            if(Vitoria3 == -1){
                Vitoria3 = 0;
            } else{
                Vitoria3 = 1;
            }

            ResultadoDeVitoria = (Vitoria1) + (Vitoria2) + (Vitoria3);

        printf(" - - - O - - - VITÓRIA! - - - O - - - \n");
        printf("O Grande Vencedor Definitivo é %s!!! Com %d/3 vitórias.\n", estado_A, ResultadoDeVitoria);

    } else if(ResultadoDeVitoria < 0){

            //Calculando o resultado definitivo :
            if(Vitoria1 < 0){
                Vitoria1 = 1;
            } else {
                Vitoria1 = 0;
            }

            if(Vitoria2 < 0){
                Vitoria2 = 1;
            } else{
                Vitoria2 = 0;
            }

            if(Vitoria3 < 0){
                Vitoria3 = 1;
            } else{
                Vitoria3 = 0;
            }

            ResultadoDeVitoria = (Vitoria1) + (Vitoria2) + (Vitoria3);

        printf(" - - - X - - - DERROTA! - - - X - - -\n");
        printf("O Grande Vencedor Definitivo é %s!!! Com %d/3 vitórias.\n", estado_B, ResultadoDeVitoria);

    } else{
        printf(" - - - - - - - EMPATE! - - - - - - -\n");
        printf("Nenhum jogador venceu, ou perdeu. -_-\n");

    }



    //Printf apenas para pular uma linha extra, para separar melhor comandos antigos dos novos.
    printf("\n\n");
    printf("# # # # Menu de fim de jogo :\n\n");
    printf("- - - > Gostaria de desafiar-se novamente???\n");
    printf("1. Jogar Novamente.\n");
    printf("2. Sair.\n");
    scanf("%d", &opcao3);
    printf("\n\n");

    switch (opcao3)
    {
    case 1:
        printf("# # # # Menu de fim de jogo :\n");
        printf("- - - > Jogar Novamente :\n\n");
        printf("1. Usar cartas salvas.\n");
        printf("2. Redefinir cartas.\n");
        printf("3. Sair.\n");
        scanf("%d", &TentarNovamente);
        printf("\n\n");

        switch (TentarNovamente)
        {
            case 1:
                TentarNovamente_Salvo = 1;
                break;

            case 2:
                TentarNovamente_Resetar = 1;
                break;

            case 3:
                printf("Saindo...\n\n\n");
                return 0;
                break;
        
            default:

                break;
        }
        
        break;

    case 2:
        printf("Saindo...\n\n\n");
        return 0;
        break;
    
    default:
        printf("Saindo forçadamente porquê o/a bonito/a não sabe usar um menu direito...\n\n\n");
        break;
    }

}while (TentarNovamente_Salvo);
}while (TentarNovamente_Resetar);



    return 0;
}