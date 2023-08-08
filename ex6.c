//Considerando que todos os meses tenham 30 dias, calcular o total de dias de n meses.
#include <stdio.h>
int quantidade_dias_mes(int);
int main(void){ 
    int numero_meses, dias;
    printf("Digite o numero de meses: ");
    scanf("%d",&numero_meses);
    dias = quantidade_dias_mes(numero_meses);
    printf("%d meses tem : %d dias\n",numero_meses, dias);
    return 0;
}

int quantidade_dias_mes(int m){
    return m*30;
}
