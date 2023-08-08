//Faça um programa que calcule a média simples (aritmética) de 3 valores quaisquer.
//Utilize as variáveis valor1, valor2 e valor3.
#include <stdio.h>
int media(int, int, int);
int main()
{ 
    int valor1, valor2, valor3;
    
    printf("Digite 3 valores e aperte a barra de espaço entre cada valor:");
    scanf("%d %d %d",&valor1,&valor2,&valor3);
    printf("A resposta é: %d",media(valor1,valor2,valor3));
return 0;
}

int media(int a, int b, int c){
    return (a+b+c)/3;
}
