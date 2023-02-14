#include <iostream>
using namespace std;
class fri
{
    int re,im;
    public:
    void get()
    {
        cout<<"Enter the real part"<<endl;
        cin>>re;
        cout<<"Enter the imaginary part"<<endl;
        cin>>im;
    }
    void dis()
    {
        cout<<re<<"+i"<<im<<endl;
    }
    friend int inc(fri&);
};
int inc(fri &a)
{
    a.n++;
    cout<<a.n<<endl;
    return a.n;
}
int main()
{
    fri zx;
    zx.get();
    zx.dis();
    inc(zx);
    zx.dis();
}