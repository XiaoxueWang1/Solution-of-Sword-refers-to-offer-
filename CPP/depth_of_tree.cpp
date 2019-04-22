int TreeDepth(TreeNode* pRoot)
{
    if(!pRoot) return 0;
    int left=TreeDepth(pRoot->left);
    int right=TreeDepth(pRoot->right);
    return max(left,right)+1;
}
