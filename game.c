#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int escolha = 1 ,
    jogador , 
    computador ,
    placarV = 0,
    placarC = 0,
    melhor ,
    i ,
    validade = 1;
    printf("\033[1;33mSeja bem vindo ao Pedra Papel ou Tesoura\033[0m\n");

while(escolha == 1){
    printf("Escolha quantas rodadas\n");
    scanf("%d" ,&melhor);

    for( i = 0; i < melhor; i++){
        validade = 1;
        while(validade == 1){
        printf("1 - Pedra \n2 - Papel \n3 - Tesoura \n");
        scanf("%d" , &jogador);

            switch(jogador){
            case 1: printf("voce escolheu: Pedra\n" );
            validade = 0;
            break;

            case 2: printf("voce escolheu: Papel\n" ); 
            validade = 0;
            break;

            case 3: printf("voce escolheu: Tesoura\n" ); 
            validade = 0;
            break;

            default: printf("Escolha uma opcao valida\n");
            validade = 1;
            break;
            }   
        }
        computador = (rand() % 3) + 1;
        switch(computador){
            case 1: printf("Computador escolheu: Pedra\n" ); 
            break;

            case 2: printf("Computador escolheu: Papel\n" ); 
            break;

            case 3: printf("Computador escolheu: Tesoura\n" ); 
            break;
        }

        if(jogador == computador){
        printf("Empate\n");
        melhor += 1;
    } else if((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2)){
        printf("Voce ganhou este round\n");
        placarV += 1;
    } else {
        printf("Voce perdeu este round\n");
        placarC += 1;
    }
       
        printf("\033[1;33m %d VS %d\n\033[0m", placarV, placarC);
        printf("- - - - - - - - - - - - - - - - -\n");   
    } 

    if(placarV > placarC){
        printf("Parabens voce Ganhou a partida!!\n");
    } else if(placarV < placarC){
        printf("voce Perdeu a partida tente novamente!!\n");
    } else if("EMPATE DA PARTIDA!\n");

printf("As Rodadas acabaram!!!\nDeseja continuar? \n 1 - continuar \n 2 - Parar ");
scanf("%d" , &escolha);
placarC = 0;
placarV = 0;
} 
}

