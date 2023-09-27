/*Escreva um programa que recebe a longitude dos três lados de um triângulo e informa se o triângulo
é isóscele. Considere que efetivamente os lados formam um triângulo.*/

#include <stdio.h>

int main(){
    float x, y, z;
    
    printf("informe o primeiro lado do triangulo:");
    scanf("%f", &x);
    printf("informe o segundo lado do triangulo:");
    scanf("%f", &y);
    printf("informe o terceiro lado triagulo:");
    scanf("%f", &z);

    if (x<y+z && y<x+z && z<x+y){
        if ((x==y && x!=z) || (x==z && x!=y) || (y==z && y!=x)){
            printf("eh um triangulo isosceles");
        }
    }
    else printf("nao eh um triangulo");
    
    return 0;
}