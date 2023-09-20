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
void insertAtHead(Node* &head,int d)
    {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
void print(Node* &head, Node* &tail)
{
    Node* temp = head;
    Node* curr = temp;
    while(temp->next != curr)
    {
        cout<<temp->data<<"  - > ";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}
void insertAtTail(Node* &tail,int d,Node* &head)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
    temp->next = head;
}
void deleteFromHead(Node* &head,Node* &tail)
{
    Node* temp = head;
    temp = temp->next;
    head->next = NULL;
    head = temp;
    tail->next = temp;
    cout<<" First Deleted Successfully\n";
}
void deleteFromTail(Node* &tail,Node* &head)
{
    Node* temp = head;
    while(temp->next != tail)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    tail = temp;
    tail->next = head;
    cout<<" Last Deleted Successfully\n";
}
int main()
{
    Node* node1=new Node(1);
    Node* head= node1;
    Node* tail= node1;
    insertAtTail(tail,2,head);
    insertAtTail(tail,3,head);
    insertAtTail(tail,4,head);
    insertAtTail(tail,5,head);
    insertAtTail(tail,6,head);
    print(head,tail);
    deleteFromHead(head,tail);
    print(head,tail);
    deleteFromTail(tail,head);
    print(head,tail);
    print(tail,head);
}