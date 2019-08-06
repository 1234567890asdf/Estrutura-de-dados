#include <stdio.h>
#define TAMANHO 100
int getValorDoMeio(int *vetor, int tamanho);

void main(){
    int vetor[TAMANHO];
    int valorDoMeio;
    for(int i=0; i<TAMANHO; i++){
        vetor[i] = i+1;
    }
    valorDoMeio = getValorDoMeio(vetor, TAMANHO);
    printf("Valor do meio: %d \n", valorDoMeio);
}

int getvalorDoMeio(int *vetor, int tamanho){
    printf("valores no vetor: \n");
    for(int i=0; i<tamanho; i++){
        printf("Valores no vetor:\n");
    }
    printf("\n");
    return vetor[tamanho/2];
    
}
