#include <stdio.h>
#define TAM 4
int main(){
    
    int valores[TAM];
    int uso_memoria;
    int tamanho_vetor;
    
    /*valores[0]=4;
    valores[1]=7;
    valores[2]=3;
    valores[3]=1;*/

    printf("\nOla! O sistema vai pedir 4 valores.");
    for(int i=0; i<TAM;i++){
        printf("\nInsira um valor: ");
        scanf("%d", &valores[i]);
    }
    printf("Os valores armazenados sao: ");
    for (int i=0; i<TAM;i++){
        printf("%d", valores[i]);
    }
     printf("Os valores armazenados sao: ");
    for (int i=TAM; i>-1;i--){
        printf("%d", valores[i]);
    }
    uso_memoria = sizeof(valores);
    tamanho_vetor = sizeof(valores)/ sizeof(valores[0]);
    printf("\n%d Tamanhode espacoem memoria em bytes",uso_memoria);
    printf("\n%d Numero de elementos",tamanho_vetor);
    printf("\nFim do progama!");

    return 0;
}