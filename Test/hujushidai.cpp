//
// Created by 13058 on 2019/9/9.
//
#include <iostream>
#include<vector>
#include <math.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
void insert(TreeNode *p, vector<int> temp, int t){
    int length = temp.size();
    if(t>=length)return;
    p->val = temp[t];
    if((2 * (t+1)) <= length){
        if(temp[2 * (t+1) -1]!=0){
            TreeNode *l;
            l = (TreeNode*)malloc(sizeof(TreeNode));
            l->left = NULL;
            l->right = NULL;
            p->left = l;
            insert(p->left, temp, 2 * (t+1) -1);
        }
        if((2 * (t+1) +1) <= length){
            if(temp[2 * (t+1)]!=0){
                TreeNode *r;
                r = (TreeNode*)malloc(sizeof(TreeNode));
                r->left = NULL;
                r->right = NULL;
                p->right = r;
                insert(p->right, temp, 2 * (t+1));
            }
        }
    }
}

TreeNode* createFromArray(vector<int> temp){
    TreeNode *p;
    p = (TreeNode*)malloc(sizeof(TreeNode));
    p->left = NULL;
    p->right = NULL;
    insert(p,temp,0);
    return p;
}
void mid(TreeNode *head)
{
    if(head==NULL)
        return;
    if(head->left!=NULL)
        mid(head->left);
    cout<<head->val<<endl;
    if(head->right!=NULL)
        mid(head->right);
}
int main()
{
    int n;
    cin>>n;
    int num=pow(2,n)-1;
    vector<int> input;
    while(num--)
    {
        int t;
        cin>>t;
        input.push_back(t);
    }
    TreeNode *head=createFromArray(input);
    mid(head);
    return 0;
}