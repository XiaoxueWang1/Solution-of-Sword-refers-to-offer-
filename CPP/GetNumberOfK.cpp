int GetNumberOfK(vector<int> data ,int k) {
    if(data.size()==0) return 0;
    int left=0,right=data.size()-1,ans=0;
    while(left<=right){
        int mid=(left+right)/2;
        if(data[mid]<k) left=mid+1;
        else if(data[mid]>k) right=mid-1;
        else{
            int temp=mid;
            while(mid>=left && data[mid--]==k) ans++;
            while(temp<=right && data[++temp]==k) ans++;
            break;
        }
    }
    return ans;
}
