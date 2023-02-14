#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& ar, int n){
    vector<int> o, e;
    for(int i = 0;i < n;i++){
        if(ar[i] %2== 1){
            o.push_back(ar[i]);
        }
        else
            e.push_back(ar[i]);
    }
    
    vector<int> resfin;
    if(o.size() <= 1 || e.size()==0){
        cout << -1 << endl;
        return;
    }
    if(o.size() % 2 == 0){
        for(int i = 0;i < o.size();i++){
            resfin.push_back(o[i]);
        }
        for(int i = 0;i < e.size();i++){
            resfin.push_back(e[i]);
        }
        for(auto it: resfin){
     cout << it << " ";
   }
   cout << "\n";
        return;
    }
    for(int i = 0;i < o.size()-1;i++){
        resfin.push_back(o[i]);
    }
    resfin.push_back(e[0]);
    resfin.push_back(o[o.size()-1]);
    for(int i=1;i<e.size();i++){
        resfin.push_back(e[i]);
    }
    for(auto it: resfin){
     cout << it << " ";
   }
   cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      vector<int> ar(n);
      for(int i=0;i<n;i++){
          cin >> ar[i];
      }
      solve(ar, n);
    }
}