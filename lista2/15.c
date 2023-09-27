/* Elabore um programa que calcule e exiba a média de três números fornecidos pelo usuário.*/

#include <stdio.h>

int main (){
    float x;
    float y;
    float z;

    printf("insira um numero: ");
    scanf("%f", &x);
    printf("insira mais um numero: ");
    scanf("%f", &y);
    printf("insira mais um numero: ");
    scanf("%f", &z);

    printf("a media desses tres numeros eh:%f",(x+y+z)/3);

    return 0;

}