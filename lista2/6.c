/*Escreva um programa que leia um número inteiro e informe se ele é par ou ímpar.*/

#include <stdio.h>

int main(){
    int n;

    printf("informe numero inteiro: ");
    scanf("%i", &n);

    if (n%2==0){
        printf("numero par");
    }
    else {printf("numero impar");}

    return 0;
}