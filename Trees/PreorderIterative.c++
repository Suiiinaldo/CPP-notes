#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node* left,*right;
    int val;
    node(int x)
    {
        left=right=NULL;
        val=x;
    }
    vector<int> preorder(node* root)
    {
        vector<int> ans;
        if(root==NULL)
        return ans;
        stack<node*> st;
        st.push(root);
        while(!st.empty())
        {
            root=st.top();
            st.pop();
            ans.push_back(root->val);
            if(root->right!=NULL)
            st.push(root->right);
            if(root->left!=NULL)
            st.push(root->left);
        }
        return ans;
    }
};
int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->right=new node(6);
    root->right->left=new node(7);
    vector<int>ans=root->preorder(root);
    for(int i=0;i<ans.size();++i)
    cout<<ans[i]<<" ";cout<<endl;
}