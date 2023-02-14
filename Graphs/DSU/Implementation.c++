//She ain't worth your time bro.
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n)
{
    primeNumbers.assign(n+1,true);
    primeNumbers[0] = primeNumbers[1] = false;
    for(int i = 2;i*i<=n;i++)
    {
        if(primeNumbers[i])
        {
            for(int j = i*i;j <= n;j += i)
                primeNumbers[j] = false;
        }
    }
}
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
class DSU
{
    vector<int> rank,parent,size;
    public:
    DSU(int n)
    {
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i = 0;i<=n;i++)
            parent[i] = i;
    }
    int findParent(int node)
    {
        if(parent[node] == node)
            return node;
        return  parent[node] = findParent(parent[node]);
    }
    void UnionByRank(int u,int v)
    {
        int ultParent_u = findParent(u);
        int ultParent_v = findParent(v);
        if(ultParent_u == ultParent_v)return;
        if(rank[ultParent_u] < rank[ultParent_v])
        {
            parent[ultParent_u] = ultParent_v;
        }
        else if(rank[ultParent_v] < rank[ultParent_u])
        {
            parent[ultParent_v] = ultParent_u;
        }
        else
        {
            parent[ultParent_v] = ultParent_u;
            rank[ultParent_u]++;
        }
    }
    void UnionBySize(int u,int v)
    {
        int ultParent_u = findParent(u);
        int ultParent_v = findParent(v);
        if(ultParent_u == ultParent_v)return;
        if(size[ultParent_u] < size[ultParent_v])
        {
            parent[ultParent_u] = ultParent_v;
            size[ultParent_v]+=size[ultParent_u];
        }
        else
        {
            parent[ultParent_v] = ultParent_u;
            size[ultParent_u]+=size[ultParent_v];
        }
    }
};
int32_t main()
{
    DSU ds(7);
    ds.UnionByRank(1,2);
    ds.UnionByRank(2,3);
    ds.UnionByRank(4,5);
    ds.UnionByRank(6,7);
    ds.UnionByRank(5,6);
    cout<<boolalpha<<(ds.findParent(3) == ds.findParent(7))<<endl;
    ds.UnionByRank(3,7);
    cout<<boolalpha<<(ds.findParent(3) == ds.findParent(7))<<endl;
}