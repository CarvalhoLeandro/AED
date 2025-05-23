#include<stdio.h>
#include<stdio.h>
#include<string.h>

#define SIZE 3

struct Seller {
    char name[30];
    float value;
};
/*Esse procedimento recebe um vetor de struct com 2 campos (name e value) como parâmetro e prenche o vetor com os dados correspondentes não retornando nada*/

void seller_registration(struct Seller *vet, int size){

    printf("\n\n---------------------- Cadastro Vendedor ---------------------\n\n");
    
    for(int i = 0;i < size;i++ ){
        printf("\nDados do vendedor: %d\n", i+1);
        printf("Nome: ");
        fgets(vet[i].name, sizeof(vet[i].name), stdin);
        
        // tirar a quebra de linha no final da string
        vet[i].name[strcspn(vet[i].name,"\n")] = 0;
        
        printf("Valor das vendas R$: ");
        scanf("%f", &vet[i].value);

        while (getchar() != '\n');
    }
}

/*Esse procedimento recebe um vetor de struct com 2 campos (name e value) como parâmetroe imprime seus dados.*/

void print_sellers(const struct Seller *vet, int size){

    printf("--------------------- Vendedores Cadastrados ---------------------");

    for(int i = 0; i < size;i++){
        printf("\nVendedor %d", i + 1);
        printf("\nNome: %s\nVendeu R$: %.2f\n", vet[i].name, vet[i].value);
    }
}

/*Essa função recebe um vetor de struct com 2 campos (name e value) como parâmetro percorre o vetor e retorna o vendedor que obteve a maior venda */
struct Seller top_seller(struct Seller *vet, int size){
    
    struct Seller best_seller;
    float value = vet[0].value;

    for(int i = 0; i < size; i++){
        if(vet[i].value > value){
            value = vet[i].value;
            best_seller = vet[i];
        }
        else{
            best_seller = vet[0];
        }
    }
    return best_seller; 

}


int main(){

    struct Seller vetseller[SIZE];// Declarei o vetor de struct
    
    seller_registration(vetseller,SIZE);
    print_sellers(vetseller, SIZE);
    
    struct Seller good_seller = top_seller(vetseller,SIZE);
    printf("-------------------- Melhor vendedor --------------------");
    printf("\nNome: %s\nValor R$: %.2f\n\n", good_seller.name, good_seller.value);



}
