#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node *left,*right;
    int data;
    vector<int> resfin;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
    vector<int> inorderTraversal(node *root)
    {
        vector<int>resfin;
        inorder(resfin,root);
        return resfin;
    }
    void inorder(vector<int>& resfin,node *root)
    {
        if(!root){
            return;
        }
        inorder(resfin,root->left);
        resfin.push_back(root->data);
        inorder(resfin,root->right);
    }
};
int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(6);
    root->left->left=new node(3);
    root->right->right=new node(8);
    root->left->left->right = new node(5);
    root->right->left=new node(7);
    root->left->left->left = new node(4);
    root->right->right->right = new node(9);
    vector<int> in=root->inorderTraversal(root);
    for(int i=0;i<in.size();i++)
    cout<<in[i]<<" ";cout<<"\n";
}