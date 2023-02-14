#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
Node* insert(int data,Node* &root)
{
    if(!root)
    {
        root = new Node(data);
        return root;
    }
    if(data > root->data){
        root->right = insert(data,root->right);
    }
    else{
        root->left = insert(data,root->left);
    }
    return root;
}
bool search(Node* root,int data)
{
    if(root == NULL)
        return false;
    if( root->data == data)
        return true;
    if(root->data< data)
        search(root->right,data);
    if(root->data > data)
        search(root->left,data);
}
void print(Node* root)
{
    if(!root)
        return;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
Node* minVal(Node* root)
{
    Node* temp = root;
    while(temp->left!=NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node* deleteElement(Node* root,int data)
{
    if(!root)
    {
        return root;
    }
    if(root->data == data)
    {
        if(root->left == NULL and root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if(root->left == NULL and root->right!=NULL)
        {
            Node* temp =root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL and root->left!=NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = minVal(root->right);
        root->data = temp->data;
        root->right = deleteElement(root->right,temp->data);
        return root;
    }
    if(data < root->data)
        root->left = deleteElement(root->left,data);
    else
        root->right = deleteElement(root->right,data);
}
void takeInput(Node* &root)
{
    int data;
    cout<<"Enter the data to be inserted else enter -1 to exit\n";
    cin>>data;
    while(data != -1){
        root = insert(data,root);
        cin>>data;
    }
}
void levelOrder(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            Node* a =q.front();
            q.pop();
            if(a->left!=NULL)q.push(a->left);
            if(a->right!=NULL)q.push(a->right);
            cout<<a->data<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Node *root = NULL;
    takeInput(root);
    cout<<"Inorder traversal\n";
    print(root);
    cout<<endl;
    cout<<"Enter the Element to be searched"<<endl;
    int x;
    cin>>x;
    if(search(root,x))
        cout<<"Found\n";
    else
        cout<<"Not Found\n";
    cout<<"Level Orcder Traversal\n";
    levelOrder(root);
    cout<<"Enter the Element to be Deleted"<<endl;
    int y;
    cin>>y;
    if(search(root,y))
    {
        root = deleteElement(root,y);
        cout<<"After Deleting "<<y<<endl;
        cout<<"Inorder traversal\n";
        print(root);
        cout<<endl;
        cout<<"Level Orcder Traversal\n";
        levelOrder(root);
    }
    else
    cout<<"Entered Value does not exist in the tree\n";
}