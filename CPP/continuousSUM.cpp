//滑窗算法
vector<vector<int> > FindContinuousSequence(int sum) {
    vector<vector<int> > ans;
    int i=1,j=2;
    while(i<j){
        int s = (j-i+1)*(i+j)/2;
        if(s < sum){
            j++;
        }else if(s > sum){
            i++;
        }else{
            vector<int> path;
            for(int m=i;m<=j;m++)
                path.push_back(m);
            ans.push_back(path);
            i++;
        }
    }
    return ans;
}
