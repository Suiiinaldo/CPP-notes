#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void traversal(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
int searchElement(Node* &head,int s)
{
    Node* temp= head;int cnt=1;
    while(temp!=NULL)
    {
        if(temp->data == s)
        {
            return cnt;
        }
        temp=temp->next;
        cnt++;
    }
    return -1;
}
void deleteElement(Node* &head,int d)
{
    int pos = searchElement(head,d);
    Node* prev = head;
    int cnt = 1;
    while(prev!=NULL)
    {
        if(cnt == pos - 1)
        {
            break;
        }
        cnt++;
        prev = prev->next;
    }
    prev->next = prev->next->next;
}
int main()
{
    Node* Node1= new Node(1);
    Node* head = Node1;
    Node* tail = Node1;
    insertAtTail(tail,5);
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,6);
    insertAtTail(tail,4);
    traversal(head);
    cout<<"Searching the element 5\n";
    if(searchElement(head,5) == -1)
    cout<<"Not Found\n";
    else
    cout<<"Found at position "<<searchElement(head,5)<<endl;
    deleteElement(head,3);
    traversal(head);
}