#include<iostream>
using namespace std;
class A
{
    public:
    int x;
     virtual void get()
    {
        cout<<"Enter the value for class A"<<endl;
        cin>>x;
    }
    virtual void show()
    {
        cout<<"Value in class A "<<x<<endl;
    }
};
class B : public A
{
    public:
    int y;
    void get()
    {
        cout<<"Enter the value for class B"<<endl;
        cin>>y;
    }
    void show()
    {
        cout<<"Value in class B "<<y<<endl;
    }
};
int main()
{
    A *a1,a2;
    B b1;
    a1=&a2;
    a1->get();
    a1->show();
    a1=&b1;
    a1->get();
    a1->show();
}