int GetUglyNumber_Solution(int index) {
    if(index<7) return index;
    vector<int> res(index);
    res[0]=1;
    //每次比较最前的t2*2，最前的t3*3，最前的t5*5，取最小值
    //一般时候t2>t3>t5，因为2*t2最前，t2一定最大
    int t2=0,t3=0,t5=0;
    for(int i=1;i<index;i++){
        if(2*res[t2]<=3*res[t3]){
            if(2*res[t2]<=5*res[t5]){
                res[i]=2*res[t2];
                t2++;
            }else{
                res[i]=5*res[t5];
                t5++;
            }
        }else{
            if(3*res[t3]<=5*res[t5]){
                res[i]=3*res[t3];
                t3++;
            }else{
                res[i]=5*res[t5];
                t5++;
            }
        }
        if(res[i]==res[i-1]) i--;
    }
    return res[index-1];
}
