//She ain't worth your time bro.
#include<bits/stdc++.h>
using namespace std;
void subsequence(int i,int ar[],vector<int> &d,int n)
{
	if(i == n)
	{
		for(auto it : d)
		{
			cout<<it<<" ";
		}
		if(d.size() == 0)
			cout<<"{}";
		cout<<endl;
		return;
	}
	//Do not Pick up the element
	subsequence(i+1,ar,d,n);

	//Pick up the element
	d.push_back(ar[i]);
	subsequence(i+1,ar,d,n);
	d.pop_back();
}

void solve()
{
    int ar[] = {3,1,2};
    int n = 3;
    vector<int> d;
    subsequence(0,ar,d,n);
}

int main()
{
    solve();
    return 0;
}