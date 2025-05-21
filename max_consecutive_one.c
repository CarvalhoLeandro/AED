#include<stdio.h>
#include<stdlib.h>

/*Dado um array binário num, retorne o número máximo de 1s consecutivos no array*/


/*A função abaixo recebe um vetor de inteiros binarios e o tamanho do vetor e retorna 
a quantidade máxima de ocorrências de 1s.*/
int maior_sequencia_de_uns(int vet[], int tamanho){
    
    int cont_um = 0, maior_sequencia = 0;
    
    for ( int i = 0; i < tamanho; i++){
        if ( vet[i] == 1 ){
            cont_um++;
            if ( cont_um > maior_sequencia)
                maior_sequencia = cont_um;
        }        
        else
         cont_um = 0;  
    }
    return maior_sequencia;
}

int main(){
    
    int num[] = {1,0,1,1,0,1,1,1,1,1,0,1,1};
    int tam = sizeof(num);
    int sequencia;
    
    sequencia = maior_sequencia_de_uns( num, tam);

    printf("\nA maior sequencia de 1s = %d\n\n", sequencia);

    return 0;
}