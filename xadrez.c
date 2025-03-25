#include <stdio.h>

void movimentoTorre (int casas){
    if (casas>0){
        printf("Direita\n");
        movimentoTorre(casas -1);
    }
}

void movimentoBispo (int i){
for (int i = 0; i <= 4; i++) { 
    printf("Cima, Direita\n");}
}

void movimentoRainha (int casas){
    if (casas >0){
        printf("Esquerda\n");
        movimentoRainha(casas -1);
    }
}
int main (){

    int opcao, movimento, cima;
    do {
    printf("*-*-*- JOGO DE XADREZ*-*-*-*\n");
    printf("Selecione o movimento desejado abaixo\n");
    printf("1. Movimentar a Torre\n");
    printf("2. Movimentar o Bispo\n");
    printf("3. Movimentar a rainha\n");
    printf("4. Movimentar o cavalo\n");
    printf("5. Sair\n");
    scanf("%d", &opcao);
 // impressao do menu para escolha do jogador, o mesmo tem retorno para as opcoes ate que seja digitado o 5 que sai do jogo
    switch (opcao)
    {
    case 1:
        movimentoTorre(5);
        break;
    case 2:
        movimentoBispo(5);
        break;
    case 3:
        movimentoRainha(8);
        break;
    case 4: 
    int movimento = 1, cima;
         
    while(movimento--)
    {
    for(cima =0; cima <2; cima++){
        printf("Cima\n");}
    {
        printf("Direita\n");
    }
}
    // movimento do cavalo feito com loop aninhado
    break;
    default:
        printf("Voce esta saindo do Jogo\n");
        break;
    }

    }
    while (opcao != 5);

/*
codigo do desafio aventureiro

mover a torre 5 casas para a direira

printf("Movimento da Torre\n");
for (int movimentoTorre = 0; movimentoTorre < 5; movimentoTorre++)
{
    printf("Direita\n");
}

// mover a rainha 8 casas para esquerda

    printf("Movimento da Rainha\n");
    int movimentoRainha = 1;
    while (movimentoRainha <= 8)
    {
     printf("esquerda\n");
     movimentoRainha++;
    }

// mover o bispo 5 casas diagonal direita
    int movimentoBispo;
    printf("Movimento do Bispo\n");
    
do
{
    printf("Diagonal direita\n");
    movimentoBispo++;
} while (movimentoBispo <= 5); 
    
// movimentar cavalo em L com loop aninhado para cima e direita
int cima, movimento= 1;
printf("Movimento do Cavalo\n");

while(movimento--)
{
for(cima =0; cima <2; cima++){
    printf("Cima\n");}
{
    printf("Direita\n");

}
}
*/
return 0;

}