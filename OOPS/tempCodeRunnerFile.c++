#include<iostream>
using namespace std;
class abc
{
    public:
    int a;string name;
    void get()
    {
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"Enter the number"<<endl;
        cin>>a;
    }
    void show()
    {
        cout<<"The data is :"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Number : "<<a<<endl;
    }
    bool operator ==(abc z)
    {
        if(a==z.a)
        return true;
        else
        return false;
    }
    abc operator +(abc z)
    {
        abc x;
        x.a=a+z.a;
        x.name=z.name;
        return x;
    }
};
int main()
{
    abc ob,bo,co;
    ob.get();
    bo.get();
    ob.show();
    bo.show();
    co=ob+bo;
    co.show();
    if(ob==bo)
    cout<<"A is same in both object"<<endl;
    else
    cout<<"A is not same in both object\n";

}