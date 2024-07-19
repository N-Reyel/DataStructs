#include "stdio.h"
#include "sequencial.h"

int main(){
    int array[] = {31,67,3,21,32,39,-34,105,5,36};
    int target = 21;
    int len = sizeof(array)/sizeof(array[0]);

    printf("%d\n", seqSort(target,len,array));

    return 0;
}
