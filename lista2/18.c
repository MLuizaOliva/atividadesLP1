/*Idem ao exercício anterior, informe si for um triângulo equilátero.*/

#include <stdio.h>

int main(){
    float x, y, z;

    printf("informe o primeiro lado do triangulo:");
    scanf("%f", &x);
    printf("informe o segundo lado do triangulo:");
    scanf("%f", &y);
    printf ("informe o terceiro lado do triangulo:");
    scanf("%f", &z);

    if (x==y && y==z){
        printf("triangulo equilatero");
    }
    else printf("nao eh equilatero");

    return 0;
}