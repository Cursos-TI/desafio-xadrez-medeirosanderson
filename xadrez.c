#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

int main() {
    int bispo =1 , torre= 1;
    int i1 = 1, i2 = 1, i3 = 1;


    printf("=-=-= MOVIMENTO DA TORRE =-=-=\n");
    printf("\n");
    while (torre <= 5) // Condição de movimento da peça TORRE
    {   
        printf("%d - Andou para CIMA\n", i1); //Enquanto Varivel Torre for menor ou igual a 5 ele vai repetir esse comando!
        torre++; //Incremente mais um na torre, Torre era igual 1 e agora é igual a 2
        i1++; //Incrementa mais um no indicador de movimento da Torre
    };
        
    printf("\n");
    printf("=-=-= MOVIMENTO DO BISPO =-=-=\n");
    printf("\n");
    
    do
    {   
        printf("%d - Andou Para CIMA e DIREITA\n", i2); //Ele imprime o primeiro movimento do BISPO!
        bispo++;//Incremente mais um no bispo, Bispo era igual 1 e agora é igual a 2
        i2++;//Incrementa mais um no indicador de movimento do Bispo
    } while (bispo <= 5); //Enquanto Varivel Bispo for menor ou igual a 5 ele vai repetir esse comando!
    
    printf("\n");
    printf("=-=-= MOVIMENTO DO RAINHA =-=-=\n");
    printf("\n");

    for (int rainha = 1; rainha <= 8; rainha++) //Defini a variavel RAINHA, Especifiquei a quantidade de Repetições 8
    {                                               // e incrementei +1 sempre que voltar o loop até chegar no 8
        printf("%d - Andou Para ESQUERDA\n", i3); //Movimentaçao da peça RAINHA
        i3++;//Incrementa mais um no indicador de movimento da Rainha
    }
    
    return 0;
}
