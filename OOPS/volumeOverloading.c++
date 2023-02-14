#include<iostream>
using namespace std;
class vlo
{
    public:
    int volu(int a)
    {
        return a*a*a;
    }   
    float volu(float b)
    {
        return b*b*b;
    }
};
int main()
{
    vlo ob;
    int zxc=ob.volu(3);
    cout<<"Integer Volume : "<<zxc<<endl;
    float cxz=ob.volu(3.14f);
    cout<<"Float Volume : "<<cxz<<endl;
}