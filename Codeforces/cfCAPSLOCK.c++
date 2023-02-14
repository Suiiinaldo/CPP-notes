#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,e=0;
        for(int i=1;i<s.size();i++) {
            int ch=(int)s[i];
            if (ch < 97)
                c++;
            else
                e++;
        }
        int ch=(int)s[0];
        if(ch<97)
            c++;
        if(e>0)
            cout<<s;
        else if(c==s.size())
        {
            transform(s.begin(),s.end(),s.begin(), ::tolower);
            cout<<s;
        }
        else if( c==s.size()-1)
        {
            string asd=s.substr(1,s.size());
            transform(asd.begin(),asd.end(),asd.begin(), ::tolower);
            cout<<(char)toupper(s[0])<<asd;
        }
        else
            cout<<s;
}