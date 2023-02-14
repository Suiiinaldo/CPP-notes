#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        string s;
        cin>>s;string d=s;reverse(s.begin(),s.end());int op=0;int n=s.size();
        for(int i=1;i<n;i++)
        {
            char v=d[i];
            d+=v;
            if(d==s)
            break;
            op++;
        }
        cout<<op<<endl;
        
    }
}