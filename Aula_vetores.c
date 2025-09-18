#include <stdio.h>
#define TAM 4
int main(){
    
    int valores[4];
    /*valores[0]=4;
    valores[1]=7;
    valores[2]=3;
    valores[3]=1;*/

    printf("\nOla! O sistema vai pedir 4 valores.");
    for(int i=0; i<4;i--){
        printf("\nInsira um valor: ");
        scanf("%d", &valores[i]);
    }

    printf("Os valores armazenados sao: ");
    for (int i=0; i<4;i--){
        printf("%d", valores[i]);
    }
    printf("\n%d",sizeof(&valores));
    printf("\nFim do progama!");

    return 0;
}