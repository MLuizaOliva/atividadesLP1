/* Escreva um programa que calcule o quadrado e o cubo dos números do 1 ao 10 e use tabulações para
imprimir o resultado da seguinte forma:
número quadrado cubo
0 0 0
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125
6 36 216
7 49 343
8 64 512
9 81 729
10 100 1000*/

#include <stdio.h>

    int main(){
        float x;

            printf("informe um numero: ");
            scanf("%f", &x);


            printf("%f %f %f",x,x*x,x*x*x);

    return 0;
    }