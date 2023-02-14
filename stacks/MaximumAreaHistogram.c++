#include<bits/stdc++.h>
using namespace std;
vector<int> NextSmaller(vector<int> arr,int n)
{
    vector<int> res;
    stack<pair<int,int>> st;
    for(int i=n-1;i>=0;i--)
        {
             if(st.size()==0)
                res.push_back(n);
            else if(st.size()>0 and st.top().first<arr[i])
                res.push_back(st.top().second);
            else if(st.size()>0 and st.top().first>=arr[i])
            {
                while(st.size()>0 and st.top().first>=arr[i])
                    st.pop();
                if(st.size()==0)
                    res.push_back(n);
                else
                    res.push_back(st.top().second);
            }
            st.push({arr[i],i});
        }
        reverse(res.begin(),res.end());
        return res;
}
vector<int> PreviousSmaller(vector<int> arr,int n)
{
    vector<int> res;
    stack<pair<int,int>> st;
    for(int i=0;i<n;i++)
        {
            if(st.size()==0)
                res.push_back(-1);
            else if(st.size()>0 and st.top().first<arr[i])
                res.push_back(st.top().second);
            else if(st.size()>0 and st.top().first>=arr[i])
            {
                while(st.size()>0 and st.top().first>=arr[i])
                    st.pop();
                if(st.size()==0)
                    res.push_back(-1);
                else
                    res.push_back(st.top().second);
            }
            st.push({arr[i],i});
        }
        return res;
}
int CalculateArea(vector<int> arr,int n)
{
    vector<int> Rightin=NextSmaller(arr,n);
    vector<int> Leftin=PreviousSmaller(arr,n);
    int area=INT_MIN;
    for(int i=0;i<n;i++)
    {
        area=max(area,(Rightin[i]-Leftin[i]-1)*arr[i]);
    }
    return area;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int res = CalculateArea(arr, n);
        cout<<res << endl;
    }
    return 0;
}
