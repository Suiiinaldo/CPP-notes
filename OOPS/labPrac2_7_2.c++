#include<iostream>
using namespace std;
class abc
{
    int x;
    public:
    void get()
    {
        cout<<"Enter the Number"<<endl;
        cin>> x;
    }
    void show()
    {
        cout<<"The Number entered : "<<x<<endl;
    }
};
int main()
{
    abc a,*a1;
    a1=&a;
    a.get();
    a1->show();
}