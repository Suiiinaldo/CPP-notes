#include<iostream>
using namespace std;
class abc
{
    public:
    int a,b,su;
    abc()
    {
        su=0;
    }
    void get()
    {
        cout<<"Enter two Numbers\n";
        cin>>a>>b;
    }
    void sum()
    {
        cout<<"Sum is : "<<a+b<<endl;
    }
};
int main()
{
    abc *ob;
    ob=new abc;
    ob->get();
    ob->sum();
    delete ob;

}