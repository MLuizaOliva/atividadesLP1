/*Elabore um programa que calcule quantas notas de 50, 20, 10 e 1 são necessárias para se pagar uma
conta cujo valor é fornecido (considere apenas valores inteiros).*/

#include <stdio.h>

int main(){
    int x, cinquenta=0,vinte=0,dez=0,um=0;
    printf("informe o valor a ser pago: ");
    scanf("%i", &x);

   
    while (x>0){
        if(x>=50){
            cinquenta=x/50;
            x = x%50;
        } else if (x >=20){
            vinte=x/20;
            x = x%20;
        } else if (x>=10){
            dez=x/10;
            x=x%10;
        } else if (x>=1){
            x--;
            um++;
        }
        
    }
    printf("cinquenta:%i\nvinte:%i\ndez:%i\num:%i",cinquenta,vinte,dez,um);
    
    return 0;
}