/*Escreva um programa que peça ao usuário para fornecer dois números inteiros, obtenha-os do
usuário e imprima o maior deles seguido das palavras “e maior”. Se os números foram iguais,
imprima a mensagem “estes números são iguais”. Use apenas a instrução if.*/

#include <stdio.h>

int main(){
    int x;
    int y;

    printf("forneca um numero inteiro: ");
    scanf("%i", &x);
    printf("forneca outro numero inteiro: ");
    scanf("%i", &y);
    
    if (x>y){
        printf("%i e maior\n", x);
    }
    if (y>x){
        printf("%i e maior\n", y);
    }
    if (x==y){
        printf("estes numeros sao iguais\n"); 
    }
    
    return 0;
}