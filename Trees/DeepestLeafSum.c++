#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
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
    vector<vector<int>> getLevelOrder(node* root)
    {
        vector<vector<int>> ans;
        levelorder(ans,root);
        return ans;
    }
    void levelorder(vector<vector<int>>& ans,node* root)
    {
        queue<node*>q;
        if(!root)
        return;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> layer;
            for(int i=0;i<size;i++)
            {
                node* a=q.front();
                q.pop();
                if(a->left!=NULL)q.push(a->left);
                if(a->right!=NULL)q.push(a->right);
                layer.push_back(a->data);
            }
            ans.push_back(layer);
        }
    }
};
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->right=new node(6);
    root->left->left->left=new node(7);
    root->right->right->right=new node(8);
    vector<vector<int>> resfin=root->getLevelOrder(root);
    for(int i=0;i<resfin.size();++i)
    {
        for(int j=0;j<resfin[i].size();j++)
        {
            cout<<resfin[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
        for(int i=0;i<resfin[resfin.size()-1].size();++i)
        {
            sum+=resfin[resfin.size()-1][i];
        }
    cout<<sum<<endl;
}