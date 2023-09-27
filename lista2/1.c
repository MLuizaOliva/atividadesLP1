/*Escreva um programa que peça ao usuário para digitar dois números inteiros, obtenha-os do usuário
e imprima a soma(+), o produto(*), a diferença(-), o quociente(/) e o resto da divisão dos dois números.*/

#include <stdio.h>

int main(){
    int x; 
    int y;
    int soma=x+y;
    int produto=x*y;
    int diferenca=x-y;
    int quociente=x/y;
    int restoDaDivisao=x%y;
    printf("digite um numero inteiro: ");
    scanf("%i",&x);
    printf("digite outro numero inteiro: ");
    scanf("%i",&y);
    
        printf("Soma:%i\nProduto:%i\nDiferenca:%i\nQuociente:%i\nResto da divisao:%i\n", soma, produto,diferenca,quociente,restoDaDivisao);
    
    return 0;
}