// Escreva um algoritmo para mostrar o sucessor e o antecessor de um número qualquer.
#include <stdio.h>
int antecessor(int n);
int sucessor(int n);
int main()
{ 
    int numero_dado, n_sucessor, n_antecessor;
    printf("Digite um número e te direi qual número o antecede e o suscede.\n");
    printf("Número inicial: ");
    scanf("%d",&numero_dado);
    n_antecessor = antecessor(numero_dado);
    n_sucessor = sucessor(numero_dado);
    printf("O número dado é %d, seu antecessor é %d, e seu sucessor é %d",numero_dado, n_antecessor, n_sucessor);
 return 0;
}
int antecessor(int n){
    n = n-1;
    return n;
}
int sucessor(int n){
    n = n+1;
    return n;
}
