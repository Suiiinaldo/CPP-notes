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
        head = temp;
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
void insertAtTail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtIndex(Node* &tail,Node* &head,int d, int position)
{
    Node* temp= head;
    int cnt=1;
    if(position == 1)
    {
        insertAtHead(head,d);
        return;
    }
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next == NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    Node* temp2= new Node(d);
    temp2->next=temp->next;
    temp->next=temp2;
}
int main()
{
    Node* node1=new Node(1);
    Node* head= node1;
    Node* tail= node1;
    // print(head);
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    cout<<middle(head)->data<<endl;
}