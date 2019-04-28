int minNumberInRotateArray(vector<int> rotateArray) {
    if(rotateArray.size()==0) return 0;
    int left=0,right=rotateArray.size()-1;
    while(left<right){
        int mid=(left+right)/2;
        if(rotateArray[mid]>rotateArray[right]) left=mid+1;
        else right=mid;
    }
    return rotateArray[(left+right)/2];
}
