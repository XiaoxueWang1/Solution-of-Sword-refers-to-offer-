vector<int> FindNumbersWithSum(vector<int> array,int sum) {
    int left=0,right=array.size()-1;
    while(left<right){
        int s=array[left]+array[right];
        if(s==sum)
            return {array[left],array[right]};
        else if(s<sum) left++;
        else right--;
    }
    return {};
}
