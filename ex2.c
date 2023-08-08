//Faça uma função para calcular o dobro de um número qualquer.
#include <stdio.h>
int dobro(int);
int main()
{
    int numero;
    int numero_dobro;
    printf("Digite um número e a função 'dobro' retornará o dobro do numero\n");
    scanf("%d",&numero);
    numero_dobro = dobro(numero);
    printf("O numero inicial é %d e a resposta é %d\n",numero, numero_dobro);
    return 0;
}
int dobro(int n){
    n = n*2;
    return n;
}
