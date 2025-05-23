#include<stdio.h>
#include<stdlib.h>
/*Essa função recebe um vetor e retorna quantos digitos possuem a quantidade par de algarismos  */

int findNumbers(int* nums, int numsSize){
    
    int count_even_number;

    for(int i = 0; i < numsSize; i++){
       if(( nums[i] >= 10 && nums[i] < 100) || (nums[i] >= 1000 && nums[i] < 10000) || (nums[i] == 100000)){
            count_even_number++;
        }
    }
    return count_even_number;
}

int main(){

    int vet[] = {555,901,482,1771};
    //sizeof(vet) / sizeof(vet[0] -> calcula o tamanho do vetor
    int size = sizeof(vet) / sizeof(vet[0]);

  

    printf("\n%d\n\n", findNumbers(vet, size));

    

}