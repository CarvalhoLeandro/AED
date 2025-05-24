#include<stdio.h> // para printf()
#include<stdlib.h> // para rand() e srand()
#include<time.h> // para time()

#define SIZE 50 // tamanho do vetor

/*Essa função abaixo recebe um vetor de tamanho SIZE como parãmetro e o preenche com números aleatórios no intervalo definido pelo usuário*/
void vector_random_numbers(int vet[], int size){

    int inferior, superior;

    printf("\nDigite o limite inferior: ");
    scanf("%d", &inferior);
    printf("\nDigite o limite superior: ");
    scanf("%d", &superior);

    for(int i = 0; i < size;i++){
        vet[i] = inferior + rand() % superior;
    }
}

/*Essa função abaixo recebe um vetor de tamanho SIZE como parãmetro e 'printa' o vetor na tela*/
void print_vetor(int vet[], int size){

    printf("[");
    for(int i = 0; i < size; i++){
        printf(" %d ", vet[i]);
    }
    printf("]""\n\n");

}

/*Essa função abaixo recebe um vetor de tamanho SIZE como parãmetro e ordena o vetor em ordem crescente (bubble sort)*/
void bubble_sort(int vet[], int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(vet[j] > vet[j + 1]){
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
}

int main(){

    int vector[SIZE];

    srand(time(NULL));// seed da função rand()
    
    vector_random_numbers(vector, SIZE);
    printf("\nVetor preenchido aleatoriamente: \n");
    print_vetor(vector,SIZE);
    
    bubble_sort(vector, SIZE);
    printf("\nVetor ordenado (bubble sort): \n");
    print_vetor(vector,SIZE);

    return 0;
}