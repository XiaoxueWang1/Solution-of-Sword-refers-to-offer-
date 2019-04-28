bool Find(int target, vector<vector<int> > array) {
    int i=array.size()-1,j=0;
    while(j<array[0].size()&&i>=0){
        if(target==array[i][j]) return true;
        if(target>array[i][j]) j++;
        else i--;
    }
    return false;
}
