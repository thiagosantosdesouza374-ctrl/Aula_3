#include <stdio.h>

int main(){
    int numero;
    while(1){
        printf("Digite o numero 0: ");
        scanf("%d", &numero);

        if(numero == 0){
            break;
        }
        printf("Voce digitou: %d\n", numero);
    }
    printf("Progama encerrado.\n");

    return 0;



}