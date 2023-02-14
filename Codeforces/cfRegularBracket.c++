#include<bits/stdc++.h>
#define ll long long
using namespace std;
int longestParentheses(string s)
    {
        stack<int> st;
        st.push(-1);
        int ans = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')
                st.push(i);
            else
            {
                st.pop();
                if(st.empty())
                    st.push(i);
                else
                {cout<<st.top()<<" "<<ans <<endl;
                
                    ans +=max(ans,i-st.top());}
            }
        }
        return ans;
    }
int main()
{
    string s;
    cin>>s;
    ll n=longestParentheses(s);
    cout<<n<<endl;
}