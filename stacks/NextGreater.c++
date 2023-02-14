#include <bits/stdc++.h>
using namespace std;
vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long> resu;
    stack<long long> st;
    for (long long i = n - 1; i >= 0; i--)
    {
        if (st.size() == 0)
            resu.push_back(-1);
        else if (st.size() > 0 && st.top() > arr[i])
        {
            resu.push_back(st.top());
        }
        else if (st.size() > 0 && st.top() <= arr[i])
        {
            while (st.size() > 0 && st.top() <= arr[i])
            {
                st.pop();
            }
            if (st.size() == 0)
                resu.push_back(-1);
            else
                resu.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(resu.begin(), resu.end());
    return resu;
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
        vector<long long> res = nextLargerElement(arr, n);
        for (long long i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}