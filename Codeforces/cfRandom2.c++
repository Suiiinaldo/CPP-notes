#include<iostream>
using namespace std;
class demo
{
    public:
    int a,b,c,d,min,max;
    public:
        void get();
        void mini();
        void maxi();
        void show();
};
inline void demo:: get()
    {
        cout<<"Enter the Numbers\n";
        cin>>a>>b>>c;
    }
inline void demo:: mini()
    {
        d=(a<b)?a:b;
        min=(d<c)?d:c;
    }
inline void demo:: maxi()
    {
        d=(a>b)?a:b;
        max=(d>c)?d:c;
    }
inline void demo:: show()
    {
        cout<<"Maximum Number is "<<max<<endl;
        cout<<"Minimum Number is "<<min<<endl;
    }
int main()
    {
        demo ob;
        ob.get();
        ob.mini();
        ob.maxi();
        ob.show();
    }