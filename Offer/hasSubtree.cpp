//
// Created by Administrator on 2019/8/6 0006.
//

#include <iostream>
#include <queue>

using namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

bool isSub(TreeNode *r1, TreeNode *r2) {//r2子结构
    if(r1==NULL&&r2!=NULL)
        return  false;
    else if(r1==NULL&&r2==NULL)
        return  true;
    else if(r1!=NULL&&r2==NULL)
        return true;
    else
    {
        if(r1->val!=r2->val)
            return false;
        return  isSub(r1->left,r2->left)&&isSub(r1->right,r2->right);
    }

}
vector<TreeNode*> mid;
void midSearch(TreeNode *r)
{
    if(r== nullptr)
        return;
    if(r->left!= nullptr)
        midSearch(r->left);

    mid.push_back(r);

    if(r->right!= nullptr)
        midSearch(r->right);
}

bool HasSubtree(TreeNode* r1, TreeNode* r2)
{
    if(r2==NULL||r1==NULL)
        return false;
    queue<TreeNode*> q;
    q.push(r1);
    while(!q.empty())
    {
        TreeNode *p=q.front();
        q.pop();
        if(p->val==r2->val&&isSub(p, r2))
            return true;
        if(p->left!=NULL)
            q.push(p->left);
        if(p->right!=NULL)
            q.push(p->right);
    }
    return false;
}



int main(){
    TreeNode *r2=new TreeNode(8);
    r2->left=new TreeNode(9);
    r2->right=new TreeNode(2);

    TreeNode *r1=new TreeNode(8);
    r1->left=new TreeNode(8);
    r1->right=new TreeNode(7);
    r1->left->right=new TreeNode(2);
    r1->left->left=new TreeNode(9);
    r1->left->right->left=new TreeNode(4);
    r1->left->right->right=new TreeNode(7);
    //cout<<HasSubtree(r1,r2);

    midSearch(r1);
    for (int i = 0; i <mid.size() ; ++i) {
        cout<<mid[i]->val<<" ";
    }

    return  0;
}