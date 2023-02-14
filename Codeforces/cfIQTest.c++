#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int odd=0,even=0;
    int lastodd,lasteven;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i] & 1)
        {
            odd++;lastodd=i;
        }
        else
        {
            even++;lasteven=i;
        }
    }
    if(odd>even)
    cout<<lasteven+1<<endl;
    else
    cout<<lastodd+1<<endl;
    return 0;
}