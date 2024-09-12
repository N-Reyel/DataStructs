#include <stdio.h>

void Selection(int array[], int tamanho);

int main(){
    int array[] = {5,4,2,8,3};
    int tamanho = sizeof(array)/sizeof(array[0])-1;

    for(int i=0;i<=tamanho;i++){
    printf("%d ", array[i]);
    }
    printf("\n");

    Selection(array,tamanho);
    
    for(int i=0;i<=tamanho;i++){
    printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void Selection(int array[], int tamanho){
   for(int i = 0; i <= tamanho-1;i++){
        int eleito = array[i];
        int menor = array[i+1];
        int pos = i+1;
        for(int j = i + 1; j <= tamanho;j++){
            if(array[j] < menor){
                menor = array[j];
                pos = j; 
            }
        }
        if(menor < eleito){
            array[i] = array[pos];
            array[pos] = eleito;
        }
    } 
}