long ans=0;
void merge(int l1,int r1,int r2,vector<int>& data){
    int i=l1,j=r1,m=0;
    int* temp = new int[r2-l1];
    while(i<r1&&j<r2){
        if(data[i]>data[j]){
            ans+=(r1-i);
            temp[m++]=data[j++];
        }else{
            temp[m++]=data[i++];
        }
    }
    while(i<r1) temp[m++]=data[i++];
    while(j<r2) temp[m++]=data[j++];
    for(int k=l1;k<r2;k++)
        data[k]=temp[k-l1];
}
void mergeSort(int left,int right,vector<int>& data){
    if(right-left<2) return;
    int mid=(left+right)/2;
    mergeSort(left,mid,data);
    mergeSort(mid,right,data);
    merge(left,mid,right,data);
}
int InversePairs(vector<int> data) {
    //利用归并排序
    mergeSort(0,data.size(),data);
    return ans%1000000007;
}
