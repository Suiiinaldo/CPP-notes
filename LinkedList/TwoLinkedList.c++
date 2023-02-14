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
void insertAtTail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
Node* makeSeaprateEven(Node* &head)
{
    Node* temp = head;
    Node* LinkedEven = new Node(0);
    Node* temptail = LinkedEven;
    while(temp!=NULL)
    {
        if(temp->data %2==0)
        {
            insertAtTail(LinkedEven,temp->data);
        }
        temp = temp->next;
    }
    return temptail->next;
}
Node* makeSeaprateOdd(Node* &head)
{
    Node* temp = head;
    Node* LinkedOdd = new Node(0);
    Node* temptail = LinkedOdd;
    while(temp!=NULL)
    {
        if(temp->data %2!=0)
        {
            insertAtTail(LinkedOdd,temp->data);
        }
        temp = temp->next;
    }
    return temptail->next;
}
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
int main()
{
    Node* Node1= new Node(1);
    Node* head = Node1;
    Node* tail = Node1;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    print(head);
    cout<<"Even Linked List is\n";
    Node* first = makeSeaprateEven(head);
    print(first);
    cout<<"Odd Linked List is\n";
    Node* second  = makeSeaprateOdd(head);
    print(second);
}