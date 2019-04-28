vector<int> maxInWindows(const vector<int>& num, unsigned int size)
{
    if(num.size()==0) return {};
    deque<int> dq;
    vector<int> res;
    for(int i=0;i<num.size();i++){
        while(!dq.empty() && num[dq.back()]<=num[i])
            dq.pop_back();
        dq.push_back(i);
        while(dq.front()+size-1<i)
            dq.pop_front();
        if(i>=size-1)
            res.push_back(num[dq.front()]);
    }
    return res;
}
