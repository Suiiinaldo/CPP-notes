#include<iostream>
using namespace std;
inline int max(int a,int b,int c)
{
    return (a>b && a>c)?a:((b>c)?b:c);
}
inline int min(int a,int b,int c)
{
    return(a<b && a<c)?a:((b<c)?b:c);
}
int main()
{
    int x,y,z;
    cout<<"Enter the Numbers"<<endl;
    cin>>x>>y>>z;
    cout<<"Max is "<<max(x,y,z)<<endl<<"Min is "<<min(x,y,z);
}