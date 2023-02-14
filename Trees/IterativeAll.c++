#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node* left,*right;
    int data;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
    void preorder(node* &root)
    {
        if (root == NULL)
        return;
        stack<node*> st;
        st.push(root);
        while (!st.empty())
        {
            node* node = st.top();
            cout<<node->data<<" ";
            st.pop();
            if (node->right) st.push(node->right);
            if (node->left) st.push(node->left);
        }
    }
    void postorder(node* &root)
    {
        if (root == NULL)
        return;
        stack<node*> st;
        st.push(root);
        while (!st.empty())
        {
            node* node = st.top();
            st.pop();
            if (node->left)
            {
                st.push(node->left);
            }
            if (node->right)
            {
                st.push(node->right);
            }
            cout<<node->data<<" ";
        }
    }
    void inorder(node* &root)
    {
        stack<node*> s;
        node* curr = root;
        while (curr != NULL || s.empty() == false)
        {
            while (curr !=  NULL)
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            cout << curr->data << " ";
            curr = curr->right;
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
    root->postorder(root);
}