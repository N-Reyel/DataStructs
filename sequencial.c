int seqSort(int target,int len,int array[]){
    for(int i = 0; i < len ;i++){
        if(array[i] == target){
            return i;
        } 
    }
    return -1;
}

