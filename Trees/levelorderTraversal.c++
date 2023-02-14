#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node *left,*right;
    int val;
    node(int x)
    {
        val=x;
        left=NULL;
        right=NULL;
    }
    vector<vector<int>>getlevelorder(node *root)
    {
        vector<vector<int>> ans;
        levelorder(root,ans);
        return ans;
    }
    void levelorder(node* root,vector<vector<int>>&ans)
    {
        queue<node*> q;
        if(!root)
        return;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;++i)
            {
                node* a=q.front();
                q.pop();
                if(a->left!=NULL)q.push(a->left);
                if(a->right!=NULL)q.push(a->right);
                level.push_back(a->val);
            }
            ans.push_back(level);
        }
    }
};
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->left->left=new node(7);
    root->right=new node(3);
    root->right->right=new node(6);
    root->right->right->right=new node(8);
    vector<vector<int>> resfin=root->getlevelorder(root);
    for(int i=0;i<resfin.size();++i)
    {
        for(int j=0;j<resfin[i].size();++j)
            cout<<resfin[i][j]<<" ";
        cout<<endl;
    }
}