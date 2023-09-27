/*Escreva um programa que leia os valores (x; y) de um ponto do plano e informe no qual quadrante o
ponto se encontra. Utilize o menor número de condições possíveis.*/

#include <stdio.h>

int main(){
    float x;
    float y;
    
    printf("informe x: ");
    scanf("%f",&x);
    printf("informe y: ");
    scanf("%f",&y);

    if (x>0 && y>0){
        printf("quadrante 1\n");
    }
    if (x<0 && y>0){
        printf("quadrante 2\n");
    }
    if (x<0 && y<0){
        printf("quadrante 3\n");
    }
    if (x>0 && y<0){
        printf("quadrante 4\n");
    }
    if (x==0 && y==0){
        printf("nao esta em nenhum quadrante -- origem 0");
    }
    if (x==0 && y>0){
        printf("o ponto esta no eixo da ordenada");
    }
    if (x>0 && y==0){
        printf("o ponto esta no eixo da abscissa");
    }
    
    
    
    return 0;
}