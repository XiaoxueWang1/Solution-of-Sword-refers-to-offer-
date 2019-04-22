ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
    map<ListNode*,bool> hash;
    ListNode* p;
    for(p=pHead1;p;p=p->next){
        hash[p]=true;
    }
    for(p=pHead2;p;p=p->next)
        if(hash[p])
            return p;
    return NULL;
}
