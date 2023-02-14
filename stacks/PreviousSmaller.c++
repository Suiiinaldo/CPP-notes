#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> NextSmallerElement(vector<ll>arr,int n)
{
    vector<ll> res;
    stack<ll>st;
    for(int i=0;i<n;i++)
    {
        if(st.size()==0)
        res.push_back(-1);
        else if(st.size()>0 and st.top()<arr[i])
        res.push_back(st.top());
        else if(st.size()>0 and st.top()>=arr[i])
        {
            while(st.size()>0 and st.top()>=arr[i])
            st.pop();
            if(st.size()==0)
            res.push_back(-1);
            else
            res.push_back(st.top());
        }
        st.push(arr[i]);
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
        vector<long long> res = NextSmallerElement(arr, n);
        for (long long i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}