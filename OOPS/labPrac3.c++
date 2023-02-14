#include<iostream>
using namespace std;
class alpha
{
    public:
    int x;
    alpha(int a)
    {
        x=a;
    }
    void show_alpha()
    {
        cout<<"Alpha's Variable is "<<x<<endl;
    }
};
class beta
{
    public:
    float y;
    beta(float a)
    {
        y=a;
    }
    void show_beta()
    {
        cout<<"Beta's Variable is "<<y<<endl;
    }
};
class gama : public alpha , public beta
{
    public:
    int zxc,cxz;
    gama(int q,float w,int as,int ds):alpha(q),beta(w)
    {
        zxc=as;
        cxz=ds;
    }
    void display()
    {
        cout<<"Data of Gama class are :"<<endl;
        cout<<"Alpha's : "<<x<<endl;
        cout<<"Beta's : "<<y<<endl;
        cout<<"Gama's : "<<zxc<<","<<cxz<<endl;
    }
};
int main()
{
    cout<<"21BCS9783 Prakhar Pratap Singh"<<endl;
    gama ob(1,2.4f,3,4);
    ob.display();
}