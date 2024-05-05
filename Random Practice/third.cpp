#include <bits/stdc++.h>
using namespace std;
int main() {
    int t ;
    cin >> t ;
    while (t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ans = INT_MIN;
        int result = -1;
        vector<int>weight(n,0);
        for(int i=0;i<n;i++){
            int source = i;
            int dest = arr[i];
            if(dest != -1){
                weight[dest] += source;
                if(ans <= weight[dest]){
                    ans = weight[dest];
                    result = dest;
                }
            }
        }
        if(ans != INT_MIN)
            cout<< result<<endl;
        else
            cout<< -1 << endl;
    }
    return 0;
}