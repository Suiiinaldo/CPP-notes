#include<iostream>
using namespace std;
class a
{
    public:
    int x;
    void getno()
    {
        cout<<"Enter First Number"<<endl;
        cin>>x;
    }
};
class b : public a
{
    public:
    int y;
    void getnoq()
    {
        cout<<"Enter Second Number"<<endl;
        cin>>y;
    }
};
class c : public b
{
    public:
    int pro;
    void multiply()
    {
        pro=x*y;
    }
    void display()
    {
        cout<<"Product of Two Numbers : "<<pro<<endl;
    }
};
int main()
{
    c ob;
    ob.getno();
    ob.getnoq();
    ob.multiply();
    ob.display();
}