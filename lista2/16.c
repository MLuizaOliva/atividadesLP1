/*Elabore um programa que receba três valores digitados A; B e C informe se estes podem ser os lados
de um triângulo. O ABC é triângulo se A < B + C e B < A + C e C < A + B.*/

#include <stdio.h>

int main (){
    float A, B, C;

    printf("insira um numero:");
    scanf("%f", &A);
    printf("insira o segundo numero:");
    scanf("%f", &B);
    printf("insira o terceiro numero:");
    scanf("%f", &C);

    if (A < B + C && B < A + C && C < A + B){
        printf("ABC e um triagulo");
    }
    else { printf("ABC nao e um triangulo");
    }
    
    return 0;
} 