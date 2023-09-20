#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<string>> v = {{"JFK","SFO"},{"JFK","ATL"},{"SFO","ATL"},{"ATL","JFK"},{"ATL","SFO"}};
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++)
            cout<<v[i][0]<<" "<<v[i][1]<<endl;
    return 0;
}