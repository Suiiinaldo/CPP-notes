#include<iostream>
using namespace std;
class bq;
class aq
{
    int x;
    public:
    void get()
    {
        cout<<"Enter value for x "<<endl;
        cin>>x;
    }
    void dis()
    {
        cout<<"x = "<<x<<endl;
    }
    friend void swap(aq&,bq&);
};
class bq
{
    int y;
    public:
    void get()
    {
        cout<<"Enter value for y "<<endl;
        cin>>y;
    }
    void dis()
    {
        cout<<"y = "<<y<<endl;
    }
    friend void swap(aq&,bq&);
};
void swap(aq &a,bq &b)
{
    a.x=a.x+b.y;
    b.y=a.x-b.y;
    a.x=a.x-b.y;
}
int main()
{
    cout<<"Prakhar Pratap Singh 21BCS9783"<<endl;
    aq zx;bq xc;
    zx.get();
    zx.dis();
    xc.get();
    xc.dis();
    swap(zx,xc);
    cout<<"After Swapping"<<endl;
    zx.dis();
    xc.dis();
}