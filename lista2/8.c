/*Escreva um programa que leia dois inteiros e então determine se o maior é múltiplo do menor. */

#include <stdio.h>

    int main(){
        int x;
        int y;

            printf("informe um numero inteiro: " );
            scanf("%i", &x);
            printf("informe outro numero inteiro: ");
            scanf("%i", &y);

        if(x%y==0 || y%x==0){

            printf("o maior eh multiplo do menor");

        }
        else {
            printf("nao sao multiplos");
        }


    return 0;

    }