//Escreva um algoritmo que armazene o valor 999 na variável a e o valor 555 na variável b.
#include <stdio.h>

int main()
{
    int a = 999;
    int b = 555;
    int t;
    printf("O valor de 'a' é %d, e o valor de 'b' é %d\n",a,b);
    t = a;
    a = b;
    b = t;
    printf("O valor de 'a' é %d, e o valor de 'b' é %d",a,b);
    return 0;
}
