/* Escreva um programa que receba a entrada de um numero inteiro de 5 dígitos , separe o número em
seus dígitos componentes e os imprima separados uns dos outros por três espaços.*/

#include <stdio.h>

    int main(){
        int x;

        printf("informe um numero inteiro de 5 digitos: ");
        scanf("%i", &x);


        if(x>9999 && x<100000){
            int x5=(x/10000)%10;
            int x4=(x/1000)%10;
            int x3=(x/100)%10;
            int x2=(x/10)%10;
            int x1=x%10;

            printf("%i  %i  %i   %i   %i",x5,x4,x3,x2,x1);
        }
        else
            printf("Numero invalido\n");

        return 0;

    }