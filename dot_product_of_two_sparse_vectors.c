#include<stdio.h>
#include<stdlib.h>

#define TAM 5
/*Essa função recebe dois vetores de tamanho TAM e faz o produto escalar entre eles e retorna o resultado do produto escalar. (vet1[0] * vet2[0] + vet1[1] * vet2[1] + ...)*/

int dot_product(int vet1[TAM], int vet2[TAM]){

    int produto_escalar;

    for(int i = 0;i < TAM;i++){
        produto_escalar += vet1[i] * vet2[i]; 
    }

    return produto_escalar;
}

int main(){

    int vetor1[] = {0,1,0,0,0}, vetor2[] = {0,1,0,0,0};

    int escalar = dot_product(vetor1,vetor2);
    printf("\nProduto escalar = %d\n\n", escalar);

    return 0;
}
