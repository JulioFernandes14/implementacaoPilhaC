#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct {
    
    int vet[TAM];
    int topo;
    
    
}pilhavet;

void empilhar( int valor, pilhavet *ponteiro) {
    
    if (p -> topo == TAM - 1) {
        printf("\nPilha Cheia");
        exit(0);
    }
    
    p -> topo++;
    p -> vet[p -> topo] = valor;
    
}

int desempilha (pilhavet *ponteiro) {
    
    int auxiliar;
    
    if (p -> topo < 0) {
        printf("\nPilha Vazia");
        exit(1);
    }
    
    auxiliar = p -> vet[p -> topo];
    
    p -> topo--;
    
    return auxiliar;
    
}

int main()
{
    
    pilhavet pilha;
    int valor;
    pilha.topo = -1;
    
    for (int i = 0; i < TAM; i++) {
        
        printf("\nDigite o valor a ser empilhado: ");
        scanf("%d",&valor);
        empilha(valor,&pilha);
        
    }
    
    for (int i = 0; i < TAM; i++) {
        
        printf("\n%d",desempilha(&pilha));
        
    }

    return 0;
}