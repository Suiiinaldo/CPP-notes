#include<bits/stdc++.h>
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
    node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
 class abc
 {
     public:
     void preorder(vector<int> &resfin,node* root)
    {
        if(root==NULL)
        return;
        if(root->left==NULL and root->right==NULL)
        {
            resfin.push_back(root->data);
        }
        preorder(resfin,root->left);
        preorder(resfin,root->right);
    }
    vector<int> getvector(node* root)
    {
        vector<int> resfin;
        preorder(resfin,root);
        return resfin;
    }
    bool leafSimilar(node* root1, node* root2) {
        vector<int> First,Second;
        First=getvector(root1);
        Second=getvector(root2);
        return First==Second;
    }
 };
int main()
{
    node *root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    node *root2=new node(1);
    root2->left=new node(2);
    root2->right=new node(3);
    abc ob;
    if(ob.leafSimilar(root1,root2)==true)
    cout<<"True\n";
    else
    cout<<"False\n";
}