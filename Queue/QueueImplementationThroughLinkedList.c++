#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insert(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void deleteElement(Node* &head,Node* &tail)
{
    if(head == tail)
    {
        cout<<"Queue Is Empty\n";
        head = head->next;
    }
    else
    {
        head = head->next;
        cout<<"Deleted Successfully\n";
    }
}
int main()
{
    Node* node1=new Node(10);
    Node* head= node1;
    Node* tail= node1;
    print(head);
    insert(tail,20);
    insert(tail,30);
    insert(tail,40);
    insert(tail,50);
    print(head);
    deleteElement(head,tail);
    print(head);
    deleteElement(head,tail);
    print(head);
    deleteElement(head,tail);
    print(head);
    deleteElement(head,tail);
    print(head);
    deleteElement(head,tail);
    print(head);
    deleteElement(head,tail);
}