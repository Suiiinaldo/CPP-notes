#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int tc;
    cin >> tc;
    cin.ignore();
    while(tc--){
        string s;
        cin>>s ;
        string se;  // isse pushback krna hai 2nd index par 
        char ch=s[s.length() - 2];
        cout << ch<< endl;
        if (s.length()>10){
            swap(s[s.length()-2],s[1]);
            cout << s <<endl;
        }
        else{
            cout <<s <<endl;
        }
    }
}