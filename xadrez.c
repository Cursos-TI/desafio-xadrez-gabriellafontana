#include <stdio.h>

int main (){

    int movimentoTorre;
// mover tres pecas de xadrez pelo terminal

//mover a torre 5 casas para a direira

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

     
return 0;
    
}