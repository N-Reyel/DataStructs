#include <stdio.h>

void Insertion(int array[],int tamanho);

int main(){
    int array[] = {5,3,4,2,8,9};
    int tamanho = sizeof(array)/sizeof(array[0])-1;

    for(int i=0;i<=tamanho;i++){
    printf("%d ", array[i]);
    }
    printf("\n");
    
    Insertion(array,tamanho);

    for(int i=0;i<=tamanho;i++){
    printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void Insertion(int array[],int tamanho){
    for(int i = 1;i <= tamanho;i++){
        int eleito = array[i];
        int j = i - 1;
        while( j >= 0 && array[j] > eleito){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = eleito;
    }
}