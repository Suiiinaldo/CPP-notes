#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll bs (ll arr[], ll n, ll x) {
    ll start = 0, end = n-1, mid;
    while (start <= end) {
        mid = start + (end-start)/2;
        if (arr[mid] < x)
            start = mid+1;
        else if (arr[mid] > x)
            end = mid-1;
        else
            return mid;
    }
    if (arr[mid] < x)
        return (mid+1);
    else
        return mid;
}
 
int main ()
{
    ll t, n, m, arr[150001], q, x, ans;
    cin >> t;
    while (t--) {
        cin >> n >> q;
        for (int i = 0; i < n; i++)
                cin >> arr[i];
        sort(arr, arr + n, greater<int>());
        for (int i = 1; i < n; i++)
            arr[i] += arr[i-1];
        for (int i = 0; i < q; i++) {
            cin >> x;
            ans = bs (arr, n, x);
            if (ans == n)
                cout << -1 << '\n';
            else
                cout << (ans+1) << '\n';
        }
    }
    return 0;
}