/*Escreva um programa que receba três números de ponto flutuante e imprima a soma, a média, o
produto, o menor e o maior desses números.*/

#include <stdio.h>

int main(){
    float x;
    float y;
    float z;

    printf("forneca primeiro numero: ");
    scanf("%f",&x);
    printf("forneca segundo numero: ");
    scanf("%f",&y);
    printf("forneca terceiro numero: ");
    scanf("%f",&z);

    float soma=x+y+z;
    float media=(x+y+z)/3;
    float produto=x*y*z;
    float maiorNumero;
    float menorNumero;

    if (x>y && y>z){
        maiorNumero=x;
        menorNumero=z;
    }
    if (x>z && z>y){
        maiorNumero=x;
        menorNumero=y;
    }
    if (y>x && x>z){
        maiorNumero=y;
        menorNumero=z;
    }
    if (y>z && z>x){
        maiorNumero=y;
        menorNumero=x;
    }
    if (z>x && x>y){
        maiorNumero=z;
        menorNumero=y;
    }
    if (z>y && y>x){
        maiorNumero=z;
        menorNumero=x;
    }

    printf("soma:%.2f\nmedia:%.2f\nproduto:%.2f\nmenor numero:%.2f\nmaior numero:%.2f\n",soma,media,produto,menorNumero,maiorNumero);

    return 0;
}