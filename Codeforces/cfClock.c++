#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
using namespace std;
bool CheckPalindrome(string a,string b)
{
    reverse(all(a));
    if(a==b)
    return true;
    else
    return false;
}
void solve()
{
    string FullTime;
    cin>>FullTime;
    ll AddedTime;
    cin>>AddedTime;
    int InitialHour=stoi(FullTime.substr(0,2));
    int InitialMinute=stoi(FullTime.substr(3,4));
    string HoursFirstCheck=to_string(InitialHour);
    string MinutesFirstCheck=to_string(InitialMinute);
    int UpdatedHour=InitialHour;int UpdatedMinute=InitialMinute;int counter=0;
    do
    {
        UpdatedHour+=AddedTime/60;
        UpdatedMinute+=AddedTime%60;
        if(UpdatedMinute>59)
        {
            UpdatedMinute-=60;
            UpdatedHour+=1;
        }
        if(UpdatedHour>23)
            UpdatedHour=UpdatedHour-24;
        string MinutesFormat=to_string(UpdatedMinute);
        string HoursFormat=to_string(UpdatedHour);
        if(UpdatedHour<10)
        {
            HoursFormat="0"+HoursFormat;
        }
        if(UpdatedMinute<10)
        {
            MinutesFormat="0"+MinutesFormat;
        }
        if(CheckPalindrome(HoursFormat,MinutesFormat))
        {
            cout<<HoursFormat<<" "<<MinutesFormat<<endl;
            counter++;
        }
    }while(UpdatedHour!=InitialHour or UpdatedMinute!=InitialMinute);
    cout<<counter<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
    return 0;
}