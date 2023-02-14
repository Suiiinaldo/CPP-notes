#include<bits/stdc++.h>
#define upper(s) tranform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    lower(s);
    string d="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y')
            continue;
        else
            d+='.';
            d+=s[i];
    }
    showvec(d);
}