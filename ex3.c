//Sabendo que a área quadrada é dada pela multiplicação dos lados, escreva um algoritmo que 
//mostre a área quadrada de um espaço qualquer.
#include <stdio.h>
int main()
{
    int lado1, lado2, area_total;
    printf("Qual o valor do lado 1: ");
    scanf("%d",&lado1);
    printf("Qual o valor do lado 2: ");
    scanf("%d",&lado2);
    area_total = lado1*lado2;
    printf("A area total de um quadrado %dx%d é %d",lado1,lado2,area_total);
 return 0;
}
