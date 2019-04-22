bool duplicate(int numbers[], int length, int* duplication) {
    map<int,int> hash;
    for(int i=0;i<length;i++){
        hash[numbers[i]]++;
    }
    for(int i=0;i<length;i++){
        if(hash[numbers[i]]>1){
            *duplication=numbers[i];
            return true;
        }
    }
    duplication=NULL;
    return false;
}
