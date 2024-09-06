#include <stdio.h>

void Bubble(int array[],int tamanho);

int main(){
    int array[] = {10,4,2,7,8,9};
    
    int tamanho = (sizeof(array)/sizeof(array[0]))-1;

    for(int i=0; i<=tamanho;i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    Bubble(array,tamanho);
    
    for(int i=0;i<=tamanho;i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

void Bubble(int array[],int tamanho){
    int aux;
    for(int j=0;j<=tamanho;j++){
        for(int i=0;i<=tamanho-1;i++){
            if(array[i] > array[i+1]){
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
        }
    }

}