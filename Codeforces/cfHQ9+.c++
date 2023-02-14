#include<iostream>
using namespace std;
int main()
{
        string s;
        cin>>s;
        char che[]={'H','Q','9'};int t=-1;
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==che[i])
                {
                    t=1;
                    break;
                }
            }
            if(t==1)
            break;
        }
        if(t==1)
        cout<<"YES";
        else
            cout<<"NO";
            return 0;
}