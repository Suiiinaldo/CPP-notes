#include<bits/stdc++.h>
#define ll long long
using namespace std;
class node
{
    public:
    int data;int sumu=0;
    node *left,*right;
    node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
    void inorder(node *root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }
    }
    void postorder(node *root)
    {
        if(root!=NULL)
        {
            postorder(root->left);
            postorder(root->right);
            cout<<root->data<<" ";
        }
    }
    int preordersum(node *root)
    {
        if(root!=NULL)
        {
            sumu+=root->data;
            preordersum(root->left);
            preordersum(root->right);
        }
        else
        return sumu;
    }
    void preorder(node *root)
    {
        if(root!=NULL)
        {
            cout<<root->data<<" ";
            preorder(root->left);
            preorder(root->right);
        }
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
    cout<<"Inorder\n";
    root->inorder(root);
    cout<<"\nPostorder\n";
    root->postorder(root);
    cout<<"\nPreorder\n";
    root->preorder(root);
    cout<<"\n";
    int sum=root->preordersum(root);
    cout<<sum<<endl;

}