/*Escreva um programa que leia o raio de um círculo e imprima seu diâmetro (2*r), o valor de sua
circunferência(2*3.14*r) e sua área(3.14*r^2).*/

#include <stdio.h>

int main(){
    float r;

    printf("informe o raio de um circulo: ");
    scanf("%f", &r);

    float diamentro=2*r;
    float perimetro=2*3.14*r;
    float area=3.14*r*r;

    printf("diametro:%.2f\ncircunferencia:%.2f\narea:%.2f\n", diamentro,perimetro,area);

    return 0;
}