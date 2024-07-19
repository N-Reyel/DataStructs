#include "stdio.h"

int seqSort(int target,int len,int array[]);


int main(){
    int array[] = {31,67,3,21,32,39,-34,105,5,36};
    int target = 9;
    int len = sizeof(array)/sizeof(array[0]);

    printf("%d\n", seqSort(target,len,array));

    return 0;
}

int seqSort(int target,int len,int array[]){
    for(int i = 0; i < len ;i++){
        if(array[i] == target){
            return i;
        } 
    }
    return -1;
}

