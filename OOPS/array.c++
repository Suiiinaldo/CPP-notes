#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10];
    for(int i=0;i<10;i++)
    {
        ar[i]=i;
    }
    int a;
    cin>>a;
    int pos=-1;
    for(int i=0;i<10;i++)
    {
        if(ar[i]==a)
        pos=i;

    }
      if(pos==-1)
      cout<<"position not found"<<endl;
      else
      cout<<"found "<<pos<<endl;
 
}