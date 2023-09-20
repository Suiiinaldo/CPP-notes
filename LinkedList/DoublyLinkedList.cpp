#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev = NULL;
    }
};
Node* middle(Node* &head)
{
    Node* slow = head;Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
void insertAtHead(Node* &head,int d)
    {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
void print(Node* &head)
{
    Node* temp = head;
    while(temp->next != NULL)
    {
        cout<<temp->data<<"  - > ";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}
void insertAtTail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void deleteFromHead(Node* &head)
{
    Node* temp = head;
    temp = temp->next;
    head->next = NULL;
    temp->prev = NULL;
    head = temp;
    cout<<" First Deleted Successfully\n";
}
void deleteFromTail(Node* &tail,Node* &head)
{
    Node* temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    tail = temp;
    cout<<" Last Deleted Successfully\n";
}
void reverseTravel(Node* &tail)
{
    cout<<"Reverse Traversal : \n";
    Node* temp = tail;
    while(temp->prev != NULL)
    {
        cout<<temp->data<<"  - > ";
        temp = temp->prev;
    }
    cout<<temp->data<<endl;
}
int main()
{
    Node* node1=new Node(1);
    Node* head= node1;
    Node* tail= node1;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    print(head);
    deleteFromHead(head);
    print(head);
    deleteFromTail(tail,head);
    print(head);
    cout<<"Middle Element is "<<middle(head)->data<<endl;
    reverseTravel(tail);
}