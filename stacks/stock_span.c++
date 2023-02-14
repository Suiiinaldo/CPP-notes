#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> StockSpan(vector<long long> arr, int n)
{
    vector<ll> res;
    stack<pair<ll,ll>> st;
    for(int i=0;i<n;i++)
    {
        if(st.size()==0)
                res.push_back(1);
            else if(st.size()>0 and st.top().first >arr[i])
                res.push_back(i-st.top().second);
            else if(st.size()>0 and st.top().first<=arr[i])
            {
                while(st.size()>0 and st.top().first<=arr[i])
                    st.pop();
                if(st.size()==0)
                    res.push_back(i-(-1));
                else
                    res.push_back(i-st.top().second);
            }
        st.push({arr[i],i});
    }
    return res;
} 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<long long> res = StockSpan(arr, n);
        for (long long i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}