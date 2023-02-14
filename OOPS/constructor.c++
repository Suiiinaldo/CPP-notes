#include<bits/stdc++.h>
using namespace std;
class abc
{
    int a,b,p;//*p for copy constructor
    public:
    /*abc()
    {
        p = new int;
    }*/
    abc(int x,int y,int z)
    {
        a=x;
        b=y;
        //p=new int;
        p=z;//for copy constructor p=&z;
    }
    /*abc(abc &d) copy constructor
    {
        a=d.a;
        b=d.b;
        p=new int;
        *p=*(d.p);
    }*/
    void dis()
    {
        cout<<a<<" "<<b<<" "<<p<<endl;//for copy constructor print *p;
    }
};
int main()
{
    abc d1(1,2,3);
    cout<<"Elements of Object 1 : "<<endl;
    d1.dis();
    abc d2=d1;//shallow copy; & for copy constructor abc d2(d1);
    cout<<"Elements of Object 2 : "<<endl;
    d2.dis();
}